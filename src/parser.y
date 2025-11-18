/* src/parser.y - 移除了 ASI 逻辑并修复了冲突 */

/* C 声明区 */
%{
#include <stdio.h>
#include <string.h>
#include "common.h" 
#include "pool.h"

extern ParserState *scanner;
extern ASTNode *ast_root;

/* 词法分析器函数 (yylex 是 re2c 生成的主函数) */
int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, ParserState* state);
%}

/* Bison 配置 */
%pure-parser
%locations
%parse-param { ParserState* state }
%lex-param { ParserState* state }

/* %union 定义 */
%union {
    char *str_val;
    struct ASTNode *node;
    NodeList *list;
}

/* --- 终结符 (Tokens) --- */
%token <str_val> IDENTIFIER STRING_LITERAL NUMERIC_LITERAL REGEX_LITERAL

/* 标点符号与运算符 */
%token LBRACE RBRACE LPAREN RPAREN LBRACK RBRACK DOT SEMICOLON COMMA
%token LT GT LE GE EQ NE STRICT_EQ STRICT_NE
%token PLUS MINUS MUL MOD POWER INC DEC DIV DIV_ASSIGN
%token LSHIFT RSHIFT URSHIFT BIT_AND BIT_OR BIT_XOR NOT BIT_NOT
%token LOGICAL_AND LOGICAL_OR NULLISH_COALESCING
%token CONDITIONAL COLON ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN POWER_ASSIGN
%token ARROW SPREAD

/* 关键字 */
%token BREAK CASE CATCH CLASS CONST CONTINUE DEBUGGER DEFAULT DELETE DO
%token ELSE EXPORT EXTENDS FINALLY FOR FUNCTION IF IMPORT IN INSTANCEOF
%token FROM AS OF
%token NEW RETURN SUPER SWITCH THIS THROW TRY TYPEOF VAR VOID WHILE WITH
%token YIELD LET STATIC ENUM AWAIT

/* 字面量 */
%token TRUE_LITERAL FALSE_LITERAL NULL_LITERAL
/* 移除了 TOK_VIRTUAL_SEMICOLON */

/* --- 非终结符类型定义 (补全) --- */
%type <list> statement_list_opt statement_list
%type <list> variable_declaration_list_inner
%type <list> property_list element_list
%type <list> arrow_parameter_list /* [修改] */
%type <list> method_definition_list switch_case_list case_statement_list
%type <list> arguments argument_list
%type <list> import_specifier_list export_specifier_list

%type <node> Script statement block_statement variable_statement empty_statement
%type <node> if_statement iteration_statement break_statement continue_statement
%type <node> return_statement with_statement switch_statement throw_statement
%type <node> try_statement debugger_statement
%type <node> function_declaration class_declaration
%type <node> variable_declaration variable_declaration_list for_init
%type <node> expression assignment_expression left_hand_side_expression
%type <node> conditional_expression logical_or_expression logical_and_expression
%type <node> bitwise_or_expression bitwise_xor_expression bitwise_and_expression
%type <node> equality_expression relational_expression shift_expression
%type <node> additive_expression multiplicative_expression exponentiation_expression
%type <node> unary_expression update_expression new_expression call_expression
%type <node> member_expression primary_expression
%type <node> array_expression object_expression arrow_function_expression
%type <node> property property_name function_expression arrow_body
%type <node> class_body method_definition
%type <node> import_declaration export_declaration import_specifier export_specifier
%type <node> switch_case catch_clause finally_clause
%type <node> expression_opt function_name_opt
%type <node> statement_list_item
%type <node> identifier_name

/* [修复] 补全所有缺失的类型声明 */
%type <node> for_statement
%type <node> for_in_statement
%type <node> for_of_statement
%type <node> do_while_statement
%type <node> while_statement
%type <node> expression_statement

/* [新增] 宽松分号规则 */
%type <node> optional_semicolon

