#include "ast.h"
#include <stdlib.h>
#include <string.h>

//列表创建函数
NodeList* nodelist_create(void) {
    NodeList *list = (NodeList*)malloc(sizeof(NodeList));
    if (!list) {
        yyerror("Out of memory");
        exit(1);
    }
    list->size = 0;
    list->capacity = 4; // 初始容量为 4
    list->nodes = (ASTNode**)malloc(list->capacity * sizeof(ASTNode*));
    if (!list->nodes) {
        yyerror("Out of memory");
        exit(1);
    }
    return list;
}
// 内部辅助函数：创建一个基础节点
static ASTNode* create_base_node(NodeType type) {
    extern Scanner* scanner; // 访问在 main.c 中定义的全局 scanner
    ASTNode *node = (ASTNode*)malloc(sizeof(ASTNode));
    if (!node) {
        yyerror("Out of memory");
        exit(1);
    }
    node->type = type;
    node->line = scanner ? scanner->line : -1; // 尽可能记录行号
    node->next = NULL;
    return node;
}

ASTNode* create_script_node(NodeList *body) {
    ASTNode *node = create_base_node(NODE_SCRIPT);
    node->data.script.body = body;
    return node;
}

// --- 节点创建函数 ---
ASTNode* create_block_statement(NodeList *body) {
    ASTNode *block = create_base_node(NODE_BLOCK_STATEMENT);
    // 直接将 NodeList 赋值给 body 属性
    block->data.script.body = body;
    return block;
}

ASTNode* create_declaration_list(DeclarationType type, NodeList *declarations) {
    ASTNode *list = create_base_node(NODE_VARIABLE_DECLARATION);
    list->data.var_decl.decl_type = type;
    list->data.var_decl.declarations = declarations; // <-- 新逻辑
    return list;
}

ASTNode* create_variable_declarator(ASTNode *id, ASTNode *init) {
    ASTNode *node = create_base_node(NODE_VARIABLE_DECLARATOR);
    node->data.var_declarator.id = id;
    node->data.var_declarator.init = init;
    return node;
}

ASTNode* create_identifier_node(char *name) {
    ASTNode *node = create_base_node(NODE_IDENTIFIER);
    node->data.identifier.name = name; // strndup 已经在 lexer.re 中完成
    return node;
}

ASTNode* create_literal_node(LiteralType type, char *value) {
    ASTNode *node = create_base_node(NODE_LITERAL);
    node->data.literal.type = type;
    node->data.literal.value = value;
    return node;
}

ASTNode* create_this_node() {
    return create_base_node(NODE_THIS_EXPRESSION);
}

ASTNode* create_if_statement(ASTNode *test, ASTNode *consequent, ASTNode *alternate) {
    ASTNode *node = create_base_node(NODE_IF_STATEMENT);
    node->data.if_stmt.test = test;
    node->data.if_stmt.consequent = consequent;
    node->data.if_stmt.alternate = alternate;
    return node;
}

ASTNode* create_while_statement(ASTNode *test, ASTNode *body) {
    ASTNode *node = create_base_node(NODE_WHILE_STATEMENT);
    node->data.while_stmt.test = test;
    node->data.while_stmt.body = body;
    return node;
}

ASTNode* create_do_while_statement(ASTNode *body, ASTNode *test) {
    ASTNode *node = create_base_node(NODE_DO_WHILE_STATEMENT);
    node->data.do_while_stmt.body = body;
    node->data.do_while_stmt.test = test;
    return node;
}

ASTNode* create_for_statement(ASTNode *init, ASTNode *test, ASTNode *update, ASTNode *body) {
    ASTNode *node = create_base_node(NODE_FOR_STATEMENT);
    node->data.for_stmt.init = init;
    node->data.for_stmt.test = test;
    node->data.for_stmt.update = update;
    node->data.for_stmt.body = body;
    return node;
}

ASTNode* create_break_statement(void) {
    ASTNode *node = create_base_node(NODE_BREAK_STATEMENT);
    return node;
}

ASTNode* create_continue_statement(void) {
    ASTNode *node = create_base_node(NODE_CONTINUE_STATEMENT);
    return node;
}

