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
// 这是一个合并了 re2c 状态和 ASI 状态的结构体 [cite: 59, 119, 121]
typedef struct {
    // --- re2c 状态 ---
    const unsigned char *cursor;
    const unsigned char *marker;
    const unsigned char *limit;
    int line;

    // --- ASI 包装器状态 ---
    bool has_seen_newline;   
    int  last_token;         
    int  buffered_token;     
    YYSTYPE buffered_yylval; // <--- 添加这一行来保存 token 的值
    bool has_buffered_token;    

    // --- 括号深度追踪 ---
    int brace_depth;    // { } 深度
    int bracket_depth;  // [ ] 深度
    int paren_depth;    // ( ) 深度
    bool in_object_literal;

} ParserState;

typedef union YYSTYPE YYSTYPE;

// 'yylex_internal' 是 re2c 生成的函数 [cite: 138]
int yylex_internal(YYSTYPE *yylval, ParserState *state);

// 'yyerror' 现在也需要 state
typedef struct YYLTYPE YYLTYPE; 

void yyerror(YYLTYPE *yyllocp, ParserState *state, const char *s);

#endif // COMMON_H