/* --- 优先级 (Priority) --- */
%left COMMA
%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN POWER_ASSIGN DIV_ASSIGN
%right CONDITIONAL ARROW
%left LOGICAL_OR NULLISH_COALESCING
%left LOGICAL_AND
%left BIT_OR
%left BIT_XOR
%left BIT_AND
%left EQ NE STRICT_EQ STRICT_NE
%left LT LE GT GE IN INSTANCEOF
%left LSHIFT RSHIFT URSHIFT
%left PLUS MINUS
%left MUL DIV MOD
%right POWER
%right NEW NOT BIT_NOT TYPEOF VOID DELETE AWAIT
%right INC DEC
%nonassoc UPOSTFIX 
%left DOT LBRACK

%start Script

%%

/* === 1. 顶层规则 === */

Script:
    statement_list_opt
    { ast_root = create_script_node($1); }

statement_list_opt:
    /* empty */
    { $$ = nodelist_create(); }
|   statement_list
    { $$ = $1; }

statement_list:
    statement_list_item
    { 
        $$ = nodelist_create(); 
        if ($1 != NULL) nodelist_append($$, $1);
    }
|   statement_list statement_list_item 
    { 
        if ($2 != NULL) nodelist_append($1, $2);
        $$ = $1; 
    }

statement_list_item:
    statement
    { $$ = $1; }
|   function_declaration
    { $$ = $1; }
|   class_declaration
    { $$ = $1; }
|   export_declaration
    { $$ = $1; }
|   import_declaration
    { $$ = $1; }

identifier_name:
    IDENTIFIER { $$ = create_identifier_node($1); }
|   CLASS { $$ = create_identifier_node(pool_strdup("class")); }
|   DEFAULT { $$ = create_identifier_node(pool_strdup("default")); }
|   FUNCTION { $$ = create_identifier_node(pool_strdup("function")); }
|   IF { $$ = create_identifier_node(pool_strdup("if")); }
|   ELSE { $$ = create_identifier_node(pool_strdup("else")); }
|   RETURN { $$ = create_identifier_node(pool_strdup("return")); }
|   VAR { $$ = create_identifier_node(pool_strdup("var")); }
|   LET { $$ = create_identifier_node(pool_strdup("let")); }
|   CONST { $$ = create_identifier_node(pool_strdup("const")); }
|   WHILE { $$ = create_identifier_node(pool_strdup("while")); }
|   DO { $$ = create_identifier_node(pool_strdup("do")); }
|   FOR { $$ = create_identifier_node(pool_strdup("for")); }
|   SWITCH { $$ = create_identifier_node(pool_strdup("switch")); }
|   CASE { $$ = create_identifier_node(pool_strdup("case")); }
|   BREAK { $$ = create_identifier_node(pool_strdup("break")); }
|   CONTINUE { $$ = create_identifier_node(pool_strdup("continue")); }
|   TRUE_LITERAL { $$ = create_identifier_node(pool_strdup("true")); }
|   FALSE_LITERAL { $$ = create_identifier_node(pool_strdup("false")); }
|   NULL_LITERAL { $$ = create_identifier_node(pool_strdup("null")); }
|   NEW { $$ = create_identifier_node(pool_strdup("new")); }
|   THIS { $$ = create_identifier_node(pool_strdup("this")); }
|   DELETE { $$ = create_identifier_node(pool_strdup("delete")); }
|   IN { $$ = create_identifier_node(pool_strdup("in")); }
|   INSTANCEOF { $$ = create_identifier_node(pool_strdup("instanceof")); }
|   TYPEOF { $$ = create_identifier_node(pool_strdup("typeof")); }
|   VOID { $$ = create_identifier_node(pool_strdup("void")); }
|   YIELD { $$ = create_identifier_node(pool_strdup("yield")); }
|   AWAIT { $$ = create_identifier_node(pool_strdup("await")); }
|   EXPORT { $$ = create_identifier_node(pool_strdup("export")); }
|   IMPORT { $$ = create_identifier_node(pool_strdup("import")); }
|   SUPER { $$ = create_identifier_node(pool_strdup("super")); }
|   EXTENDS { $$ = create_identifier_node(pool_strdup("extends")); }
|   FROM { $$ = create_identifier_node(pool_strdup("from")); }
|   OF { $$ = create_identifier_node(pool_strdup("of")); }
|   AS { $$ = create_identifier_node(pool_strdup("as")); }
|   TRY { $$ = create_identifier_node(pool_strdup("try")); }
|   CATCH { $$ = create_identifier_node(pool_strdup("catch")); }
|   FINALLY { $$ = create_identifier_node(pool_strdup("finally")); }
|   THROW { $$ = create_identifier_node(pool_strdup("throw")); }
|   DEBUGGER { $$ = create_identifier_node(pool_strdup("debugger")); }
|   WITH { $$ = create_identifier_node(pool_strdup("with")); }
|   STATIC { $$ = create_identifier_node(pool_strdup("static")); }
|   ENUM { $$ = create_identifier_node(pool_strdup("enum")); }


