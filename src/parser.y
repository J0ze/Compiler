/* src/parser.y */

/* C 声明区 (来自 3.1 节) */
%{
#include <stdio.h>
#include <string.h>
#include "common.h" // 包含 Scanner 定义
#include "ast.h"    // 引入 AST 节点定义

// 全局变量的声明 (在 main.c 中定义)
extern Scanner *scanner;
extern ASTNode *ast_root;

/* 声明我们真正的词法分析器 (来自 lexer.re) */
int real_yylex(YYSTYPE *yylval, Scanner *scanner);

/*
 * 包装函数：Bison 会调用这个 yylex(void)
 */
int yylex(void)
{
    /* 访问 Bison 生成的全局 yylval */
    extern YYSTYPE yylval; 

    /* 访问我们在 main.c 中定义的全局 scanner */
    extern Scanner *scanner; 

    /* 用正确的参数调用我们真正的词法分析器 */
    return real_yylex(&yylval, scanner);
}
%}

/* Bison 声明区 (来自 3.1 和 3.2 节) */
%union {
    char *str_val;
    struct ASTNode *node; // *** 更新：使用 ast.h 中的类型 ***
    NodeList *list;
}

/* 终结符 (Tokens) */
%token <str_val> IDENTIFIER STRING_LITERAL NUMERIC_LITERAL

/* Punctuators */
%token LBRACE RBRACE LPAREN RPAREN LBRACK RBRACK DOT SEMICOLON COMMA
%token LT GT LE GE EQ NE STRICT_EQ STRICT_NE
%token PLUS MINUS MUL MOD POWER INC DEC
%token LSHIFT RSHIFT URSHIFT BIT_AND BIT_OR BIT_XOR NOT BIT_NOT
%token LOGICAL_AND LOGICAL_OR NULLISH_COALESCING
%token CONDITIONAL COLON ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN POWER_ASSIGN
%token ARROW SPREAD

/* Keywords */
%token BREAK CASE CATCH CLASS CONST CONTINUE DEBUGGER DEFAULT DELETE DO
%token ELSE EXPORT EXTENDS FINALLY FOR FUNCTION IF IMPORT IN INSTANCEOF
%token NEW RETURN SUPER SWITCH THIS THROW TRY TYPEOF VAR VOID WHILE WITH
%token YIELD LET STATIC ENUM AWAIT

/* Literals */
%token TRUE_LITERAL FALSE_LITERAL NULL_LITERAL

/* 非终结符的类型 */
%type <list> statement_list_opt
%type <list> statement_list
%type <node> statement
%type <node> Script
%type <node> block_statement variable_statement expression_statement if_statement iteration_statement while_statement for_statement
%type <node> for_init
%type <node> return_statement
%type <node> function_declaration
%type <list> variable_declaration_list_inner
%type <node> variable_declaration
%type <node> variable_declaration_list
%type <node> expression assignment_expression conditional_expression
%type <node> logical_or_expression logical_and_expression bitwise_or_expression
%type <node> bitwise_xor_expression bitwise_and_expression equality_expression
%type <node> relational_expression shift_expression additive_expression
%type <node> multiplicative_expression unary_expression update_expression
%type <node> left_hand_side_expression new_expression call_expression
%type <node> member_expression primary_expression
%type <node> expression_opt
%type <node> break_statement
%type <node> continue_statement
%type <node> try_statement
%type <node> catch_clause
%type <node> finally_clause
%type <node> throw_statement
%type <node> object_expression
%type <list> property_list
%type <node> property
%type <node> property_name
%type <node> switch_statement
%type <list> switch_case_list
%type <node> switch_case
%type <list> case_statement_list
%type <list> arguments
%type <list> argument_list

