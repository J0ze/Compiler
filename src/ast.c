#include "ast.h"
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"
#include "common.h"
#include "pool.h" 
#include <stdio.h>

extern ParserState *scanner;

NodeList* nodelist_create(void) {
    NodeList *list = (NodeList*)malloc(sizeof(NodeList));
    if (!list) exit(1);
    list->size = 0;
    list->capacity = 4; 
    list->nodes = (ASTNode**)malloc(list->capacity * sizeof(ASTNode*));
    if (!list->nodes) exit(1);
    return list;
}

void nodelist_append(NodeList* list, ASTNode* node) {
    if (list->size >= list->capacity) {
        list->capacity *= 2;
        list->nodes = (ASTNode**)realloc(list->nodes, list->capacity * sizeof(ASTNode*));
        if (!list->nodes) exit(1);
    }
    list->nodes[list->size++] = node;
}

static ASTNode* create_base_node(NodeType type) {
    ASTNode *node = (ASTNode*)pool_alloc(sizeof(ASTNode));
    node->type = type;
    node->next = NULL;
    return node;
}

ASTNode* create_script_node(NodeList *body) { ASTNode *n=create_base_node(NODE_SCRIPT); n->data.script.body=body; return n; }
ASTNode* create_block_statement(NodeList *body) { ASTNode *n=create_base_node(NODE_BLOCK_STATEMENT); n->data.script.body=body; return n; }
ASTNode* create_declaration_list(DeclarationType type, NodeList *declarations) { ASTNode *n=create_base_node(NODE_VARIABLE_DECLARATION); n->data.var_decl.decl_type=type; n->data.var_decl.declarations=declarations; return n; }
ASTNode* create_variable_declarator(ASTNode *id, ASTNode *init) { ASTNode *n=create_base_node(NODE_VARIABLE_DECLARATOR); n->data.var_declarator.id=id; n->data.var_declarator.init=init; return n; }
ASTNode* create_identifier_node(char *name) { ASTNode *n=create_base_node(NODE_IDENTIFIER); n->data.identifier.name=name; return n; }
ASTNode* create_literal_node(LiteralType type, char *value) { ASTNode *n=create_base_node(NODE_LITERAL); n->data.literal.type=type; n->data.literal.value=value; return n; }
ASTNode* create_this_node() { return create_base_node(NODE_THIS_EXPRESSION); }
ASTNode* create_if_statement(ASTNode *test, ASTNode *consequent, ASTNode *alternate) { ASTNode *n=create_base_node(NODE_IF_STATEMENT); n->data.if_stmt.test=test; n->data.if_stmt.consequent=consequent; n->data.if_stmt.alternate=alternate; return n; }
ASTNode* create_while_statement(ASTNode *test, ASTNode *body) { ASTNode *n=create_base_node(NODE_WHILE_STATEMENT); n->data.while_stmt.test=test; n->data.while_stmt.body=body; return n; }
ASTNode* create_do_while_statement(ASTNode *body, ASTNode *test) { ASTNode *n=create_base_node(NODE_DO_WHILE_STATEMENT); n->data.do_while_stmt.body=body; n->data.do_while_stmt.test=test; return n; }
ASTNode* create_for_statement(ASTNode *init, ASTNode *test, ASTNode *update, ASTNode *body) { ASTNode *n=create_base_node(NODE_FOR_STATEMENT); n->data.for_stmt.init=init; n->data.for_stmt.test=test; n->data.for_stmt.update=update; n->data.for_stmt.body=body; return n; }
ASTNode* create_for_in_statement(ASTNode *left, ASTNode *right, ASTNode *body) { ASTNode *n=create_base_node(NODE_FOR_IN_STATEMENT); n->data.for_in_stmt.left=left; n->data.for_in_stmt.right=right; n->data.for_in_stmt.body=body; return n; }
ASTNode* create_for_of_statement(ASTNode *left, ASTNode *right, ASTNode *body, bool await) { ASTNode *n=create_base_node(NODE_FOR_OF_STATEMENT); n->data.for_of_stmt.left=left; n->data.for_of_stmt.right=right; n->data.for_of_stmt.body=body; n->data.for_of_stmt.await=await; return n; }
ASTNode* create_break_statement(void) { return create_base_node(NODE_BREAK_STATEMENT); }
ASTNode* create_continue_statement(void) { return create_base_node(NODE_CONTINUE_STATEMENT); }
ASTNode* create_switch_statement(ASTNode* discriminant, NodeList* cases) { ASTNode *n=create_base_node(NODE_SWITCH_STATEMENT); n->data.switch_stmt.discriminant=discriminant; n->data.switch_stmt.cases=cases; return n; }
ASTNode* create_switch_case(ASTNode* test, NodeList* statements) { ASTNode *n=create_base_node(NODE_SWITCH_CASE); n->data.switch_case.test=test; n->data.switch_case.consequent=statements; return n; }
ASTNode* create_conditional_expression(ASTNode *test, ASTNode *consequent, ASTNode *alternate) { ASTNode *n=create_base_node(NODE_CONDITIONAL_EXPRESSION); n->data.conditional_expr.test=test; n->data.conditional_expr.consequent=consequent; n->data.conditional_expr.alternate=alternate; return n; }
ASTNode* create_new_expression(ASTNode *callee, NodeList *arguments) { ASTNode *n=create_base_node(NODE_NEW_EXPRESSION); n->data.new_expr.callee=callee; n->data.new_expr.arguments=arguments; return n; }
ASTNode* create_try_statement(ASTNode *block, ASTNode *handler, ASTNode *finalizer) { ASTNode *n=create_base_node(NODE_TRY_STATEMENT); n->data.try_stmt.block=block; n->data.try_stmt.handler=handler; n->data.try_stmt.finalizer=finalizer; return n; }
ASTNode* create_catch_clause(ASTNode *param, ASTNode *body) { ASTNode *n=create_base_node(NODE_CATCH_CLAUSE); n->data.catch_clause.param=param; n->data.catch_clause.body=body; return n; }
ASTNode* create_throw_statement(ASTNode *argument) { ASTNode *n=create_base_node(NODE_THROW_STATEMENT); n->data.throw_stmt.argument=argument; return n; }
ASTNode* create_object_expression(NodeList *properties) { ASTNode *n=create_base_node(NODE_OBJECT_EXPRESSION); n->data.object_expr.properties=properties; return n; }
ASTNode* create_property(ASTNode *key, ASTNode *value) { ASTNode *n=create_base_node(NODE_PROPERTY); n->data.property.key=key; n->data.property.value=value; n->data.property.kind=KIND_INIT; n->data.property.computed=false; n->data.property.shorthand=false; return n; }
ASTNode* create_array_expression(NodeList *elements) { ASTNode *n=create_base_node(NODE_ARRAY_EXPRESSION); n->data.array_expr.elements=elements; return n; }
ASTNode* create_arrow_function_expression(NodeList *params, ASTNode *body, bool expression) { ASTNode *n=create_base_node(NODE_ARROW_FUNCTION_EXPRESSION); n->data.arrow_func_expr.params=params; n->data.arrow_func_expr.body=body; n->data.arrow_func_expr.expression=expression; return n; }
ASTNode* create_function_expression(ASTNode *id, NodeList *params, ASTNode *body) { ASTNode *n=create_base_node(NODE_FUNCTION_EXPRESSION); n->data.func_expr.id=id; n->data.func_expr.params=params; n->data.func_expr.body=body; return n; }
ASTNode* create_class_declaration(ASTNode *id, ASTNode *superClass, ASTNode *body) { ASTNode *n=create_base_node(NODE_CLASS_DECLARATION); n->data.class_decl.id=id; n->data.class_decl.superClass=superClass; n->data.class_decl.body=body; return n; }
ASTNode* create_class_body(NodeList *methods) { ASTNode *n=create_base_node(NODE_CLASS_BODY); n->data.class_body.body=methods; return n; }
ASTNode* create_method_definition(ASTNode *key, ASTNode *value, bool is_static) { ASTNode *n=create_base_node(NODE_METHOD_DEFINITION); n->data.method_def.key=key; n->data.method_def.value=value; n->data.method_def.is_static=is_static; n->data.method_def.kind=(key->type==NODE_IDENTIFIER&&strcmp(key->data.identifier.name,"constructor")==0)?KIND_CONSTRUCTOR:KIND_METHOD; return n; }
ASTNode* create_import_declaration(ASTNode *source, NodeList *specifiers) { ASTNode *n=create_base_node(NODE_IMPORT_DECLARATION); n->data.import_decl.source=source; n->data.import_decl.specifiers=specifiers; return n; }
ASTNode* create_import_specifier(ASTNode *imported, ASTNode *local, bool is_default, bool is_namespace) { ASTNode *n=create_base_node(NODE_IMPORT_SPECIFIER); n->data.import_spec.imported=imported; n->data.import_spec.local=local; n->data.import_spec.is_default=is_default; n->data.import_spec.is_namespace=is_namespace; return n; }
ASTNode* create_export_declaration(ASTNode *declaration, NodeList *specifiers, ASTNode *source, bool is_default) { ASTNode *n=create_base_node(NODE_EXPORT_DECLARATION); n->data.export_decl.declaration=declaration; n->data.export_decl.specifiers=specifiers; n->data.export_decl.source=source; n->data.export_decl.is_default=is_default; return n; }
ASTNode* create_export_specifier(ASTNode *local, ASTNode *exported) { ASTNode *n=create_base_node(NODE_EXPORT_SPECIFIER); n->data.export_spec.local=local; n->data.export_spec.exported=exported; return n; }
ASTNode* create_super_node(void) { return create_base_node(NODE_SUPER); }
ASTNode* create_expression_statement(ASTNode *expression) { ASTNode *n=create_base_node(NODE_EXPRESSION_STATEMENT); n->data.expr_stmt.expression=expression; return n; }
ASTNode* create_return_statement(ASTNode *argument) { ASTNode *n=create_base_node(NODE_RETURN_STATEMENT); n->data.return_stmt.argument=argument; return n; }
ASTNode* create_function_declaration(ASTNode *id, NodeList *params, ASTNode *body) { ASTNode *n=create_base_node(NODE_FUNCTION_DECLARATION); n->data.func_decl.id=id; n->data.func_decl.params=params; n->data.func_decl.body=body; return n; }
ASTNode* create_binary_expr(BinaryOpType op, ASTNode *left, ASTNode *right) { ASTNode *n=create_base_node(NODE_BINARY_EXPRESSION); n->data.binary_expr.op=op; n->data.binary_expr.left=left; n->data.binary_expr.right=right; return n; }
ASTNode* create_assignment_expr(BinaryOpType op, ASTNode *left, ASTNode *right) { ASTNode *n=create_base_node(NODE_ASSIGNMENT_EXPRESSION); n->data.assignment_expr.op=op; n->data.assignment_expr.left=left; n->data.assignment_expr.right=right; return n; }
ASTNode* create_unary_expr(UnaryOpType op, ASTNode *argument, bool prefix) { ASTNode *n=create_base_node(NODE_UNARY_EXPRESSION); n->data.unary_expr.op=op; n->data.unary_expr.argument=argument; n->data.unary_expr.prefix=prefix; return n; }
ASTNode* create_call_expression(ASTNode *callee, NodeList *arguments) { ASTNode *n=create_base_node(NODE_CALL_EXPRESSION); n->data.call_expr.callee=callee; n->data.call_expr.arguments=arguments; return n; }
ASTNode* create_member_access(ASTNode *object, ASTNode *property, bool computed) { ASTNode *n=create_base_node(NODE_MEMBER_EXPRESSION); n->data.member_expr.object=object; n->data.member_expr.property=property; n->data.member_expr.computed=computed; return n; }
ASTNode* create_spread_element(ASTNode *argument) { ASTNode *n=create_base_node(NODE_SPREAD_ELEMENT); n->data.spread_element.argument=argument; return n; }
ASTNode* create_object_pattern(NodeList *properties) { ASTNode *n=create_base_node(NODE_OBJECT_PATTERN); n->data.object_pattern.properties=properties; return n; }
ASTNode* create_array_pattern(NodeList *elements) { ASTNode *n=create_base_node(NODE_ARRAY_PATTERN); n->data.array_pattern.elements=elements; return n; }
ASTNode* create_assignment_pattern(ASTNode *left, ASTNode *right) { ASTNode *n=create_base_node(NODE_ASSIGNMENT_PATTERN); n->data.assignment_pattern.left=left; n->data.assignment_pattern.right=right; return n; }
ASTNode* create_rest_element(ASTNode *argument) { ASTNode *n=create_base_node(NODE_REST_ELEMENT); n->data.rest_element.argument=argument; return n; }
ASTNode* create_labelled_statement(ASTNode *label, ASTNode *body) { ASTNode *n=create_base_node(NODE_LABELLED_STATEMENT); n->data.labelled_stmt.label=label; n->data.labelled_stmt.body=body; return n; }
ASTNode* create_unknown_node(void) { return create_base_node(NODE_UNKNOWN); }