/* === 2. 语句 (Statements) === */

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
|   empty_statement
    { $$ = $1; }
|   debugger_statement
    { $$ = NULL; }
|   with_statement
    { $$ = NULL; /* 不实现，但需解析通过 */ }

/* [新增] 宽松分号规则 */
optional_semicolon:
    /* empty */ { $$ = NULL; }
|   SEMICOLON   { $$ = NULL; }

empty_statement:
    SEMICOLON
    { $$ = NULL; }

block_statement:
    LBRACE statement_list_opt RBRACE
    { $$ = create_block_statement($2); }

variable_statement:
    variable_declaration_list optional_semicolon
    { $$ = $1; }

expression_statement:
    expression optional_semicolon
    { $$ = create_expression_statement($1); }

if_statement:
    IF LPAREN expression RPAREN statement
    { $$ = create_if_statement($3, $5, NULL); }
|   IF LPAREN expression RPAREN statement ELSE statement
    { $$ = create_if_statement($3, $5, $7); }

/* --- 迭代语句 (已重构以消除冲突) --- */

iteration_statement:
    do_while_statement
    { $$ = $1; }
|   while_statement
    { $$ = $1; }
|   for_statement       /* 标准 C 风格 for 循环 */
    { $$ = $1; }
|   for_in_statement    /* For...In 循环 */
    { $$ = $1; }
|   for_of_statement    /* For...Of 循环 */
    { $$ = $1; }

do_while_statement:
    DO statement WHILE LPAREN expression RPAREN optional_semicolon
    { $$ = create_do_while_statement($2, $5); }

while_statement:
    WHILE LPAREN expression RPAREN statement
    { $$ = create_while_statement($3, $5); }

/* [修复] 将所有 for 循环分开定义，消除歧义 */

/* 标准 C 风格 for 循环 */
for_statement:
    FOR LPAREN for_init SEMICOLON expression_opt SEMICOLON expression_opt RPAREN statement
    { $$ = create_for_statement($3, $5, $7, $9); }

/* For-In 循环 */
for_in_statement:
    FOR LPAREN left_hand_side_expression IN expression RPAREN statement
    { $$ = create_for_in_statement($3, $5, $7); }
|   FOR LPAREN variable_declaration_list IN expression RPAREN statement
    { $$ = create_for_in_statement($3, $5, $7); }

/* For-Of 循环 */
for_of_statement:
    FOR LPAREN left_hand_side_expression OF expression RPAREN statement
    { $$ = create_for_of_statement($3, $5, $7, false); }
|   FOR LPAREN variable_declaration_list OF expression RPAREN statement
    { $$ = create_for_of_statement($3, $5, $7, false); }
|   FOR AWAIT LPAREN left_hand_side_expression OF expression RPAREN statement
    { $$ = create_for_of_statement($4, $6, $8, true); }

/* for_init 同时服务于 for(;;) 和 for(let i=0;...) */
for_init:
    /* empty */
    { $$ = NULL; }
|   variable_declaration_list
    { $$ = $1; }
|   expression
    { $$ = $1; }

/* --- 其他语句 --- */

break_statement:
    BREAK optional_semicolon
    { $$ = create_break_statement(); }

continue_statement:
    CONTINUE optional_semicolon
    { $$ = create_continue_statement(); }

