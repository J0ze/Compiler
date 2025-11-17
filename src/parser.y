/* src/parser.y */

/* C 声明区 (来自 3.1 节) */
%{
#include <stdio.h>
#include <string.h>
#include "common.h" // 包含 Scanner/ParserState 定义
// #include "ast.h" // <-- 修复: 移除. 'common.h' 已经包含了它.
// #include "parser.tab.h" // <-- 修复: 移除. 'common.h' 已经包含了它.


// 全局变量的声明 (在 main.c 中定义)
extern ParserState *scanner;
extern ASTNode *ast_root;

/* 声明我们真正的词法分析器 (来自 lexer.re) */
int yylex_internal(YYSTYPE *yylval, ParserState *state);

// 声明 bison 调用的包装器 (yylex)
int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, ParserState* state);


/* --- ASI 引擎 C 代码 (来自文档 5.3 节) --- */

%}

/* * 修复: 我们不再使用 %code requires.
 * 'common.h' 现在负责在 'parser.tab.h' 之前
 * 加载 'ast.h' (和 'NodeList').
 */


/* 启用纯净/可_re-entrant 解析器 (Bison 2.x 语法) */
%pure-parser

/* 启用位置跟踪 (YYLTYPE) */
%locations

/* 定义传递给 yyparse 和 yylex 的额外参数 */
%parse-param { ParserState* state }
%lex-param { ParserState* state }

/* (Bison 2.x 需要在 %{...%} 外部定义 %union) */
%union {
    char *str_val;
    struct ASTNode *node;
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
%token TOK_VIRTUAL_SEMICOLON

/* * 非终结符的类型
 */

/* 列表类型 <list> (NodeList*) */
%type <list> statement_list_opt
%type <list> statement_list
%type <list> variable_declaration_list_inner
%type <list> property_list
%type <list> element_list
%type <list> arrow_parameter_list
%type <list> identifier_list
%type <list> method_definition_list
%type <list> switch_case_list
%type <list> case_statement_list
%type <list> arguments
%type <list> argument_list

/* 节点类型 <node> (ASTNode*) */
%type <node> Script
%type <node> statement
%type <node> block_statement 
%type <node> variable_statement 
%type <node> expression_statement
%type <node> if_statement 
%type <node> iteration_statement 
%type <node> while_statement 
%type <node> for_statement 
%type <node> do_while_statement
%type <node> for_init
%type <node> return_statement
%type <node> function_declaration
%type <node> variable_declaration
%type <node> variable_declaration_list
%type <node> expression 
%type <node> assignment_expression 
%type <node> conditional_expression
%type <node> logical_or_expression 
%type <node> logical_and_expression 
%type <node> bitwise_or_expression
%type <node> bitwise_xor_expression 
%type <node> bitwise_and_expression 
%type <node> equality_expression
%type <node> relational_expression 
%type <node> shift_expression 
%type <node> additive_expression
%type <node> multiplicative_expression 
%type <node> unary_expression 
%type <node> update_expression
%type <node> left_hand_side_expression 
%type <node> new_expression 
%type <node> call_expression
%type <node> member_expression 
%type <node> primary_expression
%type <node> expression_opt
%type <node> break_statement
%type <node> continue_statement
%type <node> try_statement
%type <node> catch_clause
%type <node> finally_clause
%type <node> throw_statement
%type <node> object_expression
%type <node> property
%type <node> property_name
%type <node> array_expression
%type <node> arrow_function_expression
%type <node> arrow_body
%type <node> function_expression
%type <node> class_declaration
%type <node> class_body
%type <node> method_definition
%type <node> function_name_opt
%type <node> switch_statement
%type <node> switch_case
%type <node> empty_statement /* <-- 修复: 为空语句添加类型 */


/* 优先级和结合性 */
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
/* 文法规则区 */

Script:
    statement_list_opt
    { ast_root = create_script_node($1); }

statement_list_opt:
    /* empty */
    { $$ = nodelist_create(); }
|   statement_list
    { $$ = $1; }

statement_list:
    statement 
    { 
        $$ = nodelist_create(); 
        if ($1 != NULL) nodelist_append($$, $1); /* <-- 修复: 检查 NULL */
    }
|   statement_list statement 
    { 
        if ($2 != NULL) nodelist_append($1, $2); /* <-- 修复: 检查 NULL */
        $$ = $1; 
    }

statement:
    block_statement
    { $$ = $1; }
|   variable_statement
    { $$ = $1; }
|   if_statement
    { $$ = $1; }
|   return_statement
    { $$ = $1; }
|   expression_statement
    { $$ = $1; }
|   function_declaration
    { $$ = $1; }
|   iteration_statement    
    { $$ = $1; }
|   break_statement
    { $$ = $1; }
|   continue_statement
    { $$ = $1; }
|   switch_statement
    { $$ = $1; }
|   try_statement
    { $$ = $1; }
|   throw_statement
    { $$ = $1; }
|   class_declaration
    { $$ = $1; }
|   empty_statement /* <-- 修复: 添加空语句规则 */
    { $$ = $1; }

/*
 * 修复: 为空语句 (e.g. ";") 添加新规则
 * 这对于 ASI 插入虚拟分号 (如在 '}' 之后) 也至关重要
 */
empty_statement:
    StatementTerminator
    { $$ = NULL; } /* 空语句在 AST 中表示为 NULL */


block_statement:
    LBRACE statement_list_opt RBRACE
    { $$ = create_block_statement($2); }

/*
 * StatementTerminator 规则 (来自文档 4.2 节)
 * 它匹配一个真实的分号或我们的虚拟分号。
 */
StatementTerminator:
    SEMICOLON
|   TOK_VIRTUAL_SEMICOLON

variable_statement:
    variable_declaration_list StatementTerminator
    { $$ = $1; }

variable_declaration_list:
    LET variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_LET, $2); }