ASTNode* create_switch_statement(ASTNode* discriminant, NodeList* cases) {
    ASTNode *node = create_base_node(NODE_SWITCH_STATEMENT);
    node->data.switch_stmt.discriminant = discriminant;
    node->data.switch_stmt.cases = cases;
    return node;
}

ASTNode* create_switch_case(ASTNode* test, NodeList* statements) {
    ASTNode *node = create_base_node(NODE_SWITCH_CASE);
    node->data.switch_case.test = test;
    node->data.switch_case.consequent = statements;
    return node;
}

ASTNode* create_conditional_expression(ASTNode *test, ASTNode *consequent, ASTNode *alternate) {
    ASTNode *node = create_base_node(NODE_CONDITIONAL_EXPRESSION);
    node->data.conditional_expr.test = test;
    node->data.conditional_expr.consequent = consequent;
    node->data.conditional_expr.alternate = alternate;
    return node;
}

ASTNode* create_new_expression(ASTNode *callee, NodeList *arguments) {
    ASTNode *node = create_base_node(NODE_NEW_EXPRESSION);
    node->data.new_expr.callee = callee;
    node->data.new_expr.arguments = arguments; // arguments 是一个 NodeList*
    return node;
}

ASTNode* create_try_statement(ASTNode *block, ASTNode *handler, ASTNode *finalizer) {
    ASTNode *node = create_base_node(NODE_TRY_STATEMENT);
    node->data.try_stmt.block = block;
    node->data.try_stmt.handler = handler;
    node->data.try_stmt.finalizer = finalizer;
    return node;
}

ASTNode* create_catch_clause(ASTNode *param, ASTNode *body) {
    ASTNode *node = create_base_node(NODE_CATCH_CLAUSE);
    node->data.catch_clause.param = param;
    node->data.catch_clause.body = body;
    return node;
}

ASTNode* create_throw_statement(ASTNode *argument) {
    ASTNode *node = create_base_node(NODE_THROW_STATEMENT);
    node->data.throw_stmt.argument = argument;
    return node;
}

ASTNode* create_object_expression(NodeList *properties) {
    ASTNode *node = create_base_node(NODE_OBJECT_EXPRESSION);
    node->data.object_expr.properties = properties;
    return node;
}

ASTNode* create_property(ASTNode *key, ASTNode *value) {
    ASTNode *node = create_base_node(NODE_PROPERTY);
    node->data.property.key = key;
    node->data.property.value = value;
    return node;
}

ASTNode* create_array_expression(NodeList *elements) {
    ASTNode *node = create_base_node(NODE_ARRAY_EXPRESSION);
    node->data.array_expr.elements = elements;
    return node;
}

ASTNode* create_arrow_function_expression(NodeList *params, ASTNode *body, bool expression) {
    ASTNode *node = create_base_node(NODE_ARROW_FUNCTION_EXPRESSION);
    node->data.arrow_func_expr.params = params;
    node->data.arrow_func_expr.body = body;
    node->data.arrow_func_expr.expression = expression;
    return node;
}

ASTNode* create_expression_statement(ASTNode *expression) {
    ASTNode *node = create_base_node(NODE_EXPRESSION_STATEMENT);
    node->data.expr_stmt.expression = expression;
    return node;
}

ASTNode* create_return_statement(ASTNode *argument) {
    ASTNode *node = create_base_node(NODE_RETURN_STATEMENT);
    node->data.return_stmt.argument = argument;
    return node;
}

ASTNode* create_function_declaration(ASTNode *id, NodeList *params, ASTNode *body) {
    ASTNode *node = create_base_node(NODE_FUNCTION_DECLARATION);
    node->data.func_decl.id = id;
    node->data.func_decl.params = params;
    node->data.func_decl.body = body;
    return node;
}

ASTNode* create_binary_expr(BinaryOpType op, ASTNode *left, ASTNode *right) {
    ASTNode *node = create_base_node(NODE_BINARY_EXPRESSION);
    node->data.binary_expr.op = op;
    node->data.binary_expr.left = left;
    node->data.binary_expr.right = right;
    return node;
}