return_statement:
    RETURN expression_opt optional_semicolon
    { $$ = create_return_statement($2); }

with_statement:
    WITH LPAREN expression RPAREN statement
    { $$ = NULL; /* 暂不实现 */ }

switch_statement:
    SWITCH LPAREN expression RPAREN LBRACE switch_case_list RBRACE
    { $$ = create_switch_statement($3, $6); }

switch_case_list:
    /* empty */ { $$ = nodelist_create(); }
|   switch_case_list switch_case { nodelist_append($1, $2); $$ = $1; }

switch_case:
    CASE expression COLON case_statement_list
    { $$ = create_switch_case($2, $4); }
|   DEFAULT COLON case_statement_list
    { $$ = create_switch_case(NULL, $3); }

case_statement_list:
    /* empty */ { $$ = nodelist_create(); }
|   case_statement_list statement_list_item { if ($2) nodelist_append($1, $2); $$ = $1; }

throw_statement:
    THROW expression optional_semicolon
    { $$ = create_throw_statement($2); }

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

debugger_statement:
    DEBUGGER optional_semicolon
    { $$ = NULL; }

/* === 3. 函数与类 === */

function_declaration:
    FUNCTION IDENTIFIER arguments block_statement
    { $$ = create_function_declaration(create_identifier_node($2), $3, $4); }

function_expression:
    FUNCTION function_name_opt arguments block_statement
    { $$ = create_function_expression($2, $3, $4); }

function_name_opt:
    /* empty */ { $$ = NULL; }
|   IDENTIFIER { $$ = create_identifier_node($1); }

class_declaration:
    CLASS IDENTIFIER class_body
    { $$ = create_class_declaration(create_identifier_node($2), NULL, $3); }
|   CLASS IDENTIFIER EXTENDS assignment_expression class_body
    { $$ = create_class_declaration(create_identifier_node($2), $4, $5); }

class_body:
    LBRACE method_definition_list RBRACE
    { $$ = create_class_body($2); }

method_definition_list:
    /* empty */ { $$ = nodelist_create(); }
|   method_definition_list method_definition { nodelist_append($1, $2); $$ = $1; }

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

/* === 4. 模块 (Imports / Exports) === */

import_declaration:
    IMPORT STRING_LITERAL optional_semicolon
    { $$ = create_import_declaration(create_literal_node(LITERAL_STRING, $2), NULL); }
|   IMPORT LBRACE import_specifier_list RBRACE FROM STRING_LITERAL optional_semicolon
    { $$ = create_import_declaration(create_literal_node(LITERAL_STRING, $6), $3); }
|   IMPORT IDENTIFIER FROM STRING_LITERAL optional_semicolon
    { 
        NodeList *specs = nodelist_create();
        ASTNode *local = create_identifier_node($2);
        ASTNode *spec = create_import_specifier(NULL, local, true, false);
        nodelist_append(specs, spec);
        $$ = create_import_declaration(create_literal_node(LITERAL_STRING, $4), specs); 
    }
|   IMPORT MUL AS IDENTIFIER FROM STRING_LITERAL optional_semicolon
    {
        NodeList *specs = nodelist_create();
        ASTNode *local = create_identifier_node($4);
        ASTNode *spec = create_import_specifier(NULL, local, false, true);
        nodelist_append(specs, spec);
        $$ = create_import_declaration(create_literal_node(LITERAL_STRING, $6), specs);
    }

import_specifier_list:
    import_specifier { $$ = nodelist_create(); nodelist_append($$, $1); }
|   import_specifier_list COMMA import_specifier { nodelist_append($1, $3); $$ = $1; }

import_specifier:
    IDENTIFIER
    { $$ = create_import_specifier(create_identifier_node($1), create_identifier_node($1), false, false); }
|   IDENTIFIER AS IDENTIFIER
    { $$ = create_import_specifier(create_identifier_node($1), create_identifier_node($3), false, false); }

export_declaration:
    EXPORT variable_statement
    { $$ = create_export_declaration($2, NULL, NULL, false); }
|   EXPORT function_declaration
    { $$ = create_export_declaration($2, NULL, NULL, false); }