|   CONST variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_CONST, $2); }
|   VAR variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_VAR, $2); }

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

variable_declaration:
    IDENTIFIER
    { $$ = create_variable_declarator(create_identifier_node($1), NULL); }
|   IDENTIFIER ASSIGN assignment_expression
    { $$ = create_variable_declarator(create_identifier_node($1), $3); }

if_statement:
    IF LPAREN expression RPAREN statement
    { $$ = create_if_statement($3, $5, NULL); }
|   IF LPAREN expression RPAREN statement ELSE statement
    { $$ = create_if_statement($3, $5, $7); }

expression_statement:
    expression StatementTerminator
    { $$ = create_expression_statement($1); }

/* 受限产生式 (来自 4.4 节) */
expression_opt:
    /* empty */
    { $$ = NULL; }
|   expression
    { $$ = $1; }

return_statement:
    RETURN { /* 'restrict_new_line' 标志现在由 ASI 包装器在 'last_token' 中处理 */ } 
    expression_opt StatementTerminator
    { 
        $$ = create_return_statement($3);
    }

function_declaration:
    FUNCTION IDENTIFIER arguments block_statement
    { $$ = create_function_declaration(create_identifier_node($2), $3, $4); }

iteration_statement:
    while_statement
    { $$ = $1; }
|   for_statement
    { $$ = $1; }
|   do_while_statement
    { $$ = $1; }

while_statement:
    WHILE LPAREN expression RPAREN statement
    { $$ = create_while_statement($3, $5); }

for_statement:
    FOR LPAREN for_init SEMICOLON expression_opt SEMICOLON expression_opt RPAREN statement
    { $$ = create_for_statement($3, $5, $7, $9); }

// for_init 规则处理 for 循环的第一部分
for_init:
    /* empty */
    { $$ = NULL; }
|   variable_declaration_list
    { $$ = $1; }
|   expression
    { $$ = $1; }

do_while_statement:
    DO statement WHILE LPAREN expression RPAREN StatementTerminator
    { $$ = create_do_while_statement($2, $5); }

break_statement:
    BREAK StatementTerminator
    { $$ = create_break_statement(); }

continue_statement:
    CONTINUE StatementTerminator
    { $$ = create_continue_statement(); }

switch_statement:
    SWITCH LPAREN expression RPAREN LBRACE switch_case_list RBRACE
    { $$ = create_switch_statement($3, $6); }

try_statement:
    TRY block_statement catch_clause
    { $$ = create_try_statement($2, $3, NULL); }
|   TRY block_statement finally_clause
    { $$ = create_try_statement($2, NULL, $3); }
|   TRY block_statement catch_clause finally_clause
    { $$ = create_try_statement($2, $3, $4); }

