#include <stdio.h>
#include <stdlib.h>
#include <string.h>     // <-- 修复 1: 为 memset 添加
#include "common.h"
#include "ast.h"
#include "parser.tab.h" // <-- 修复 2: 为 YYSTYPE 和 yyparse 原型添加

// 定义 parser.y 中声明的全局变量
ParserState *scanner;
ASTNode *ast_root;
int yyparse(ParserState* state);
// yyparse() 的原型现在在 parser.tab.h 中
// extern int yyparse(); // <-- 修复 3: 移除这个不正确的声明

// main 函数
int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename.js>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "rb");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    unsigned char *buffer = (unsigned char*)malloc(size + 1);
    if (!buffer) {
        fprintf(stderr, "Failed to allocate memory for file buffer\n");
        fclose(fp);
        return 1;
    }

    if (fread(buffer, 1, size, fp) != size) {
        fprintf(stderr, "Failed to read file\n");
        fclose(fp);
        free(buffer);
        return 1;
    }
    buffer[size] = 0; // NULL 终止，re2c 的 $ 规则需要
    fclose(fp);

    // 初始化 ParserState
    ParserState s;
    s.cursor = buffer;
    s.limit = buffer + size;
    s.marker = buffer;
    s.line = 1;

    // 初始化 ASI 状态
    s.has_seen_newline = false; 
    s.last_token = 0;
    s.buffered_token = 0;
    memset(&s.buffered_yylval, 0, sizeof(YYSTYPE)); // <-- 这一行现在可以工作了
    s.has_buffered_token = false;
    
    // 设置全局扫描器指针
    scanner = &s;
    ast_root = NULL;

    // 初始化括号深度
    s.brace_depth = 0;
    s.bracket_depth = 0;
    s.paren_depth = 0;
    s.in_object_literal = false;
    
    // 调用解析器
    int result = yyparse(scanner); // <-- 这一行现在可以工作了
    
    if (result == 0) {
        printf("Parse successful!\n");
        printf("--- AST ---\n");
        print_ast(ast_root, 0);
        printf("-----------\n");
    } else {
        printf("Parse failed.\n");
    }

    // 清理
    free_ast(ast_root);
    free(buffer);

    return result;
}

// 错误报告函数 (parser.y 需要)
// #include "parser.tab.h" // <-- 修复 4: 已经移到顶部，这里不再需要

void yyerror(YYLTYPE *yyllocp, ParserState *state, const char *s) {
    fprintf(stderr, "Parse error: %s at line %d\n", s, yyllocp ? yyllocp->first_line : (state ? state->line : -1));
}