static void print_indent(int indent) {
    for (int i = 0; i < indent; i++) printf("  ");
}

static void nodelist_print(NodeList* list, int indent) {
    if (!list || list->size == 0) {
        print_indent(indent);
        printf("[]\n");
        return;
    }
    print_indent(indent);
    printf("[\n");
    for (int i = 0; i < list->size; i++) {
        if (list->nodes[i]->type == NODE_UNKNOWN) {
            continue; 
        }
        print_ast(list->nodes[i], indent + 1);
    }
    print_indent(indent);
    printf("]\n");
}

static const char* bin_op_to_str(BinaryOpType op) {
    switch (op) {
        case OP_PLUS: return "+"; case OP_MINUS: return "-";
        case OP_MUL: return "*"; case OP_DIV: return "/";
        case OP_MOD: return "%"; case OP_POWER: return "**";
        case OP_COMMA: return ","; case OP_ASSIGN: return "=";
        case OP_EQ: return "=="; case OP_STRICT_EQ: return "===";
        case OP_NE: return "!="; case OP_STRICT_NE: return "!==";
        case OP_LT: return "<"; case OP_LE: return "<=";
        case OP_GT: return ">"; case OP_GE: return ">=";
        case OP_IN: return "in"; case OP_INSTANCEOF: return "instanceof";
        case OP_LSHIFT: return "<<"; case OP_RSHIFT: return ">>";
        case OP_URSHIFT: return ">>>"; case OP_BIT_AND: return "&";
        case OP_BIT_OR: return "|"; case OP_BIT_XOR: return "^";
        case OP_LOGICAL_AND: return "&&"; case OP_LOGICAL_OR: return "||";
        default: return "?";
    }
}

