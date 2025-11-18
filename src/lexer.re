// src/lexer.re
#include <stdio.h>
#include <string.h> // for strndup
#include <stdbool.h>
#include "common.h"     // 包含 ParserState 定义
#include "ast.h"        // 包含 AST 定义
#include "parser.tab.h" // 包含 Bison 生成的词法单元定义

// 'yylex_internal' 是 re2c 生成的函数
int yylex_internal(YYSTYPE *yylval, ParserState *state) {
    const unsigned char *yyt1; // re2c 用于捕获文本的指针

static bool can_precede_division(int token) {
    switch (token) {
        case IDENTIFIER:
        case NUMERIC_LITERAL:
        case STRING_LITERAL:
        case REGEX_LITERAL: // 正则后面也可以跟除号
        case TRUE_LITERAL:
        case FALSE_LITERAL:
        case NULL_LITERAL:
        case THIS:
        case RPAREN: // ) / 2
        case RBRACK: // ] / 2
        case RBRACE: // } / 2 (有些歧义，但在大多数表达式上下文中是除号)
            return true;
        default:
            return false;
    }
}

yyc_start: // re2c 规则的起始标签

    /*!re2c
        // --- 1. CONFIGS (必须在最前面) ---
        re2c:yyfill:enable = 0;
        re2c:api:style = free-form;
        re2c:define:YYCTYPE = "unsigned char";
        re2c:define:YYCURSOR = "state->cursor";
        re2c:define:YYMARKER = "state->marker";
        re2c:define:YYLIMIT = "state->limit";
        re2c:encoding:utf8 = 1;
        re2c:eof = 0;

        // --- 2. RULES (来自文档 5.2 节) ---
        "/" {
            // 检查上下文
            if (can_precede_division(state->last_token)) {
                return DIV;
            } else {
                // 进入正则扫描模式 (手动扫描以处理转义和字符类)
                const unsigned char *start = state->cursor - 1; // 包含开头的 /
                bool in_class = false; // 是否在 [] 中
                
                while (state->cursor < state->limit) {
                    unsigned char c = *state->cursor;
                    
                    if (c == '\n' || c == '\r') {
                        // JS 正则不支持未转义的换行，报错
                        fprintf(stderr, "Lexical error: Unterminated regex at line %d\n", state->line);
                        return 0; 
                    }
                    
                    if (c == '\\') {
                        state->cursor++; // 跳过转义字符
                        if (state->cursor < state->limit) state->cursor++;
                        continue;
                    }
                    
                    if (c == '[') {
                        in_class = true;
                    } else if (c == ']') {
                        in_class = false;
                    } else if (c == '/' && !in_class) {
                        state->cursor++; // 消耗结尾的 /
                        break; // 正则主体结束
                    }
                    
                    state->cursor++;
                }
                
                // 扫描修饰符 (flags: g, i, m, u, y, s)
                while (state->cursor < state->limit) {
                    unsigned char c = *state->cursor;
                    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                         state->cursor++;
                    } else {
                        break;
                    }
                }
                
                // 创建字符串值
                size_t len = state->cursor - start;
                yylval->str_val = strndup((const char*)start, len);
                return REGEX_LITERAL;
            }
        }

        "/=" {
            // 除法赋值 /= 只有在能接受除法的地方才有效，否则可能被误判（虽然很少见）
            // 通常直接作为运算符返回即可，因为正则不会以 /= 开头（除非是空的正则 / =，那是语法错误）
            return DIV_ASSIGN;
        }
        
        /* 仅跳过水平空白 */
        [ \t\v\f\u0020\u00A0\uFEFF]+ { 
            goto yyc_start; 
        }
        
        /* 规则：LineTerminator (换行符) */
        [\r\n\u2028\u2029]+ {
            state->line++;
            state->has_seen_newline = true; // <-- 只设置标志
            goto yyc_start; // <-- 继续扫描
        }
        
        /* 规则：多行注释 */
        "/*" {
            for (;;) {
                if (state->cursor >= state->limit) break; 
                if (*state->cursor == '\n') {
                    state->line++;
                    state->has_seen_newline = true; // 必须在注释内跟踪换行符
                }
                if (*state->cursor == '*' && state->cursor + 1 < state->limit && state->cursor[1] == '/') {
                    state->cursor += 2; // 消耗 '*/'
                    break;
                }
                state->cursor++;
            }
            goto yyc_start;
        }

        /* 规则：单行注释 */
        "//" {
            while (state->cursor < state->limit && *state->cursor != '\n' && *state->cursor != '\r') {
                state->cursor++;
            }
            goto yyc_start;
        }
        
        // --- 标点符号与关键字 ---
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
        "from"      { return FROM; }
        "as"        { return AS; }
        "true"      { return TRUE_LITERAL; }
        "false"     { return FALSE_LITERAL; }
        "null"      { return NULL_LITERAL; }

        // --- 规则：已内联 ---

        // 标识符 (Identifier)
        @yyt1 [a-zA-Z_][a-zA-Z0-9_]* {
            size_t len = state->cursor - yyt1;
            yylval->str_val = strndup((const char*)yyt1, len);
            return IDENTIFIER;
        }

        // 数值字面量 (HexIntegerLiteral)
        @yyt1 "0" [xX] [0-9a-fA-F]+ {
            yylval->str_val = strndup((const char*)yyt1, state->cursor - yyt1);
            return NUMERIC_LITERAL;
        }
        // (OctalIntegerLiteral)
        @yyt1 "0" [oO] [0-7]+ {
            yylval->str_val = strndup((const char*)yyt1, state->cursor - yyt1);
            return NUMERIC_LITERAL;
        }
        // (BinaryIntegerLiteral)
        @yyt1 "0" [bB] [01]+ {
            yylval->str_val = strndup((const char*)yyt1, state->cursor - yyt1);
            return NUMERIC_LITERAL;
        }
        // (DecimalLiteral)
        @yyt1 ("0" | [1-9] [0-9]* ("." [0-9]+)? | "." [0-9]+) {
            yylval->str_val = strndup((const char*)yyt1, state->cursor - yyt1);
            return NUMERIC_LITERAL;
        }

        // 字符串字面量 (SingleQuotedString)
        @yyt1 "'" ([^'\\\r\n] | "\\".)* "'" {
            yylval->str_val = strndup((const char*)yyt1, state->cursor - yyt1);
            return STRING_LITERAL;
        }
        // (DoubleQuotedString)
        @yyt1 '"' ([^"\\\r\n] | "\\".)* '"' {
            yylval->str_val = strndup((const char*)yyt1, state->cursor - yyt1);
            return STRING_LITERAL;
        }

        // --- EOF 和错误处理 ---
        $ { 
            return 0; // Bison 的 EOF 信号
        }

        * {
            // *** 修复 ***
            fprintf(stderr, "Lexical error: Unexpected character '%.*s' at line %d\n", 1, state->cursor, state->line);
            state->cursor++; // 消耗非法字符
            goto yyc_start;  // 继续扫描
        }
    */
}