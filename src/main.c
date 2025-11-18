#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"
#include "pool.h"
#include "ast.h"

// 外部变量
ParserState *scanner;
ASTNode *ast_root;

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
    pool_init(); // <--- 必须调用

    if (argc < 2) {
        // ... (错误处理) ...
    }

    // 2. 读取文件
    size_t size;
    char *buffer = read_file(argv[1], &size);
    // ... (错误处理) ...

    // 3. 初始化 ParserState (无 ASI 版本)
    ParserState s;
    s.cursor = (const unsigned char*)buffer;
    s.limit = (const unsigned char*)buffer + size;
    s.marker = (const unsigned char*)buffer;
    s.line = 1;
    
    // (已移除 ASI 字段)
    
    // 保留括号深度 (如果 re2c 需要)
    s.brace_depth = 0;
    s.bracket_depth = 0;
    s.paren_depth = 0;
    s.in_object_literal = false;

    scanner = &s;
    ast_root = NULL;

    // 4. 运行解析
    int result = yyparse(scanner);
    
    if (result == 0) {
        printf("Parse successful!\n");
        printf("--- AST ---\n");
        print_ast(ast_root, 0);
        printf("-----------\n");
    } else {
        printf("Parse failed.\n");
    }

    // 5. 清理
    pool_free_all(); // 释放内存池
    free(buffer);    // 释放文件缓冲区

    return result;
}

// 错误处理函数
void yyerror(YYLTYPE *yyllocp, ParserState *state, const char *s) {
    fprintf(stderr, "Parse error: %s at line %d\n", s, yyllocp ? yyllocp->first_line : (state ? state->line : -1));
}