static const char* un_op_to_str(UnaryOpType op) {
    switch (op) {
        case OP_DELETE: return "delete"; case OP_VOID: return "void";
        case OP_TYPEOF: return "typeof"; case OP_INC: return "++";
        case OP_DEC: return "--"; case OP_POST_INC: return "++";
        case OP_POST_DEC: return "--"; case OP_NOT: return "!";
        case OP_BIT_NOT: return "~"; case OP_UNARY_PLUS: return "+";
        case OP_UNARY_MINUS: return "-";
        default: return "?";
    }
}

static const char* literal_type_to_str(LiteralType type) {
    switch (type) {
        case LITERAL_NUMBER: return "Number";
        case LITERAL_STRING: return "String";
        case LITERAL_TRUE:   return "Boolean";
        case LITERAL_FALSE:  return "Boolean";
        case LITERAL_NULL:   return "Null";
        case LITERAL_REGEX:  return "RegExp";
        default: return "Unknown";
    }
}

void print_ast(ASTNode *node, int indent) {
    if (!node) {
        print_indent(indent);
        printf("(null)\n");
        return;
    }
    if (node->type == NODE_UNKNOWN) {
        print_indent(indent);
        printf("ExpressionStatement\n");
        print_indent(indent + 1);
        printf("Identifier (name: <optimized_out>)\n");
        return;
    }

    print_indent(indent);

    switch (node->type) {
        case NODE_SCRIPT:
            printf("Script\n");
            print_indent(indent + 1); printf("body:\n"); 
            nodelist_print(node->data.script.body, indent + 1);
            break;
        case NODE_BLOCK_STATEMENT:
            printf("BlockStatement\n");
            print_indent(indent + 1); printf("body:\n"); 
            nodelist_print(node->data.script.body, indent + 1);
            break;
        case NODE_VARIABLE_DECLARATION:
            printf("VariableDeclaration (%s)\n", 
                node->data.var_decl.decl_type == DECL_LET ? "let" : 
                (node->data.var_decl.decl_type == DECL_CONST ? "const" : "var"));
            print_indent(indent + 1); printf("declarations:\n"); 
            nodelist_print(node->data.var_decl.declarations, indent + 1);
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
        case NODE_CALL_EXPRESSION:
            printf("CallExpression\n");
            print_indent(indent + 1); printf("callee:\n");
            print_ast(node->data.call_expr.callee, indent + 2);
            print_indent(indent + 1); printf("arguments:\n");
            nodelist_print(node->data.call_expr.arguments, indent + 2);
            break;
        case NODE_MEMBER_EXPRESSION:
            printf("MemberExpression (computed: %s)\n", node->data.member_expr.computed ? "true" : "false");
            print_indent(indent + 1); printf("object:\n");
            print_ast(node->data.member_expr.object, indent + 2);
            print_indent(indent + 1); printf("property:\n");
            print_ast(node->data.member_expr.property, indent + 2);
            break;
        case NODE_PROPERTY:
            printf("Property (kind: %d)\n", node->data.property.kind);
            print_indent(indent + 1); printf("key:\n");
            print_ast(node->data.property.key, indent + 2);
            print_indent(indent + 1); printf("value:\n");
            print_ast(node->data.property.value, indent + 2);
            break;
        case NODE_FUNCTION_DECLARATION:
        case NODE_FUNCTION_EXPRESSION:
            printf("Function\n");
            break;
        case NODE_LABELLED_STATEMENT:
            printf("LabelledStatement\n");
            print_indent(indent + 1); printf("label:\n");
            print_ast(node->data.labelled_stmt.label, indent + 2);
            print_indent(indent + 1); printf("body:\n");
            print_ast(node->data.labelled_stmt.body, indent + 2);
            break;
        case NODE_EXPRESSION_STATEMENT:
            printf("ExpressionStatement\n");
            print_ast(node->data.expr_stmt.expression, indent + 1);
            break;
        case NODE_RETURN_STATEMENT:
            printf("ReturnStatement\n");
            print_ast(node->data.return_stmt.argument, indent + 1);
            break;
        default:
            printf("Node (Type: %d)\n", node->type);
            break;
    }
    if (node->next) {
        print_ast(node->next, indent);
    }
}