ASTNode* create_assignment_expr(BinaryOpType op, ASTNode *left, ASTNode *right) {
    ASTNode *node = create_base_node(NODE_ASSIGNMENT_EXPRESSION);
    node->data.assignment_expr.op = op;
    node->data.assignment_expr.left = left;
    node->data.assignment_expr.right = right;
    return node;
}

// 注意：我扩展了此 API 以处理前缀/后缀
ASTNode* create_unary_expr(UnaryOpType op, ASTNode *argument, bool prefix) {
    ASTNode *node = create_base_node(NODE_UNARY_EXPRESSION);
    node->data.unary_expr.op = op;
    node->data.unary_expr.argument = argument;
    node->data.unary_expr.prefix = prefix;
    return node;
}

ASTNode* create_call_expression(ASTNode *callee, NodeList *arguments) {
    ASTNode *node = create_base_node(NODE_CALL_EXPRESSION);
    node->data.call_expr.callee = callee;
    node->data.call_expr.arguments = arguments; // 这是一个 NODE_ARGUMENT_LIST
    return node;
}

ASTNode* create_member_access(ASTNode *object, ASTNode *property, bool computed) {
    ASTNode *node = create_base_node(NODE_MEMBER_EXPRESSION);
    node->data.member_expr.object = object;
    node->data.member_expr.property = property;
    node->data.member_expr.computed = computed;
    return node;
}

// 列表操作
void nodelist_append(NodeList* list, ASTNode* node) {
    if (list->size >= list->capacity) {
        // 数组已满，容量加倍
        list->capacity *= 2;
        list->nodes = (ASTNode**)realloc(list->nodes, list->capacity * sizeof(ASTNode*));
        if (!list->nodes) {
            yyerror("Out of memory");
            exit(1);
        }
    }
    list->nodes[list->size++] = node;
}

// ASI 辅助函数 (来自 4.3 节)
void nodelist_free(NodeList* list) {
    if (!list) return;
    for (int i = 0; i < list->size; i++) {
        // 递归释放列表中的每个节点
        free_ast(list->nodes[i]);
    }
    // 释放指针数组本身
    free(list->nodes);
    // 释放列表结构体
    free(list);
}

bool can_insert_semicolon(Scanner *scanner) {
    // 简化的实现：如果看到了换行符，就允许插入
    // 完整的实现还需要检查下一个 token 是否是 '}' 或 EOF
    // (这需要Bison的 lookahead 功能，比较复杂)
    return scanner->line_terminator_seen;
}