/* 优先级和结合性 (来自 3.2 节) */
%left COMMA
%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN POWER_ASSIGN CONDITIONAL ARROW
%left LOGICAL_OR NULLISH_COALESCING
%left LOGICAL_AND
%left BIT_OR
%left BIT_XOR
%left BIT_AND
%left EQ NE STRICT_EQ STRICT_NE
%left LT LE GT GE IN INSTANCEOF
%left LSHIFT RSHIFT URSHIFT
%left PLUS MINUS
%left MUL MOD
%right POWER
%right NEW NOT BIT_NOT TYPEOF VOID DELETE AWAIT
%right INC DEC // 前缀自增/自减
%nonassoc UPOSTFIX // 模拟后缀
%left DOT LBRACK

/* 起始符号 */
%start Script

%%
/* 文法规则区 (来自 3.3, 3.4, 4.4 节) */

Script:
    statement_list_opt
    { ast_root = create_script_node($1); }
;

statement_list_opt:
    /* empty */
    { $$ = nodelist_create(); } // 返回一个空的 NodeList*
| statement_list
    { $$ = $1; } // $1 已经是一个 NodeList*
;

statement_list:
    statement 
    { 
        $$ = nodelist_create(); 
        nodelist_append($$, $1); 
    }
|   statement_list statement 
    { 
        nodelist_append($1, $2); // $1 是 NodeList*, $2 是新语句
        $$ = $1; 
    }
;

statement:
    block_statement
    { $$ = $1; }
| variable_statement
    { $$ = $1; }
| if_statement
    { $$ = $1; }
| return_statement
    { $$ = $1; }
| expression_statement
    { $$ = $1; }
| function_declaration
    { $$ = $1; }
| iteration_statement   
    { $$ = $1; }
| break_statement
    { $$ = $1; }
| continue_statement
    { $$ = $1; }
| switch_statement
    { $$ = $1; }
| try_statement
    { $$ = $1; }
| throw_statement
    { $$ = $1; }
;

block_statement:
    LBRACE statement_list_opt RBRACE
    { $$ = create_block_statement($2); }
;

/* ASI 规则的实现 (来自 3.4 和 4.3 节) */
optional_semicolon:
    SEMICOLON
| /* empty */ 
    {
        extern Scanner *scanner; // <-- 添加这一行
        
        if (!can_insert_semicolon(scanner)) {
            yyerror("missing semicolon");
            YYERROR;
        }
    }
;

variable_statement:
    variable_declaration_list optional_semicolon
    { $$ = $1; }
;

variable_declaration_list:
    LET variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_LET, $2); }
|   CONST variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_CONST, $2); }
|   VAR variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_VAR, $2); }
;

// variable_declaration_list_inner 是一个新的辅助规则
// 它负责构建 NodeList*
variable_declaration_list_inner:
    variable_declaration
    {
        $$ = nodelist_create();
        nodelist_append($$, $1);
    }
|   variable_declaration_list_inner COMMA variable_declaration
    {
        nodelist_append($1, $3);
        $$ = $1;
    }
;

variable_declaration:
    IDENTIFIER
    { $$ = create_variable_declarator(create_identifier_node($1), NULL); }
|   IDENTIFIER ASSIGN assignment_expression
    { $$ = create_variable_declarator(create_identifier_node($1), $3); }
;

if_statement:
    IF LPAREN expression RPAREN statement
    { $$ = create_if_statement($3, $5, NULL); }
| IF LPAREN expression RPAREN statement ELSE statement
    { $$ = create_if_statement($3, $5, $7); }
;

expression_statement:
    expression optional_semicolon
    { $$ = create_expression_statement($1); }
;

/* 受限产生式 (来自 4.4 节) */
expression_opt:
    /* empty */
    { $$ = NULL; }
| expression
    { $$ = $1; }
;

return_statement:
    RETURN { scanner->restrict_new_line = true; } expression_opt optional_semicolon
    { 
        scanner->restrict_new_line = false; // 退出受限模式
        $$ = create_return_statement($3);
    }
;

function_declaration:
    FUNCTION IDENTIFIER arguments block_statement
    { $$ = create_function_declaration(create_identifier_node($2), $3, $4); }
