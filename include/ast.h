#ifndef AST_H
#define AST_H
#include <stdbool.h>

// AST 节点类型
typedef enum {
    NODE_SCRIPT,
    NODE_BLOCK_STATEMENT,
    NODE_VARIABLE_DECLARATION,
    NODE_VARIABLE_DECLARATOR,
    NODE_IDENTIFIER,
    NODE_LITERAL,
    NODE_THIS_EXPRESSION,
    NODE_IF_STATEMENT,
    NODE_WHILE_STATEMENT,
    NODE_DO_WHILE_STATEMENT,
    NODE_FOR_STATEMENT,
    NODE_FOR_IN_STATEMENT,
    NODE_FOR_OF_STATEMENT,
    NODE_BREAK_STATEMENT,
    NODE_CONTINUE_STATEMENT,
    NODE_SWITCH_STATEMENT,
    NODE_SWITCH_CASE,
    NODE_CONDITIONAL_EXPRESSION,
    NODE_NEW_EXPRESSION,
    NODE_TRY_STATEMENT,
    NODE_CATCH_CLAUSE,
    NODE_THROW_STATEMENT,
    NODE_OBJECT_EXPRESSION,
    NODE_PROPERTY,
    NODE_ARRAY_EXPRESSION,
    NODE_ARROW_FUNCTION_EXPRESSION,
    NODE_FUNCTION_EXPRESSION,
    NODE_CLASS_DECLARATION,
    NODE_CLASS_BODY,
    NODE_METHOD_DEFINITION,
    NODE_IMPORT_DECLARATION,
    NODE_IMPORT_SPECIFIER,
    NODE_EXPORT_DECLARATION,
    NODE_EXPORT_SPECIFIER,
    NODE_SUPER,
    NODE_EXPRESSION_STATEMENT,
    NODE_RETURN_STATEMENT,
    NODE_FUNCTION_DECLARATION,
    NODE_BINARY_EXPRESSION,
    NODE_ASSIGNMENT_EXPRESSION,
    NODE_UNARY_EXPRESSION,
    NODE_CALL_EXPRESSION,
    NODE_MEMBER_EXPRESSION,
    NODE_SPREAD_ELEMENT,
    NODE_OBJECT_PATTERN,
    NODE_ARRAY_PATTERN,
    NODE_ASSIGNMENT_PATTERN,
    NODE_REST_ELEMENT,
    NODE_LABELLED_STATEMENT,
    NODE_UNKNOWN /* [新增] 用于容错的未知节点 */
} NodeType;

// 变量声明类型
typedef enum { DECL_LET, DECL_CONST, DECL_VAR } DeclarationType;

// 字面量类型
typedef enum {
    LITERAL_NUMBER, LITERAL_STRING, LITERAL_TRUE, LITERAL_FALSE, LITERAL_NULL, LITERAL_REGEX
} LiteralType;

// 二元操作符
typedef enum {
    OP_COMMA, OP_ASSIGN, OP_LOGICAL_OR, OP_LOGICAL_AND,
    OP_BIT_OR, OP_BIT_XOR, OP_BIT_AND,
    OP_EQ, OP_NE, OP_STRICT_EQ, OP_STRICT_NE,
    OP_LT, OP_LE, OP_GT, OP_GE, OP_IN, OP_INSTANCEOF,
    OP_LSHIFT, OP_RSHIFT, OP_URSHIFT,
    OP_PLUS, OP_MINUS, OP_MUL, OP_MOD, OP_POWER, OP_DIV
} BinaryOpType;

// 方法/属性定义类型
typedef enum {
    KIND_INIT, KIND_CONSTRUCTOR, KIND_METHOD, KIND_GET, KIND_SET
} MethodKind;

// 一元操作符
typedef enum {
    OP_DELETE, OP_VOID, OP_TYPEOF,
    OP_INC, OP_DEC, OP_POST_INC, OP_POST_DEC,
    OP_NOT, OP_BIT_NOT, OP_UNARY_PLUS, OP_UNARY_MINUS
} UnaryOpType;