// 内存管理
void free_ast(ASTNode *node) {
    if (!node) return;

    switch (node->type) {
        case NODE_SCRIPT:
        case NODE_BLOCK_STATEMENT:
            nodelist_free(node->data.script.body);
            break;
        case NODE_VARIABLE_DECLARATION:
            nodelist_free(node->data.var_decl.declarations);
            break;
        case NODE_VARIABLE_DECLARATOR:
            free_ast(node->data.var_declarator.id);
            free_ast(node->data.var_declarator.init);
            break;
        case NODE_IDENTIFIER:
            free(node->data.identifier.name);
            break;
        case NODE_LITERAL:
            free(node->data.literal.value);
            break;
        case NODE_IF_STATEMENT:
            free_ast(node->data.if_stmt.test);
            free_ast(node->data.if_stmt.consequent);
            free_ast(node->data.if_stmt.alternate);
            break;
        case NODE_WHILE_STATEMENT:
            free_ast(node->data.while_stmt.test);
            free_ast(node->data.while_stmt.body);
            break;
        case NODE_DO_WHILE_STATEMENT:
            free_ast(node->data.do_while_stmt.body);
            free_ast(node->data.do_while_stmt.test);
            break;
        case NODE_FOR_STATEMENT:
            free_ast(node->data.for_stmt.init);
            free_ast(node->data.for_stmt.test);
            free_ast(node->data.for_stmt.update);
            free_ast(node->data.for_stmt.body);
            break;
        case NODE_BREAK_STATEMENT:
            break;
        case NODE_CONTINUE_STATEMENT:
            break;
        case NODE_SWITCH_STATEMENT:
            free_ast(node->data.switch_stmt.discriminant);
            nodelist_free(node->data.switch_stmt.cases);
            break;
        case NODE_SWITCH_CASE:
            free_ast(node->data.switch_case.test); // test 可能为 NULL, free_ast 会处理
            nodelist_free(node->data.switch_case.consequent);
            break;
        case NODE_CONDITIONAL_EXPRESSION:
            free_ast(node->data.conditional_expr.test);
            free_ast(node->data.conditional_expr.consequent);
            free_ast(node->data.conditional_expr.alternate);
            break;
        case NODE_NEW_EXPRESSION:
            free_ast(node->data.new_expr.callee);
            nodelist_free(node->data.new_expr.arguments); // nodelist_free 会处理 NULL
            break;
        case NODE_TRY_STATEMENT:
            free_ast(node->data.try_stmt.block);
            free_ast(node->data.try_stmt.handler);
            free_ast(node->data.try_stmt.finalizer);
            break;
        case NODE_CATCH_CLAUSE:
            free_ast(node->data.catch_clause.param);
            free_ast(node->data.catch_clause.body);
            break;
        case NODE_THROW_STATEMENT:
            free_ast(node->data.throw_stmt.argument);
            break;
        case NODE_OBJECT_EXPRESSION:
            nodelist_free(node->data.object_expr.properties);
            break;
        case NODE_PROPERTY:
            free_ast(node->data.property.key);
            free_ast(node->data.property.value);
            break;
        case NODE_ARRAY_EXPRESSION:
            nodelist_free(node->data.array_expr.elements);
            break;
        case NODE_ARROW_FUNCTION_EXPRESSION:
            nodelist_free(node->data.arrow_func_expr.params);
            free_ast(node->data.arrow_func_expr.body);
            break;
        case NODE_EXPRESSION_STATEMENT:
            free_ast(node->data.expr_stmt.expression);
            break;
        case NODE_RETURN_STATEMENT:
            free_ast(node->data.return_stmt.argument);
            break;
        case NODE_FUNCTION_DECLARATION:
            free_ast(node->data.func_decl.id);
            nodelist_free(node->data.func_decl.params);
            free_ast(node->data.func_decl.body);
        break;
        case NODE_BINARY_EXPRESSION:
            free_ast(node->data.binary_expr.left);
            free_ast(node->data.binary_expr.right);
            break;
        case NODE_ASSIGNMENT_EXPRESSION:
            free_ast(node->data.assignment_expr.left);
            free_ast(node->data.assignment_expr.right);
            break;
        case NODE_UNARY_EXPRESSION:
            free_ast(node->data.unary_expr.argument);
            break;
        case NODE_CALL_EXPRESSION:
            free_ast(node->data.call_expr.callee);
            nodelist_free(node->data.call_expr.arguments);
            break;
        case NODE_MEMBER_EXPRESSION:
            free_ast(node->data.member_expr.object);
            free_ast(node->data.member_expr.property);
            break;
        case NODE_THIS_EXPRESSION:
            break;
        default:
            // 未知节点类型
            break;
    }

    // 递归释放兄弟节点
    free_ast(node->next);
    // 最后释放自己
    free(node);
}

// --- 调试：打印 AST ---
static void print_indent(int indent) {
    for (int i = 0; i < indent; i++) printf("  ");
}

static void nodelist_print(NodeList* list, int indent) {
    if (!list || list->size == 0) {
        print_indent(indent);
        printf("[] (empty)\n"); // ESTree uses [] for arrays
        return;
    }

    print_indent(indent);
    printf("[\n");
    for (int i = 0; i < list->size; i++) {
        print_ast(list->nodes[i], indent + 1);
    }
    print_indent(indent);
    printf("]\n");
}

static const char* literal_type_to_str(LiteralType type) {
    switch (type) {
        case LITERAL_NUMBER: return "Number";
        case LITERAL_STRING: return "String";
        case LITERAL_TRUE:   return "Boolean";
        case LITERAL_FALSE:  return "Boolean";
        case LITERAL_NULL:   return "Null";
        default: return "Unknown";
    }
}