catch_clause:
    CATCH LPAREN IDENTIFIER RPAREN block_statement
    { $$ = create_catch_clause(create_identifier_node($3), $5); }

finally_clause:
    FINALLY block_statement
    { $$ = $2; } 

throw_statement:
    THROW { /* 'restrict_new_line' 标志现在由 ASI 包装器在 'last_token' 中处理 */ } 
    expression StatementTerminator
    {
        $$ = create_throw_statement($3);
    }

switch_case_list:
    /* empty */
    { $$ = nodelist_create(); }
|   switch_case_list switch_case
    { 
        nodelist_append($1, $2);
        $$ = $1;
    }

switch_case:
    CASE expression COLON case_statement_list
    { $$ = create_switch_case($2, $4); }
|   DEFAULT COLON case_statement_list
    { $$ = create_switch_case(NULL, $3); }

case_statement_list:
    /* empty */
    { $$ = nodelist_create(); }
|   case_statement_list statement
    {
        if ($2 != NULL) nodelist_append($1, $2); /* <-- 修复: 检查 NULL */
        $$ = $1;
    }

arrow_parameter_list:
    /* empty */
    { $$ = nodelist_create(); }
|   identifier_list
    { $$ = $1; }

identifier_list:
    IDENTIFIER
    {
        $$ = nodelist_create();
        nodelist_append($$, create_identifier_node($1));
    }
|   identifier_list COMMA IDENTIFIER
    {
        nodelist_append($1, create_identifier_node($3));
        $$ = $1;
    }

function_name_opt:
    /* empty */ { $$ = NULL; }
|   IDENTIFIER { $$ = create_identifier_node($1); }

function_expression:
    FUNCTION function_name_opt arguments block_statement
    { $$ = create_function_expression($2, $3, $4); }

class_declaration:
    CLASS IDENTIFIER class_body
    { $$ = create_class_declaration(create_identifier_node($2), NULL, $3); }
|   CLASS IDENTIFIER EXTENDS assignment_expression class_body
    { $$ = create_class_declaration(create_identifier_node($2), $4, $5); }

class_body:
    LBRACE method_definition_list RBRACE
    { $$ = create_class_body($2); }

method_definition_list:
    /* empty */
    { $$ = nodelist_create(); }
|   method_definition_list method_definition
    {
        nodelist_append($1, $2);
        $$ = $1;
    }

method_definition:
    property_name arguments block_statement
    {
        ASTNode* func_value = create_function_expression(NULL, $2, $3);
        $$ = create_method_definition($1, func_value, false); 
    }
|   STATIC property_name arguments block_statement
    {
        ASTNode* func_value = create_function_expression(NULL, $3, $4);
        $$ = create_method_definition($2, func_value, true); 
    }

/* --- 表达式 (来自 3.3 节) --- */
expression:
    assignment_expression
    { $$ = $1; }
|   expression COMMA assignment_expression
    { $$ = create_binary_expr(OP_COMMA, $1, $3); }

assignment_expression:
    conditional_expression
    { $$ = $1; }
|   arrow_function_expression
    { $$ = $1; }
|   left_hand_side_expression ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_ASSIGN, $1, $3); }
|   left_hand_side_expression ADD_ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_PLUS, $1, $3); } /* 示例: 可扩展 */
|   left_hand_side_expression SUB_ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_MINUS, $1, $3); } /* 示例: 可扩展 */


conditional_expression:
    logical_or_expression
    { $$ = $1; }
|   logical_or_expression CONDITIONAL assignment_expression COLON assignment_expression
    { $$ = create_conditional_expression($1, $3, $5); }

logical_or_expression:
    logical_and_expression
    { $$ = $1; }
|   logical_or_expression LOGICAL_OR logical_and_expression
    { $$ = create_binary_expr(OP_LOGICAL_OR, $1, $3); }

logical_and_expression:
    bitwise_or_expression
    { $$ = $1; }
|   logical_and_expression LOGICAL_AND bitwise_or_expression
    { $$ = create_binary_expr(OP_LOGICAL_AND, $1, $3); }

bitwise_or_expression:
    bitwise_xor_expression
    { $$ = $1; }
|   bitwise_or_expression BIT_OR bitwise_xor_expression
    { $$ = create_binary_expr(OP_BIT_OR, $1, $3); }

bitwise_xor_expression:
    bitwise_and_expression
    { $$ = $1; }
