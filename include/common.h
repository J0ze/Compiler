#ifndef COMMON_H
#define COMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include "ast.h"
#include "parser.tab.h" // <-- 包含这个来获取 YYSTYPE

// 前向声明 AST 节点结构体，ast.h 将会定义它
struct ASTNode;

// 定义扫描器状态结构体
// 移除了 ASI 相关的字段
typedef struct {
    // --- re2c 状态 ---
    const unsigned char *cursor;
    const unsigned char *marker;
    const unsigned char *limit;
    int line;

    // --- 括号深度追踪 ---
    int brace_depth;    // { } 深度
    int bracket_depth;  // [ ] 深度
    int paren_depth;    // ( ) 深度
    bool in_object_literal; // 用于词法分析器区分 / 和 /regexp

} ParserState;

typedef union YYSTYPE YYSTYPE;
typedef struct YYLTYPE YYLTYPE; 

// yylex 现在是 re2c 生成的函数（在 lexer.re 中）
int yylex(YYSTYPE *yylvalp, YYLTYPE *yyllocp, ParserState *state);

// 'yyerror' 现在也需要 state
void yyerror(YYLTYPE *yyllocp, ParserState *state, const char *s);

#endif // COMMON_H