;

iteration_statement:
    while_statement
    { $$ = $1; }
|   for_statement
    { $$ = $1; }
;

while_statement:
    WHILE LPAREN expression RPAREN statement
    { $$ = create_while_statement($3, $5); }
;

for_statement:
    FOR LPAREN for_init SEMICOLON expression_opt SEMICOLON expression_opt RPAREN statement
    { $$ = create_for_statement($3, $5, $7, $9); }
;

// for_init 规则处理 for 循环的第一部分
for_init:
    /* empty */
    { $$ = NULL; }
|   variable_declaration_list // 例如: let i = 0, j = 1
    { $$ = $1; }
|   expression              // 例如: i = 0, j = 0
    { $$ = $1; }
;

break_statement:
    BREAK optional_semicolon
    { $$ = create_break_statement(); }
;

continue_statement:
    CONTINUE optional_semicolon
    { $$ = create_continue_statement(); }
;

switch_statement:
    SWITCH LPAREN expression RPAREN LBRACE switch_case_list RBRACE
    { $$ = create_switch_statement($3, $6); }
;

try_statement:
    // try { ... } catch (e) { ... }
    TRY block_statement catch_clause
    { $$ = create_try_statement($2, $3, NULL); }

    // try { ... } finally { ... }
|   TRY block_statement finally_clause
    { $$ = create_try_statement($2, NULL, $3); }

    // try { ... } catch (e) { ... } finally { ... }
|   TRY block_statement catch_clause finally_clause
    { $$ = create_try_statement($2, $3, $4); }
;

catch_clause:
    CATCH LPAREN IDENTIFIER RPAREN block_statement
    { $$ = create_catch_clause(create_identifier_node($3), $5); }
;

finally_clause:
    FINALLY block_statement
    { $$ = $2; } // finally 子句只是一个 BlockStatement
;

throw_statement:
    THROW { scanner->restrict_new_line = true; } expression optional_semicolon
    {
        scanner->restrict_new_line = false; // 退出受限模式
        $$ = create_throw_statement($3);
    }
;

// switch_case_list 负责构建 SwitchCase 节点的 NodeList
switch_case_list:
    /* empty */
    { $$ = nodelist_create(); }
|   switch_case_list switch_case
    { 
        nodelist_append($1, $2);
        $$ = $1;
    }
;

// switch_case 匹配 'case ...:' 或 'default:'
switch_case:
    CASE expression COLON case_statement_list
    { $$ = create_switch_case($2, $4); }
|   DEFAULT COLON case_statement_list
    { $$ = create_switch_case(NULL, $3); }
;

case_statement_list:
    /* empty */
    { $$ = nodelist_create(); }
|   case_statement_list statement
    {
        nodelist_append($1, $2);
        $$ = $1;
    }
;
/* --- 表达式 (来自 3.3 节) --- */
expression:
    assignment_expression
    { $$ = $1; }
| expression COMMA assignment_expression
    { $$ = create_binary_expr(OP_COMMA, $1, $3); }
;

assignment_expression:
    conditional_expression
    { $$ = $1; }
| left_hand_side_expression ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_ASSIGN, $1, $3); }
/* ... 其他赋值表达式 ... */
;

conditional_expression:
    logical_or_expression
    { $$ = $1; }
|   logical_or_expression CONDITIONAL assignment_expression COLON assignment_expression
    { $$ = create_conditional_expression($1, $3, $5); }
;

logical_or_expression:
    logical_and_expression
    { $$ = $1; }
| logical_or_expression LOGICAL_OR logical_and_expression
    { $$ = create_binary_expr(OP_LOGICAL_OR, $1, $3); }
;

logical_and_expression:
    bitwise_or_expression
    { $$ = $1; }
| logical_and_expression LOGICAL_AND bitwise_or_expression
    { $$ = create_binary_expr(OP_LOGICAL_AND, $1, $3); }
;