typedef struct {
    struct ASTNode **nodes;
    int size;
    int capacity;
} NodeList;

// 抽象语法树 (AST) 节点
typedef struct ASTNode {
    NodeType type;
    int line;
    struct ASTNode *next;

    union {
        struct { NodeList *body; } script;
        struct { DeclarationType decl_type; NodeList *declarations; } var_decl;
        struct { struct ASTNode *id; struct ASTNode *init; } var_declarator;
        struct { char *name; } identifier;
        struct { LiteralType type; char *value; } literal;
        struct { struct ASTNode *test; struct ASTNode *consequent; struct ASTNode *alternate; } if_stmt;
        struct { struct ASTNode *test; struct ASTNode *body; } while_stmt;
        struct { struct ASTNode *body; struct ASTNode *test; } do_while_stmt;
        struct { struct ASTNode *init; struct ASTNode *test; struct ASTNode *update; struct ASTNode *body; } for_stmt;
        struct { struct ASTNode *left; struct ASTNode *right; struct ASTNode *body; } for_in_stmt;
        struct { struct ASTNode *left; struct ASTNode *right; struct ASTNode *body; bool await; } for_of_stmt;
        struct {} break_stmt;
        struct {} continue_stmt;
        struct { struct ASTNode *discriminant; NodeList *cases; } switch_stmt;
        struct { struct ASTNode *test; NodeList *consequent; } switch_case;
        struct { struct ASTNode *test; struct ASTNode *consequent; struct ASTNode *alternate; } conditional_expr;
        struct { struct ASTNode *callee; NodeList *arguments; } new_expr;
        struct { struct ASTNode *block; struct ASTNode *handler; struct ASTNode *finalizer; } try_stmt;
        struct { struct ASTNode *param; struct ASTNode *body; } catch_clause;
        struct { struct ASTNode *argument; } throw_stmt;
        struct { NodeList *properties; } object_expr;
        struct {
            struct ASTNode *key;
            struct ASTNode *value;
            MethodKind kind;
            bool computed;
            bool shorthand;
        } property;
        struct { NodeList *elements; } array_expr;
        struct { NodeList *params; struct ASTNode *body; bool expression; } arrow_func_expr;
        struct { struct ASTNode *id; NodeList *params; struct ASTNode *body; } func_expr;
        struct { struct ASTNode *id; struct ASTNode *superClass; struct ASTNode *body; } class_decl;
        struct { NodeList *body; } class_body;
        struct {
            struct ASTNode *key;
            struct ASTNode *value;
            MethodKind kind;
            bool is_static;
        } method_def;
        struct { struct ASTNode *source; NodeList *specifiers; } import_decl;
        struct { struct ASTNode *imported; struct ASTNode *local; bool is_default; bool is_namespace; } import_spec;
        struct { struct ASTNode *declaration; NodeList *specifiers; struct ASTNode *source; bool is_default; } export_decl;
        struct { struct ASTNode *local; struct ASTNode *exported; } export_spec;
        struct {} super_expr;
        struct { struct ASTNode *expression; } expr_stmt;
        struct { struct ASTNode *argument; } return_stmt;
        struct { struct ASTNode *id; NodeList *params; struct ASTNode *body; } func_decl;
        struct { BinaryOpType op; struct ASTNode *left; struct ASTNode *right; } binary_expr;
        struct { BinaryOpType op; struct ASTNode *left; struct ASTNode *right; } assignment_expr;
        struct { UnaryOpType op; struct ASTNode *argument; bool prefix; } unary_expr;
        struct { struct ASTNode *callee; NodeList *arguments; } call_expr;
        struct { struct ASTNode *object; struct ASTNode *property; bool computed; } member_expr;
        struct { struct ASTNode *argument; } spread_element;
        struct { NodeList *properties; } object_pattern;
        struct { NodeList *elements; } array_pattern;
        struct { struct ASTNode *left; struct ASTNode *right; } assignment_pattern;
        struct { struct ASTNode *argument; } rest_element;
        struct { struct ASTNode *label; struct ASTNode *body; } labelled_stmt;
        /* NODE_UNKNOWN 无需特定数据 */
    } data;
} ASTNode;