|   EXPORT class_declaration
    { $$ = create_export_declaration($2, NULL, NULL, false); }
|   EXPORT DEFAULT expression optional_semicolon
    { $$ = create_export_declaration($3, NULL, NULL, true); }
|   EXPORT LBRACE export_specifier_list RBRACE optional_semicolon
    { $$ = create_export_declaration(NULL, $3, NULL, false); }
|   EXPORT LBRACE export_specifier_list RBRACE FROM STRING_LITERAL optional_semicolon
    { $$ = create_export_declaration(NULL, $3, create_literal_node(LITERAL_STRING, $6), false); }

export_specifier_list:
    export_specifier { $$ = nodelist_create(); nodelist_append($$, $1); }
|   export_specifier_list COMMA export_specifier { nodelist_append($1, $3); $$ = $1; }

export_specifier:
    IDENTIFIER
    { $$ = create_export_specifier(create_identifier_node($1), create_identifier_node($1)); }
|   IDENTIFIER AS IDENTIFIER
    { $$ = create_export_specifier(create_identifier_node($1), create_identifier_node($3)); }

/* === 5. 表达式 (Expressions) === */

/* for_init 使用的 Vardecl 列表 (无分号) */
variable_declaration_list:
    VAR variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_VAR, $2); }
|   LET variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_LET, $2); }
|   CONST variable_declaration_list_inner
    { $$ = create_declaration_list(DECL_CONST, $2); }

variable_declaration_list_inner:
    variable_declaration
    { $$ = nodelist_create(); nodelist_append($$, $1); }
|   variable_declaration_list_inner COMMA variable_declaration
    { nodelist_append($1, $3); $$ = $1; }

variable_declaration:
    IDENTIFIER
    { $$ = create_variable_declarator(create_identifier_node($1), NULL); }
|   IDENTIFIER ASSIGN assignment_expression
    { $$ = create_variable_declarator(create_identifier_node($1), $3); }

expression_opt:
    /* empty */ { $$ = NULL; }
|   expression { $$ = $1; }

expression:
    assignment_expression { $$ = $1; }
|   expression COMMA assignment_expression
    { $$ = create_binary_expr(OP_COMMA, $1, $3); }

assignment_expression:
    conditional_expression { $$ = $1; }
|   arrow_function_expression { $$ = $1; }
|   left_hand_side_expression ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_ASSIGN, $1, $3); }
|   left_hand_side_expression ADD_ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_PLUS, $1, $3); }
|   left_hand_side_expression SUB_ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_MINUS, $1, $3); }
|   left_hand_side_expression DIV_ASSIGN assignment_expression
    { $$ = create_assignment_expr(OP_DIV, $1, $3); }

conditional_expression:
    logical_or_expression { $$ = $1; }
|   logical_or_expression CONDITIONAL assignment_expression COLON assignment_expression
    { $$ = create_conditional_expression($1, $3, $5); }

logical_or_expression:
    logical_and_expression { $$ = $1; }
|   logical_or_expression LOGICAL_OR logical_and_expression
    { $$ = create_binary_expr(OP_LOGICAL_OR, $1, $3); }

logical_and_expression:
    bitwise_or_expression { $$ = $1; }
|   logical_and_expression LOGICAL_AND bitwise_or_expression
    { $$ = create_binary_expr(OP_LOGICAL_AND, $1, $3); }

bitwise_or_expression:
    bitwise_xor_expression { $$ = $1; }
|   bitwise_or_expression BIT_OR bitwise_xor_expression
    { $$ = create_binary_expr(OP_BIT_OR, $1, $3); }

bitwise_xor_expression:
    bitwise_and_expression { $$ = $1; }
|   bitwise_xor_expression BIT_XOR bitwise_and_expression
    { $$ = create_binary_expr(OP_BIT_XOR, $1, $3); }

bitwise_and_expression:
    equality_expression { $$ = $1; }
|   bitwise_and_expression BIT_AND equality_expression
    { $$ = create_binary_expr(OP_BIT_AND, $1, $3); }