bitwise_or_expression:
    bitwise_xor_expression
    { $$ = $1; }
| bitwise_or_expression BIT_OR bitwise_xor_expression
    { $$ = create_binary_expr(OP_BIT_OR, $1, $3); }
;

bitwise_xor_expression:
    bitwise_and_expression
    { $$ = $1; }
| bitwise_xor_expression BIT_XOR bitwise_and_expression
    { $$ = create_binary_expr(OP_BIT_XOR, $1, $3); }
;

bitwise_and_expression:
    equality_expression
    { $$ = $1; }
| bitwise_and_expression BIT_AND equality_expression
    { $$ = create_binary_expr(OP_BIT_AND, $1, $3); }
;

equality_expression:
    relational_expression
    { $$ = $1; }
| equality_expression EQ relational_expression
    { $$ = create_binary_expr(OP_EQ, $1, $3); }
| equality_expression NE relational_expression
    { $$ = create_binary_expr(OP_NE, $1, $3); }
| equality_expression STRICT_EQ relational_expression
    { $$ = create_binary_expr(OP_STRICT_EQ, $1, $3); }
| equality_expression STRICT_NE relational_expression
    { $$ = create_binary_expr(OP_STRICT_NE, $1, $3); }
;

relational_expression:
    shift_expression
    { $$ = $1; }
| relational_expression LT shift_expression
    { $$ = create_binary_expr(OP_LT, $1, $3); }
| relational_expression GT shift_expression
    { $$ = create_binary_expr(OP_GT, $1, $3); }
| relational_expression LE shift_expression
    { $$ = create_binary_expr(OP_LE, $1, $3); }
| relational_expression GE shift_expression
    { $$ = create_binary_expr(OP_GE, $1, $3); }
| relational_expression IN shift_expression
    { $$ = create_binary_expr(OP_IN, $1, $3); }
| relational_expression INSTANCEOF shift_expression
    { $$ = create_binary_expr(OP_INSTANCEOF, $1, $3); }
;

shift_expression:
    additive_expression
    { $$ = $1; }
| shift_expression LSHIFT additive_expression
    { $$ = create_binary_expr(OP_LSHIFT, $1, $3); }
| shift_expression RSHIFT additive_expression
    { $$ = create_binary_expr(OP_RSHIFT, $1, $3); }
| shift_expression URSHIFT additive_expression
    { $$ = create_binary_expr(OP_URSHIFT, $1, $3); }
;

additive_expression:
    multiplicative_expression
    { $$ = $1; }
| additive_expression PLUS multiplicative_expression
    { $$ = create_binary_expr(OP_PLUS, $1, $3); }
| additive_expression MINUS multiplicative_expression
    { $$ = create_binary_expr(OP_MINUS, $1, $3); }
;

multiplicative_expression:
    unary_expression
    { $$ = $1; }
| multiplicative_expression MUL unary_expression
    { $$ = create_binary_expr(OP_MUL, $1, $3); }
| multiplicative_expression MOD unary_expression
    { $$ = create_binary_expr(OP_MOD, $1, $3); }
| multiplicative_expression POWER unary_expression
    { $$ = create_binary_expr(OP_POWER, $1, $3); }
;

unary_expression:
    update_expression
    { $$ = $1; }
| DELETE unary_expression
    { $$ = create_unary_expr(OP_DELETE, $2, true); }
| VOID unary_expression
    { $$ = create_unary_expr(OP_VOID, $2, true); }
| TYPEOF unary_expression
    { $$ = create_unary_expr(OP_TYPEOF, $2, true); }
| INC unary_expression
    { $$ = create_unary_expr(OP_INC, $2, true); }
| DEC unary_expression
    { $$ = create_unary_expr(OP_DEC, $2, true); }
| PLUS unary_expression
    { $$ = create_unary_expr(OP_UNARY_PLUS, $2, true); }
| MINUS unary_expression
    { $$ = create_unary_expr(OP_UNARY_MINUS, $2, true); }
