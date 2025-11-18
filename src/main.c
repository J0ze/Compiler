#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"
#include "pool.h"
#include "ast.h"

// 外部变量
ParserState *scanner;
ASTNode *ast_root;

// 错误状态追踪
static int has_error = 0; // 0: 无错误, 1: 已报错

// yyparse 和 yyerror 的声明
int yyparse(ParserState* state);
void yyerror(YYLTYPE *yyllocp, ParserState *state, const char *s);

// 读取文件的辅助函数
char* read_file(const char *filename, size_t *size) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        return NULL;
    }

    fseek(fp, 0, SEEK_END);
    *size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char *buffer = (char*)malloc(*size + 1);
    if (!buffer) {
        fclose(fp);
        return NULL;
    }

    if (fread(buffer, 1, *size, fp) != *size) {
        fclose(fp);
        free(buffer);
        return NULL;
    }

    buffer[*size] = '\0';
    fclose(fp);
    return buffer;
}

int main(int argc, char **argv) {
    // 1. 初始化内存池
    pool_init(); 

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // 2. 读取文件
    size_t size;
    char *buffer = read_file(argv[1], &size);
    if (!buffer) {
        fprintf(stderr, "Failed to read file: %s\n", argv[1]);
        return 1;
    }
    ParserState s;
    s.cursor = (const unsigned char*)buffer;
    s.limit = (const unsigned char*)buffer + size;
    s.marker = (const unsigned char*)buffer;
    s.line = 1;
    
    s.brace_depth = 0;
    s.bracket_depth = 0;
    s.paren_depth = 0;
    s.in_object_literal = false;

    scanner = &s;
    ast_root = NULL;
    has_error = 0;
    int result = yyparse(scanner);
    
    if (result == 0) {
        printf("Parse successful!\n");
        printf("--- AST ---\n");
        print_ast(ast_root, 0);
        printf("-----------\n");
    } else {
        printf("Parse failed.\n");
    }
    pool_free_all(); 
    free(buffer);    

    return result;
}
void yyerror(YYLTYPE *yyllocp, ParserState *state, const char *s) {
    if (has_error) return;
    
    fprintf(stderr, "Parse error: %s at line %d\n", s, yyllocp ? yyllocp->first_line : (state ? state->line : -1));
    has_error = 1;
}