equality_expression:
    relational_expression { $$ = $1; }
|   equality_expression EQ relational_expression
    { $$ = create_binary_expr(OP_EQ, $1, $3); }
|   equality_expression NE relational_expression
    { $$ = create_binary_expr(OP_NE, $1, $3); }
|   equality_expression STRICT_EQ relational_expression
    { $$ = create_binary_expr(OP_STRICT_EQ, $1, $3); }
|   equality_expression STRICT_NE relational_expression
    { $$ = create_binary_expr(OP_STRICT_NE, $1, $3); }

relational_expression:
    shift_expression { $$ = $1; }
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
    additive_expression { $$ = $1; }
|   shift_expression LSHIFT additive_expression
    { $$ = create_binary_expr(OP_LSHIFT, $1, $3); }
|   shift_expression RSHIFT additive_expression
    { $$ = create_binary_expr(OP_RSHIFT, $1, $3); }
|   shift_expression URSHIFT additive_expression
    { $$ = create_binary_expr(OP_URSHIFT, $1, $3); }

additive_expression:
    multiplicative_expression { $$ = $1; }
|   additive_expression PLUS multiplicative_expression
    { $$ = create_binary_expr(OP_PLUS, $1, $3); }
|   additive_expression MINUS multiplicative_expression
    { $$ = create_binary_expr(OP_MINUS, $1, $3); }

multiplicative_expression:
    exponentiation_expression { $$ = $1; }
|   multiplicative_expression MUL exponentiation_expression
    { $$ = create_binary_expr(OP_MUL, $1, $3); }
|   multiplicative_expression DIV exponentiation_expression
    { $$ = create_binary_expr(OP_DIV, $1, $3); }
|   multiplicative_expression MOD exponentiation_expression
    { $$ = create_binary_expr(OP_MOD, $1, $3); }

exponentiation_expression:
    unary_expression { $$ = $1; }
|   unary_expression POWER exponentiation_expression
    { $$ = create_binary_expr(OP_POWER, $1, $3); }

unary_expression:
    update_expression { $$ = $1; }
|   DELETE unary_expression { $$ = create_unary_expr(OP_DELETE, $2, true); }
|   VOID unary_expression   { $$ = create_unary_expr(OP_VOID, $2, true); }
|   TYPEOF unary_expression { $$ = create_unary_expr(OP_TYPEOF, $2, true); }
|   INC unary_expression    { $$ = create_unary_expr(OP_INC, $2, true); }
|   DEC unary_expression    { $$ = create_unary_expr(OP_DEC, $2, true); }
|   PLUS unary_expression   { $$ = create_unary_expr(OP_UNARY_PLUS, $2, true); }
|   MINUS unary_expression  { $$ = create_unary_expr(OP_UNARY_MINUS, $2, true); }
|   BIT_NOT unary_expression{ $$ = create_unary_expr(OP_BIT_NOT, $2, true); }
|   NOT unary_expression    { $$ = create_unary_expr(OP_NOT, $2, true); }

update_expression:
    left_hand_side_expression { $$ = $1; }
|   left_hand_side_expression INC %prec UPOSTFIX
    { $$ = create_unary_expr(OP_POST_INC, $1, false); }
|   left_hand_side_expression DEC %prec UPOSTFIX
    { $$ = create_unary_expr(OP_POST_DEC, $1, false); }

left_hand_side_expression:
    new_expression { $$ = $1; }
|   call_expression { $$ = $1; }

new_expression:
    member_expression { $$ = $1; }
|   NEW new_expression { $$ = create_new_expression($2, NULL); }

/* [修复] 允许 call_expression 递归，以支持 IIFE */
call_expression:
    member_expression arguments
    { $$ = create_call_expression($1, $2); }
|   call_expression arguments /* 允许 (expr)(args) */
    { $$ = create_call_expression($1, $2); }
|   NEW new_expression arguments
    { $$ = create_new_expression($2, $3); }
|   SUPER arguments
    { $$ = create_call_expression(create_super_node(), $2); }

member_expression:
    primary_expression { $$ = $1; }