// 函数声明
ASTNode* create_block_statement(NodeList *body);
ASTNode* create_declaration_list(DeclarationType type, NodeList *declarations);
ASTNode* create_variable_declarator(ASTNode *id, ASTNode *init);
ASTNode* create_identifier_node(char *name);
ASTNode* create_literal_node(LiteralType type, char *value);
ASTNode* create_this_node();
ASTNode* create_script_node(NodeList *body);
ASTNode* create_if_statement(ASTNode *test, ASTNode *consequent, ASTNode *alternate);
ASTNode* create_while_statement(ASTNode *test, ASTNode *body);
ASTNode* create_do_while_statement(ASTNode *body, ASTNode *test);
ASTNode* create_for_statement(ASTNode *init, ASTNode *test, ASTNode *update, ASTNode *body);
ASTNode* create_for_in_statement(ASTNode *left, ASTNode *right, ASTNode *body);
ASTNode* create_for_of_statement(ASTNode *left, ASTNode *right, ASTNode *body, bool await);
ASTNode* create_break_statement(void);
ASTNode* create_continue_statement(void);
ASTNode* create_switch_statement(ASTNode* discriminant, NodeList* cases);
ASTNode* create_switch_case(ASTNode* test, NodeList* statements);
ASTNode* create_conditional_expression(ASTNode *test, ASTNode *consequent, ASTNode *alternate);
ASTNode* create_new_expression(ASTNode *callee, NodeList *arguments);
ASTNode* create_try_statement(ASTNode *block, ASTNode *handler, ASTNode *finalizer);
ASTNode* create_catch_clause(ASTNode *param, ASTNode *body);
ASTNode* create_throw_statement(ASTNode *argument);
ASTNode* create_object_expression(NodeList *properties);
ASTNode* create_property(ASTNode *key, ASTNode *value);
ASTNode* create_array_expression(NodeList *elements);
ASTNode* create_arrow_function_expression(NodeList *params, ASTNode *body, bool expression);
ASTNode* create_function_expression(ASTNode *id, NodeList *params, ASTNode *body);
ASTNode* create_class_declaration(ASTNode *id, ASTNode *superClass, ASTNode *body);
ASTNode* create_class_body(NodeList *methods);
ASTNode* create_method_definition(ASTNode *key, ASTNode *value, bool is_static);
ASTNode* create_import_declaration(ASTNode *source, NodeList *specifiers);
ASTNode* create_import_specifier(ASTNode *imported, ASTNode *local, bool is_default, bool is_namespace);
ASTNode* create_export_declaration(ASTNode *declaration, NodeList *specifiers, ASTNode *source, bool is_default);
ASTNode* create_export_specifier(ASTNode *local, ASTNode *exported);
ASTNode* create_super_node(void);
ASTNode* create_expression_statement(ASTNode *expression);
ASTNode* create_return_statement(ASTNode *argument);
ASTNode* create_function_declaration(ASTNode *id, NodeList *params, ASTNode *body);
ASTNode* create_binary_expr(BinaryOpType op, ASTNode *left, ASTNode *right);
ASTNode* create_assignment_expr(BinaryOpType op, ASTNode *left, ASTNode *right);
ASTNode* create_unary_expr(UnaryOpType op, ASTNode *argument, bool prefix);
ASTNode* create_call_expression(ASTNode *callee, NodeList *arguments);
ASTNode* create_member_access(ASTNode *object, ASTNode *property, bool computed);
ASTNode* create_spread_element(ASTNode *argument);
ASTNode* create_object_pattern(NodeList *properties);
ASTNode* create_array_pattern(NodeList *elements);
ASTNode* create_assignment_pattern(ASTNode *left, ASTNode *right);
ASTNode* create_rest_element(ASTNode *argument);
ASTNode* create_labelled_statement(ASTNode *label, ASTNode *body);

/* [新增] */
ASTNode* create_unknown_node(void);

NodeList* nodelist_create(void);
void nodelist_append(NodeList* list, ASTNode* node);
void print_ast(ASTNode *node, int indent);

#endif