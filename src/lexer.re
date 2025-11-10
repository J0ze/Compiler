// src/lexer.re
#include <stdio.h>
#include <string.h> // for strndup
#include <stdbool.h>
#include "common.h" // 包含 Scanner 定义
#include "ast.h"    // 包含 AST 定义
#include "parser.tab.h" // 包含 Bison 生成的词法单元定义

// yylex 函数，Bison 将调用此函数获取下一个词法单元
int real_yylex(YYSTYPE *yylval, Scanner *scanner) {
    const unsigned char *yyt1; // re2c 用于捕获文本的指针

yyc_start: // re2c 规则的起始标签

    /*!re2c
        // --- 1. CONFIGS (必须在最前面) ---
        re2c:yyfill:enable = 0;
        re2c:api:style = free-form;
        re2c:define:YYCTYPE = "unsigned char";
        re2c:define:YYCURSOR = "scanner->cursor";
        re2c:define:YYMARKER = "scanner->marker";
        re2c:define:YYLIMIT = "scanner->limit";
        re2c:encoding:utf8 = 1; // 启用 UTF-8 以识别 \p
        re2c:eof = 0;

        // --- 2. RULES (已移除所有命名定义，全部内联) ---

        // 空白与注释 (来自 2.2 节)
        [\t\v\f\u0020\u00A0\uFEFF]+ { 
            goto yyc_start; 
        }
        "//" [^\r\n]* { 
            goto yyc_start; 
        }
        "/*" ([^*] | "*" [^/])* "*/" { 
            goto yyc_start; 
        }

        // 行终止符 (来自 4.4 节)
        [\r\n\u2028\u2029]+ {
            if (scanner->restrict_new_line) {
                // 受限产生式规则被触发！
                scanner->restrict_new_line = false; // 重置状态
                scanner->line_terminator_seen = true; // 报告看到了换行
                return SEMICOLON;
            }
            scanner->line++;
            scanner->line_terminator_seen = true;
            goto yyc_start; // 继续扫描，不返回 token
        }
        
        // 标点符号与关键字 (来自 2.2 节)
        "{"         { return LBRACE; }
        "}"         { return RBRACE; }
        "("         { return LPAREN; }
        ")"         { return RPAREN; }
        "["         { return LBRACK; }
        "]"         { return RBRACK; }
        "."         { return DOT; }
        ";"         { return SEMICOLON; }
        ","         { return COMMA; }
        "<"         { return LT; }
        ">"         { return GT; }
        "<="        { return LE; }
        ">="        { return GE; }
        "=="        { return EQ; }
        "!="        { return NE; }
        "==="       { return STRICT_EQ; }
        "!=="       { return STRICT_NE; }
        "+"         { return PLUS; }
        "-"         { return MINUS; }
        "*"         { return MUL; }
        "%"         { return MOD; }
        "**"        { return POWER; }
        "++"        { return INC; }
        "--"        { return DEC; }
        "<<"        { return LSHIFT; }
        ">>"        { return RSHIFT; }
        ">>>"       { return URSHIFT; }
        "&"         { return BIT_AND; }
        "|"         { return BIT_OR; }
        "^"         { return BIT_XOR; }
        "!"         { return NOT; }
        "~"         { return BIT_NOT; }
        "&&"        { return LOGICAL_AND; }
        "||"        { return LOGICAL_OR; }
        "??"        { return NULLISH_COALESCING; }
        "?"         { return CONDITIONAL; }
        ":"         { return COLON; }
        "="         { return ASSIGN; }
        "+="        { return ADD_ASSIGN; }
        "-="        { return SUB_ASSIGN; }
        "*="        { return MUL_ASSIGN; }
        "**="       { return POWER_ASSIGN; }
        "=>"        { return ARROW; }
        "..."       { return SPREAD; }
        "break"     { return BREAK; }
        "case"      { return CASE; }
        "catch"     { return CATCH; }
        "class"     { return CLASS; }
        "const"     { return CONST; }
        "continue"  { return CONTINUE; }
        "debugger"  { return DEBUGGER; }
        "default"   { return DEFAULT; }
        "delete"    { return DELETE; }
        "do"        { return DO; }
        "else"      { return ELSE; }
        "export"    { return EXPORT; }
        "extends"   { return EXTENDS; }
        "finally"   { return FINALLY; }
        "for"       { return FOR; }
        "function"  { return FUNCTION; }
        "if"        { return IF; }
        "import"    { return IMPORT; }
        "in"        { return IN; }
        "instanceof" { return INSTANCEOF; }
        "new"       { return NEW; }
        "return"    { return RETURN; }
        "super"     { return SUPER; }
        "switch"    { return SWITCH; }
        "this"      { return THIS; }
        "throw"     { return THROW; }
        "try"       { return TRY; }
        "typeof"    { return TYPEOF; }
        "var"       { return VAR; }
        "void"      { return VOID; }
        "while"     { return WHILE; }
        "with"      { return WITH; }
        "yield"     { return YIELD; }
        "let"       { return LET; }
        "static"    { return STATIC; }
        "enum"      { return ENUM; }
        "await"     { return AWAIT; }
        "true"      { return TRUE_LITERAL; }
        "false"     { return FALSE_LITERAL; }
        "null"      { return NULL_LITERAL; }

        // --- 规则：已内联 (之前导致错误的部分) ---

        // 标识符 (Identifier)
        @yyt1 [a-zA-Z_][a-zA-Z0-9_]* {
            size_t len = scanner->cursor - yyt1;
            yylval->str_val = strndup((const char*)yyt1, len);
            return IDENTIFIER;
        }

        // 数值字面量 (HexIntegerLiteral)
        @yyt1 "0" [xX] [0-9a-fA-F]+ {           
            yylval->str_val = strndup((const char*)yyt1, scanner->cursor - yyt1);
            return NUMERIC_LITERAL;
        }
        // (OctalIntegerLiteral)
        @yyt1 "0" [oO] [0-7]+ {
            yylval->str_val = strndup((const char*)yyt1, scanner->cursor - yyt1);
            return NUMERIC_LITERAL;
        }
        // (BinaryIntegerLiteral)
        @yyt1 "0" [bB] [01]+ {
            yylval->str_val = strndup((const char*)yyt1, scanner->cursor - yyt1);
            return NUMERIC_LITERAL;
        }
        // (DecimalLiteral)
        @yyt1 ("0" | [1-9] [0-9]* ("." [0-9]+)? | "." [0-9]+) {
            yylval->str_val = strndup((const char*)yyt1, scanner->cursor - yyt1);
            return NUMERIC_LITERAL;
        }

        // 字符串字面量 (SingleQuotedString)
        @yyt1 "'" ([^'\\\r\n] | "\\".)* "'" {
            yylval->str_val = strndup((const char*)yyt1, scanner->cursor - yyt1);
            return STRING_LITERAL;
        }
        // (DoubleQuotedString)
        @yyt1 '"' ([^"\\\r\n] | "\\".)* '"' {
            yylval->str_val = strndup((const char*)yyt1, scanner->cursor - yyt1);
            return STRING_LITERAL;
        }

        // --- EOF 和错误处理 ---
        $ { 
            return 0; // Bison 的 EOF 信号
        }

        * {
            // 匹配所有其他字符
            fprintf(stderr, "Lexical error: Unexpected character '%.*s' at line %d\n", 
                (int)(scanner->cursor - scanner->cursor + 1), scanner->cursor, scanner->line);
            goto yyc_start; // 跳过非法字符
        }
    */
}