|   member_expression LBRACK expression RBRACK
    { $$ = create_member_access($1, $3, true); }
|   member_expression DOT identifier_name
    { $$ = create_member_access($1, $3, false); }

arguments:
    LPAREN RPAREN { $$ = nodelist_create(); }
|   LPAREN argument_list RPAREN { $$ = $2; }

argument_list:
    assignment_expression
    { $$ = nodelist_create(); nodelist_append($$, $1); }
|   argument_list COMMA assignment_expression
    { nodelist_append($1, $3); $$ = $1; }

primary_expression:
    THIS { $$ = create_this_node(); }
|   IDENTIFIER { $$ = create_identifier_node($1); }
|   NUMERIC_LITERAL { $$ = create_literal_node(LITERAL_NUMBER, $1); }
|   STRING_LITERAL { $$ = create_literal_node(LITERAL_STRING, $1); }
|   REGEX_LITERAL { $$ = create_literal_node(LITERAL_REGEX, $1); }
|   TRUE_LITERAL { $$ = create_literal_node(LITERAL_TRUE, pool_strdup("true")); }
|   FALSE_LITERAL { $$ = create_literal_node(LITERAL_FALSE, pool_strdup("false")); }
|   NULL_LITERAL { $$ = create_literal_node(LITERAL_NULL, pool_strdup("null")); }
|   LPAREN expression RPAREN { $$ = $2; } /* 括号表达式 */
|   object_expression { $$ = $1; }
|   array_expression { $$ = $1; }
|   function_expression { $$ = $1; }
|   SUPER { $$ = create_super_node(); }

object_expression:
    LBRACE RBRACE { $$ = create_object_expression(nodelist_create()); }
|   LBRACE property_list RBRACE { $$ = create_object_expression($2); }

property_list:
    property { $$ = nodelist_create(); nodelist_append($$, $1); }
|   property_list COMMA property { nodelist_append($1, $3); $$ = $1; }
|   property_list COMMA { $$ = $1; }

property:
    property_name COLON assignment_expression
    { $$ = create_property($1, $3); }

property_name:
    identifier_name { $$ = $1; }
|   STRING_LITERAL { $$ = create_literal_node(LITERAL_STRING, $1); }
|   NUMERIC_LITERAL { $$ = create_literal_node(LITERAL_NUMBER, $1); }


array_expression:
    LBRACK RBRACK { $$ = create_array_expression(nodelist_create()); }
|   LBRACK element_list RBRACK { $$ = create_array_expression($2); }

element_list:
    assignment_expression
    { $$ = nodelist_create(); nodelist_append($$, $1); }
|   element_list COMMA assignment_expression
    { nodelist_append($1, $3); $$ = $1; }
|   element_list COMMA { $$ = $1; }

arrow_function_expression:
    LPAREN arrow_parameter_list RPAREN ARROW arrow_body
    { $$ = create_arrow_function_expression($2, $5, ($5->type != NODE_BLOCK_STATEMENT)); }
|   IDENTIFIER ARROW arrow_body
    {
        NodeList* params = nodelist_create();
        nodelist_append(params, create_identifier_node($1));
        $$ = create_arrow_function_expression(params, $3, ($3->type != NODE_BLOCK_STATEMENT));
    }

/* [修复] 重构此规则以消除 'identifier_list: IDENTIFIER' 冲突 */
arrow_parameter_list:
    /* empty */ 
    { $$ = nodelist_create(); }
|   IDENTIFIER
    { 
        $$ = nodelist_create(); 
        nodelist_append($$, create_identifier_node($1)); 
    }
|   arrow_parameter_list COMMA IDENTIFIER
    { 
        nodelist_append($1, create_identifier_node($3)); 
        $$ = $1; 
    }

arrow_body:
    block_statement { $$ = $1; }
|   assignment_expression { $$ = $1; }

/* [移除] 'identifier_list' 规则已被合并到 'arrow_parameter_list' */

%%

/* 辅助函数区 (移除 ASI 包装器) */

/* 注意: 'yylex' 现在直接由 lexer.re 提供。*/
/* yyerror 在 main.c 中定义 */