|   bitwise_xor_expression BIT_XOR bitwise_and_expression
    { $$ = create_binary_expr(OP_BIT_XOR, $1, $3); }

bitwise_and_expression:
    equality_expression
    { $$ = $1; }
|   bitwise_and_expression BIT_AND equality_expression
    { $$ = create_binary_expr(OP_BIT_AND, $1, $3); }

equality_expression:
    relational_expression
    { $$ = $1; }
|   equality_expression EQ relational_expression
    { $$ = create_binary_expr(OP_EQ, $1, $3); }
|   equality_expression NE relational_expression
    { $$ = create_binary_expr(OP_NE, $1, $3); }
|   equality_expression STRICT_EQ relational_expression
    { $$ = create_binary_expr(OP_STRICT_EQ, $1, $3); }
|   equality_expression STRICT_NE relational_expression
    { $$ = create_binary_expr(OP_STRICT_NE, $1, $3); }

relational_expression:
    shift_expression
    { $$ = $1; }
|   relational_expression LT shift_expression
    { $$ = create_binary_expr(OP_LT, $1, $3); }
|   relational_expression GT shift_expression
    { $$ = create_binary_expr(OP_GT, $1, $3); }
|   relational_expression LE shift_expression
    { $$ = create_binary_expr(OP_LE, $1, $3); }
|   relational_expression GE shift_expression
    { $$ = create_binary_expr(OP_GE, $1, $3); }
|   relational_expression IN shift_expression
    { $$ = create_binary_expr(OP_IN, $1, $3); }
|   relational_expression INSTANCEOF shift_expression
    { $$ = create_binary_expr(OP_INSTANCEOF, $1, $3); }

shift_expression:
    additive_expression
    { $$ = $1; }
|   shift_expression LSHIFT additive_expression
    { $$ = create_binary_expr(OP_LSHIFT, $1, $3); }
|   shift_expression RSHIFT additive_expression
    { $$ = create_binary_expr(OP_RSHIFT, $1, $3); }
|   shift_expression URSHIFT additive_expression
    { $$ = create_binary_expr(OP_URSHIFT, $1, $3); }

additive_expression:
    multiplicative_expression
    { $$ = $1; }
|   additive_expression PLUS multiplicative_expression
    { $$ = create_binary_expr(OP_PLUS, $1, $3); }
|   additive_expression MINUS multiplicative_expression
    { $$ = create_binary_expr(OP_MINUS, $1, $3); }

multiplicative_expression:
    unary_expression
    { $$ = $1; }
|   multiplicative_expression MUL unary_expression
    { $$ = create_binary_expr(OP_MUL, $1, $3); }
|   multiplicative_expression MOD unary_expression
    { $$ = create_binary_expr(OP_MOD, $1, $3); }
|   multiplicative_expression POWER unary_expression
    { $$ = create_binary_expr(OP_POWER, $1, $3); }

unary_expression:
    update_expression
    { $$ = $1; }
|   DELETE unary_expression
    { $$ = create_unary_expr(OP_DELETE, $2, true); }
|   VOID unary_expression
    { $$ = create_unary_expr(OP_VOID, $2, true); }
|   TYPEOF unary_expression
    { $$ = create_unary_expr(OP_TYPEOF, $2, true); }
|   INC unary_expression
    { $$ = create_unary_expr(OP_INC, $2, true); }
|   DEC unary_expression
    { $$ = create_unary_expr(OP_DEC, $2, true); }
|   PLUS unary_expression
    { $$ = create_unary_expr(OP_UNARY_PLUS, $2, true); }
|   MINUS unary_expression
    { $$ = create_unary_expr(OP_UNARY_MINUS, $2, true); }
|   BIT_NOT unary_expression
    { $$ = create_unary_expr(OP_BIT_NOT, $2, true); }
|   NOT unary_expression
    { $$ = create_unary_expr(OP_NOT, $2, true); }

update_expression:
    left_hand_side_expression
    { $$ = $1; }
|   left_hand_side_expression INC %prec UPOSTFIX
    { $$ = create_unary_expr(OP_POST_INC, $1, false); }
|   left_hand_side_expression DEC %prec UPOSTFIX
    { $$ = create_unary_expr(OP_POST_DEC, $1, false); }

left_hand_side_expression:
    new_expression
    { $$ = $1; }
|   call_expression
    { $$ = $1; }