static const char* bin_op_to_str(BinaryOpType op) {
    switch (op) {
        case OP_PLUS: return "+";
        case OP_MINUS: return "-";
        case OP_MUL: return "*";
        case OP_COMMA: return ",";
        case OP_ASSIGN: return "=";
        case OP_EQ: return "==";
        case OP_STRICT_EQ: return "===";
        case OP_NE: return "!=";          
        case OP_STRICT_NE: return "!=="; 
        case OP_LT: return "<";
        case OP_LE: return "<=";         
        case OP_GT: return ">";           
        case OP_GE: return ">=";
        default: return "?_OP_?";
    }
}

static const char* un_op_to_str(UnaryOpType op) {
    switch (op) {
        case OP_DELETE: return "delete";
        case OP_VOID: return "void";
        case OP_TYPEOF: return "typeof";
        case OP_INC: return "++";
        case OP_DEC: return "--";
        case OP_POST_INC: return "++"; // 打印是一样的
        case OP_POST_DEC: return "--"; // 打印是一样的
        case OP_NOT: return "!";
        case OP_BIT_NOT: return "~";
        case OP_UNARY_PLUS: return "+";
        case OP_UNARY_MINUS: return "-";
        default: return "?_UOP_?";
    }
}

void print_ast(ASTNode *node, int indent) {
    if (!node) {
        print_indent(indent);
        printf("(null)\n");
        return;
    }

    print_indent(indent);

    switch (node->type) {
        case NODE_SCRIPT:
            printf("Script\n");
            print_indent(indent + 1); printf("body:\n"); nodelist_print(node->data.script.body, indent + 1);
            break;
        case NODE_BLOCK_STATEMENT:
            printf("BlockStatement\n");
            print_indent(indent + 1); printf("body:\n"); nodelist_print(node->data.script.body, indent + 1);
            break;
        case NODE_VARIABLE_DECLARATION:
            printf("VariableDeclaration (%s)\n", node->data.var_decl.decl_type == DECL_LET ? "let" : "const");
            print_indent(indent + 1); printf("declarations:\n"); nodelist_print(node->data.var_decl.declarations, indent + 1);
            break;
        case NODE_VARIABLE_DECLARATOR:
            printf("VariableDeclarator\n");
            print_indent(indent + 1); printf("id:\n");
            print_ast(node->data.var_declarator.id, indent + 2);
            print_indent(indent + 1); printf("init:\n");
            print_ast(node->data.var_declarator.init, indent + 2);
            break;
        case NODE_IDENTIFIER:
            printf("Identifier (name: %s)\n", node->data.identifier.name);
            break;
        case NODE_LITERAL:
            printf("Literal (type: %s, value: %s)\n", 
                   literal_type_to_str(node->data.literal.type), 
                   node->data.literal.value);
            break;
        case NODE_THIS_EXPRESSION:
            printf("ThisExpression\n");
            break;
        case NODE_IF_STATEMENT:
            printf("IfStatement\n");
            print_indent(indent + 1); printf("test:\n");
            print_ast(node->data.if_stmt.test, indent + 2);
            print_indent(indent + 1); printf("consequent:\n");
            print_ast(node->data.if_stmt.consequent, indent + 2);
            print_indent(indent + 1); printf("alternate:\n");
            print_ast(node->data.if_stmt.alternate, indent + 2);
            break;
        case NODE_BREAK_STATEMENT:
            printf("BreakStatement\n");
            break;
        case NODE_CONTINUE_STATEMENT:
            printf("ContinueStatement\n");
            break;
        case NODE_SWITCH_STATEMENT:
            printf("SwitchStatement\n");
            print_indent(indent + 1); printf("discriminant:\n");
            print_ast(node->data.switch_stmt.discriminant, indent + 2);
            print_indent(indent + 1); printf("cases:\n");
            nodelist_print(node->data.switch_stmt.cases, indent + 1);
            break;
        case NODE_SWITCH_CASE:
            printf("SwitchCase\n");
            print_indent(indent + 1); printf("test:\n");
            print_ast(node->data.switch_case.test, indent + 2); // test 为 NULL 时会打印 (null)
            print_indent(indent + 1); printf("consequent:\n");
            nodelist_print(node->data.switch_case.consequent, indent + 1);
            break;
        case NODE_CONDITIONAL_EXPRESSION:
            printf("ConditionalExpression\n");
            print_indent(indent + 1); printf("test:\n");
            print_ast(node->data.conditional_expr.test, indent + 2);
            print_indent(indent + 1); printf("consequent:\n");
            print_ast(node->data.conditional_expr.consequent, indent + 2);
            print_indent(indent + 1); printf("alternate:\n");
            print_ast(node->data.conditional_expr.alternate, indent + 2);
            break;
        case NODE_NEW_EXPRESSION:
            printf("NewExpression\n");
            print_indent(indent + 1); printf("callee:\n");
            print_ast(node->data.new_expr.callee, indent + 2);
            print_indent(indent + 1); printf("arguments:\n");
            if (node->data.new_expr.arguments) {
                // new MyClass()
                nodelist_print(node->data.new_expr.arguments, indent + 2);
            } else {
                // new MyClass
                print_indent(indent + 2); printf("[] (empty - no parens)\n");
            }
            break;
        case NODE_TRY_STATEMENT:
            printf("TryStatement\n");
            print_indent(indent + 1); printf("block:\n");
            print_ast(node->data.try_stmt.block, indent + 2);
            print_indent(indent + 1); printf("handler:\n");
            print_ast(node->data.try_stmt.handler, indent + 2); // handler 为 NULL 时会打印 (null)
            print_indent(indent + 1); printf("finalizer:\n");
            print_ast(node->data.try_stmt.finalizer, indent + 2); // finalizer 为 NULL 时会打印 (null)
            break;
        case NODE_CATCH_CLAUSE:
            printf("CatchClause\n");
            print_indent(indent + 1); printf("param:\n");
            print_ast(node->data.catch_clause.param, indent + 2);
            print_indent(indent + 1); printf("body:\n");
            print_ast(node->data.catch_clause.body, indent + 2);
            break;
        case NODE_THROW_STATEMENT:
            printf("ThrowStatement\n");
            print_indent(indent + 1); printf("argument:\n");
            print_ast(node->data.throw_stmt.argument, indent + 2);
            break;
        case NODE_OBJECT_EXPRESSION:
            printf("ObjectExpression\n");
            print_indent(indent + 1); printf("properties:\n");
            nodelist_print(node->data.object_expr.properties, indent + 1);
            break;
        case NODE_PROPERTY:
            printf("Property\n");
            print_indent(indent + 1); printf("key:\n");
            print_ast(node->data.property.key, indent + 2);
            print_indent(indent + 1); printf("value:\n");
            print_ast(node->data.property.value, indent + 2);
            break;
        case NODE_ARRAY_EXPRESSION:
            printf("ArrayExpression\n");
            print_indent(indent + 1); printf("elements:\n");
            nodelist_print(node->data.array_expr.elements, indent + 1);
            break;
        case NODE_ARROW_FUNCTION_EXPRESSION:
            printf("ArrowFunctionExpression (expression: %s)\n",
                node->data.arrow_func_expr.expression ? "true" : "false");
            print_indent(indent + 1); printf("params:\n");
            nodelist_print(node->data.arrow_func_expr.params, indent + 2);
            print_indent(indent + 1); printf("body:\n");
            print_ast(node->data.arrow_func_expr.body, indent + 2);
            break;
        case NODE_WHILE_STATEMENT:
            printf("WhileStatement\n");
            print_indent(indent + 1); printf("test:\n");
            print_ast(node->data.while_stmt.test, indent + 2);
            print_indent(indent + 1); printf("body:\n");
            print_ast(node->data.while_stmt.body, indent + 2);
            break;
        case NODE_DO_WHILE_STATEMENT:
            printf("DoWhileStatement\n");
            print_indent(indent + 1); printf("body:\n");
            print_ast(node->data.do_while_stmt.body, indent + 2);
            print_indent(indent + 1); printf("test:\n");
            print_ast(node->data.do_while_stmt.test, indent + 2);
            break;
        case NODE_FOR_STATEMENT:
            printf("ForStatement\n");
            print_indent(indent + 1); printf("init:\n");
            print_ast(node->data.for_stmt.init, indent + 2);
            print_indent(indent + 1); printf("test:\n");
            print_ast(node->data.for_stmt.test, indent + 2);
            print_indent(indent + 1); printf("update:\n");
            print_ast(node->data.for_stmt.update, indent + 2);
            print_indent(indent + 1); printf("body:\n");
            print_ast(node->data.for_stmt.body, indent + 2);
            break;
        case NODE_EXPRESSION_STATEMENT:
            printf("ExpressionStatement\n");
            print_ast(node->data.expr_stmt.expression, indent + 1);
            break;
        case NODE_RETURN_STATEMENT:
            printf("ReturnStatement\n");
            print_indent(indent + 1); printf("argument:\n");
            print_ast(node->data.return_stmt.argument, indent + 2);
            break;
        case NODE_FUNCTION_DECLARATION:
            printf("FunctionDeclaration\n");
            print_indent(indent + 1); printf("id:\n");
            print_ast(node->data.func_decl.id, indent + 2);
            print_indent(indent + 1); printf("params:\n");
            nodelist_print(node->data.func_decl.params, indent + 2);
            print_indent(indent + 1); printf("body:\n");
            print_ast(node->data.func_decl.body, indent + 2);
            break;
        case NODE_BINARY_EXPRESSION:
            printf("BinaryExpression (op: %s)\n", bin_op_to_str(node->data.binary_expr.op));
            print_indent(indent + 1); printf("left:\n");
            print_ast(node->data.binary_expr.left, indent + 2);
            print_indent(indent + 1); printf("right:\n");
            print_ast(node->data.binary_expr.right, indent + 2);
            break;
        case NODE_ASSIGNMENT_EXPRESSION:
            printf("AssignmentExpression (op: %s)\n", bin_op_to_str(node->data.assignment_expr.op));
            print_indent(indent + 1); printf("left:\n");
            print_ast(node->data.assignment_expr.left, indent + 2);
            print_indent(indent + 1); printf("right:\n");
            print_ast(node->data.assignment_expr.right, indent + 2);
            break;
        case NODE_UNARY_EXPRESSION:
        {
            // 需要花括号来在 case 内部声明变量
            UnaryOpType op = node->data.unary_expr.op;

            // ESTree 将 ++ 和 -- 称为 "UpdateExpression"
            if (op == OP_INC || op == OP_DEC || op == OP_POST_INC || op == OP_POST_DEC) {
                printf("UpdateExpression (op: %s, prefix: %s)\n", 
                    un_op_to_str(op), 
                    node->data.unary_expr.prefix ? "true" : "false");
            } else {
                // 其他所有一元操作符都是前缀
                printf("UnaryExpression (op: %s, prefix: true)\n", un_op_to_str(op));
            }
            print_indent(indent + 1); printf("argument:\n");
            print_ast(node->data.unary_expr.argument, indent + 2);
            break;
        }
        case NODE_CALL_EXPRESSION:
            printf("CallExpression\n");
            print_indent(indent + 1); printf("callee:\n");
            print_ast(node->data.call_expr.callee, indent + 2);
            print_indent(indent + 1); printf("arguments:\n");
            nodelist_print(node->data.call_expr.arguments, indent + 2);
            break;
        case NODE_MEMBER_EXPRESSION:
            printf("MemberExpression (computed: %d)\n", node->data.member_expr.computed);
            print_indent(indent + 1); printf("object:\n");
            print_ast(node->data.member_expr.object, indent + 2);
            print_indent(indent + 1); printf("property:\n");
            print_ast(node->data.member_expr.property, indent + 2);
            break;
        default:
            printf("UnknownNode (type: %d)\n", node->type);
    }
    
    // 打印兄弟节点
    if (node->next) {
        print_ast(node->next, indent);
    }
}