| BIT_NOT unary_expression
    { $$ = create_unary_expr(OP_BIT_NOT, $2, true); }
| NOT unary_expression
    { $$ = create_unary_expr(OP_NOT, $2, true); }
/* ... AWAIT ... */
;

update_expression:
    left_hand_side_expression
    { $$ = $1; }
| left_hand_side_expression INC %prec UPOSTFIX
    { $$ = create_unary_expr(OP_POST_INC, $1, false); }
| left_hand_side_expression DEC %prec UPOSTFIX
    { $$ = create_unary_expr(OP_POST_DEC, $1, false); }
;

left_hand_side_expression:
    new_expression
    { $$ = $1; }
| call_expression
    { $$ = $1; }
;

new_expression:
    member_expression
    { $$ = $1; }
|   NEW new_expression // 处理: new MyClass (无括号)
    { $$ = create_new_expression($2, NULL); }
;

call_expression:
    member_expression arguments
    { $$ = create_call_expression($1, $2); }
|   NEW new_expression arguments // 处理: new MyClass() (带括号)
    { $$ = create_new_expression($2, $3); }
;

member_expression:
    primary_expression
    { $$ = $1; }
| member_expression LBRACK expression RBRACK
    { $$ = create_member_access($1, $3, true); }
| member_expression DOT IDENTIFIER
    { $$ = create_member_access($1, create_identifier_node($3), false); }
;

arguments:
    LPAREN RPAREN
    { $$ = nodelist_create(); } // Return a new empty list
|   LPAREN argument_list RPAREN
    { $$ = $2; }               // Return the list from argument_list
;

argument_list:
    assignment_expression
    { 
        $$ = nodelist_create(); // Create a new list
        nodelist_append($$, $1);  // Add the first argument
    } 
|   argument_list COMMA assignment_expression
    { 
        nodelist_append($1, $3);  // Add the next argument to the existing list
        $$ = $1;                  // Return the modified list
    }
;

primary_expression:
    THIS
    { $$ = create_this_node(); }
| IDENTIFIER
    { $$ = create_identifier_node($1); }
| NUMERIC_LITERAL
    { $$ = create_literal_node(LITERAL_NUMBER, $1); }
| STRING_LITERAL
    { $$ = create_literal_node(LITERAL_STRING, $1); }
| TRUE_LITERAL
    { $$ = create_literal_node(LITERAL_TRUE, strdup("true")); }
| FALSE_LITERAL
    { $$ = create_literal_node(LITERAL_FALSE, strdup("false")); }
| NULL_LITERAL
    { $$ = create_literal_node(LITERAL_NULL, strdup("null")); }
| LPAREN expression RPAREN
    { $$ = $2; } // 直接传递括号内表达式的节点
| object_expression
    { $$ = $1; }
;

object_expression:
    // 空对象 {}
    LBRACE RBRACE
    { $$ = create_object_expression(nodelist_create()); }

    // { a: 1, b: 2 }
|   LBRACE property_list RBRACE
    { $$ = create_object_expression($2); }
;

// property_list 负责构建属性的 NodeList
property_list:
    property
    {
        $$ = nodelist_create();
        nodelist_append($$, $1);
    }
|   property_list COMMA property
    {
        nodelist_append($1, $3);
        $$ = $1;
    }
;

// property 匹配 'key: value'
property:
    property_name COLON assignment_expression
    { $$ = create_property($1, $3); }
;

// property_name 匹配对象的键 (key)
// ESTree 允许标识符、字符串或数字作为键
property_name:
    IDENTIFIER
    { $$ = create_identifier_node($1); }
|   STRING_LITERAL
    { $$ = create_literal_node(LITERAL_STRING, $1); }
|   NUMERIC_LITERAL
    { $$ = create_literal_node(LITERAL_NUMBER, $1); }
;

%%
/* 附加 C 代码区 */
/* (main 和 yyerror 已移至 main.c) */