new_expression:
    member_expression
    { $$ = $1; }
|   NEW new_expression
    { $$ = create_new_expression($2, NULL); }

call_expression:
    member_expression arguments
    { $$ = create_call_expression($1, $2); }
|   NEW new_expression arguments 
    { $$ = create_new_expression($2, $3); }

member_expression:
    primary_expression
    { $$ = $1; }
|   member_expression LBRACK expression RBRACK
    { $$ = create_member_access($1, $3, true); }
|   member_expression DOT IDENTIFIER
    { $$ = create_member_access($1, create_identifier_node($3), false); }

arguments:
    LPAREN RPAREN
    { $$ = nodelist_create(); } 
|   LPAREN argument_list RPAREN
    { $$ = $2; }               

argument_list:
    assignment_expression
    { 
        $$ = nodelist_create(); 
        nodelist_append($$, $1);  
    } 
|   argument_list COMMA assignment_expression
    { 
        nodelist_append($1, $3);  
        $$ = $1;                  
    }

primary_expression:
    THIS
    { $$ = create_this_node(); }
|   IDENTIFIER  /* 直接使用 IDENTIFIER */
    { $$ = create_identifier_node($1); }
|   NUMERIC_LITERAL  /* 直接使用 NUMERIC_LITERAL */
    { $$ = create_literal_node(LITERAL_NUMBER, $1); }
|   STRING_LITERAL  /* 直接使用 STRING_LITERAL */
    { $$ = create_literal_node(LITERAL_STRING, $1); }
|   TRUE_LITERAL
    { $$ = create_literal_node(LITERAL_TRUE, strdup("true")); }
|   FALSE_LITERAL
    { $$ = create_literal_node(LITERAL_FALSE, strdup("false")); }
|   NULL_LITERAL
    { $$ = create_literal_node(LITERAL_NULL, strdup("null")); }
|   LPAREN expression RPAREN
    { $$ = $2; } 
|   object_expression
    { $$ = $1; }
|   array_expression
    { $$ = $1; }
|   function_expression
    { $$ = $1; }
|   SUPER
    { $$ = create_super_node(); }

object_expression:
    LBRACE RBRACE
    { $$ = create_object_expression(nodelist_create()); }
|   LBRACE property_list RBRACE
    { $$ = create_object_expression($2); }

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

property:
    property_name COLON assignment_expression
    { $$ = create_property($1, $3); }

property_name:
    IDENTIFIER
    { $$ = create_identifier_node($1); }
|   NUMERIC_LITERAL
    { $$ = create_literal_node(LITERAL_NUMBER, $1); }
|   STRING_LITERAL
    { $$ = create_literal_node(LITERAL_STRING, $1); }

array_expression:
    LBRACK RBRACK
    { $$ = create_array_expression(nodelist_create()); }
|   LBRACK element_list RBRACK
    { $$ = create_array_expression($2); }

element_list:
    assignment_expression
    {
        $$ = nodelist_create();
        nodelist_append($$, $1);
    }
|   element_list COMMA assignment_expression
    {
        nodelist_append($1, $3);
        $$ = $1;
    }

arrow_function_expression:
    /* 规则 1: (a, b) => ... */
    LPAREN arrow_parameter_list RPAREN ARROW arrow_body
    {
        bool is_expression_body = ($5->type != NODE_BLOCK_STATEMENT);
        $$ = create_arrow_function_expression($2, $5, is_expression_body);
    }
|   /* 规则 2: a => ... */
    IDENTIFIER ARROW arrow_body
    {
        NodeList *params = nodelist_create();
        nodelist_append(params, create_identifier_node($1));
        bool is_expression_body = ($3->type != NODE_BLOCK_STATEMENT);
        $$ = create_arrow_function_expression(params, $3, is_expression_body);
    }

arrow_body:
    block_statement
    { $$ = $1; }
|   logical_or_expression
    { $$ = $1; }

%%
/* 辅助函数：是否为受限关键字？ */
static bool is_restricted_keyword(int token) {
    switch (token) {
        case RETURN:
        case BREAK:
        case CONTINUE:
        case THROW:
        case YIELD: 
        case AWAIT: 
            return true;
        default:
            return false;
    }
}

/* 辅助函数：此标记是否会“冒犯”一个表达式？ */
static bool is_offending_token(int token) {
    // 白名单策略：只有这些标记可以合法地跟在一个表达式后面
    switch (token) {
        case '(':
        case '[':
        case '.':
        case '+':
        case '-':
        case '*':
        case '%':
        case '/':
        case '?':
        case ':':
        case ',':
        case POWER:
        case LT:
        case GT:
        case LE:
        case GE:
        case EQ:
        case NE:
        case STRICT_EQ:
        case STRICT_NE:
        case LOGICAL_AND:
        case LOGICAL_OR:
        case NULLISH_COALESCING:
        case LSHIFT:
        case RSHIFT:
        case URSHIFT:
        case BIT_AND:
        case BIT_OR:
        case BIT_XOR:
        case ASSIGN:
        case ADD_ASSIGN:
        case SUB_ASSIGN:
        case MUL_ASSIGN:
        case POWER_ASSIGN:
        case IDENTIFIER: 
        case NUMERIC_LITERAL:
        case STRING_LITERAL:
        case TRUE_LITERAL:
        case FALSE_LITERAL:
        case NULL_LITERAL:
        case RPAREN:
        case RBRACK:
        case RBRACE:
        case FUNCTION:
        case CLASS:
        case IF:
        case FOR:
        case WHILE:
        case DO:
        case SWITCH:
        case TRY:
        case RETURN:
        case BREAK:
        case CONTINUE:
        case THROW:
        case STATIC:
        case CONST:
        case LET:
        case VAR:
            return false;
        default:
            return true;
    }
}

/* yylex 包装器 (ASI 引擎) */
int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, ParserState* state) {
    
    /* * --- 修复：更新位置跟踪 (Bison %locations) ---
     * 在我们做任何事情之前，更新 yyllocp。
     * 这是一个基本的实现；更复杂的实现会跟踪列。
     */
    yyllocp->first_line = state->line;
    yyllocp->last_line = state->line;
    if (state->has_buffered_token) {
        state->has_buffered_token = false;
        state->last_token = state->buffered_token;
        
        *yylvalp = state->buffered_yylval; // <--- 修复 1: 恢复保存的值
        memset(&state->buffered_yylval, 0, sizeof(YYSTYPE)); // 清空缓冲区
        
        return state->buffered_token;
    }

    // 2. 获取下一个“原始”标记
    int next_token = yylex_internal(yylvalp, state);
    
    /* * 在我们返回之前，再次更新 yyllocp 的 "last_line" 
     * 因为 yylex_internal 可能已经改变了 state->line 
     */
    yyllocp->last_line = state->line;


    // 3. 受限产生式检查
    // (如果上一个 token 是受限的，并且我们看到了换行)
    if (is_restricted_keyword(state->last_token) && state->has_seen_newline) {
        state->buffered_token = next_token;
        state->buffered_yylval = *yylvalp; // <--- 修复 2: 保存 yylval
        state->has_buffered_token = true;
        state->has_seen_newline = false; // “消耗”换行符
        state->last_token = TOK_VIRTUAL_SEMICOLON;
        memset(yylvalp, 0, sizeof(YYSTYPE));
        return TOK_VIRTUAL_SEMICOLON;
    }

    // 4. 通用 ASI 规则 1, 2, 3
    bool asi_rule_1 = state->has_seen_newline && is_offending_token(next_token);
    bool asi_rule_3 = (next_token == 0);      // 0 是 EOF (文件结尾)
    if (asi_rule_1 || asi_rule_3) {
        if (state->last_token == SEMICOLON || 
            state->last_token == TOK_VIRTUAL_SEMICOLON ||
            state->last_token == LBRACE ||
            state->last_token == 0)
        {
            // 不执行 ASI，继续（这将导致下一轮的 next_token 被正常处理）
        }
        else {
            // (我们尚未实现 'for' 循环状态，所以跳过)

            // 插入虚拟分号
            state->buffered_token = next_token;
            state->buffered_yylval = *yylvalp; // <--- 修复 3: 保存 yylval
            state->has_buffered_token = true;
            state->has_seen_newline = false; // “消耗”换行符
            state->last_token = TOK_VIRTUAL_SEMICOLON;

            memset(yylvalp, 0, sizeof(YYSTYPE));
            return TOK_VIRTUAL_SEMICOLON;
        }
    }
    state->has_seen_newline = false; 
    state->last_token = next_token;  
    return next_token;
}