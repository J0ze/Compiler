/* src/lexer.re - 移除了 ASI 逻辑 */
#include <stdio.h>
#include <string.h> 
#include <stdbool.h>
#include "common.h"     
#include "ast.h"        
#include "parser.tab.h" 
#include "pool.h" // 包含 pool.h 以便使用 pool_strdup

/*
 * 辅助函数：判断前一个 token 是否允许后面跟一个除法运算符 (/)
 * 而不是一个正则表达式。
 */
static int global_last_token = 0; // 用于辅助词法分析器

static bool can_precede_division(int token) {
    switch (token) {
        case IDENTIFIER:
        case NUMERIC_LITERAL:
        case STRING_LITERAL:
        case REGEX_LITERAL:
        case TRUE_LITERAL:
        case FALSE_LITERAL:
        case NULL_LITERAL:
        case THIS:
        case RPAREN: // )
        case RBRACK: // ]
        case RBRACE: // }
        case INC:    // ++
        case DEC:    // --
            return true;
        default:
            return false;
    }
}

/*
 * 主词法分析函数 (yylex)
 * 它被 parser.y 中的 %lex-param 和 %parse-param 调用。
 */
int yylex(YYSTYPE *yylval, YYLTYPE *yylloc, ParserState *state) {
    const unsigned char *yyt1; // re2c 标记
    
    // 设置行号
    if (yylloc) {
        yylloc->first_line = state->line;
        yylloc->last_line = state->line;
    }

yyc_start:
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:api:style = free-form;
        re2c:define:YYCTYPE = "unsigned char";
        re2c:define:YYCURSOR = "state->cursor";
        re2c:define:YYMARKER = "state->marker";
        re2c:define:YYLIMIT = "state->limit";
        re2c:encoding:utf8 = 1;
        re2c:eof = 0;

        // 1. 空白字符 (跳过)
        [ \t\v\f\u0020\u00A0\uFEFF]+ { goto yyc_start; }
        
        // 2. 换行符 (只增加行号，不生成 Token)
        ( ( "\r\n" ) | [ \n\r\u2028\u2029 ] ) {
            state->line++;
            if (yylloc) yylloc->last_line = state->line;
            goto yyc_start;
        }
        
        // 3. 注释
        "/*" {
            for (;;) {
                if (state->cursor >= state->limit) break; // EOF in comment
                if (*state->cursor == '\n') {
                    state->line++;
                    if (yylloc) yylloc->last_line = state->line;
                }
                if (*state->cursor == '*' && state->cursor + 1 < state->limit && state->cursor[1] == '/') {
                    state->cursor += 2;
                    break;
                }
                state->cursor++;
            }
            goto yyc_start;
        }

        "//" {
            while (state->cursor < state->limit && *state->cursor != '\n' && *state->cursor != '\r') {
                state->cursor++;
            }
            goto yyc_start;
        }
        
        // --- 4. 符号与运算符 ---
        "{" { global_last_token = LBRACE; return LBRACE; }
        "}" { global_last_token = RBRACE; return RBRACE; }
        "(" { global_last_token = LPAREN; return LPAREN; }
        ")" { global_last_token = RPAREN; return RPAREN; }
        "[" { global_last_token = LBRACK; return LBRACK; }
        "]" { global_last_token = RBRACK; return RBRACK; }
        "." { global_last_token = DOT; return DOT; }
        ";" { global_last_token = SEMICOLON; return SEMICOLON; }
        "," { global_last_token = COMMA; return COMMA; }
        "?" { global_last_token = CONDITIONAL; return CONDITIONAL; }
        ":" { global_last_token = COLON; return COLON; }
        "=" { global_last_token = ASSIGN; return ASSIGN; }
        
        "++" { global_last_token = INC; return INC; }
        "--" { global_last_token = DEC; return DEC; }
        "+" { global_last_token = PLUS; return PLUS; }
        "-" { global_last_token = MINUS; return MINUS; }
        "*" { global_last_token = MUL; return MUL; }
        "%" { global_last_token = MOD; return MOD; }
        "**" { global_last_token = POWER; return POWER; }
        
        "&" { global_last_token = BIT_AND; return BIT_AND; }
        "|" { global_last_token = BIT_OR; return BIT_OR; }
        "^" { global_last_token = BIT_XOR; return BIT_XOR; }
        "~" { global_last_token = BIT_NOT; return BIT_NOT; }
        "!" { global_last_token = NOT; return NOT; }
        "&&" { global_last_token = LOGICAL_AND; return LOGICAL_AND; }
        "||" { global_last_token = LOGICAL_OR; return LOGICAL_OR; }
        "??" { global_last_token = NULLISH_COALESCING; return NULLISH_COALESCING; }
        
        "<" { global_last_token = LT; return LT; }
        ">" { global_last_token = GT; return GT; }
        "<=" { global_last_token = LE; return LE; }
        ">=" { global_last_token = GE; return GE; }
        "==" { global_last_token = EQ; return EQ; }
        "!=" { global_last_token = NE; return NE; }
        "===" { global_last_token = STRICT_EQ; return STRICT_EQ; }
        "!==" { global_last_token = STRICT_NE; return STRICT_NE; }
        
        "+=" { global_last_token = ADD_ASSIGN; return ADD_ASSIGN; }
        "-=" { global_last_token = SUB_ASSIGN; return SUB_ASSIGN; }
        "*=" { global_last_token = MUL_ASSIGN; return MUL_ASSIGN; }
        "**=" { global_last_token = POWER_ASSIGN; return POWER_ASSIGN; }
        "/=" { global_last_token = DIV_ASSIGN; return DIV_ASSIGN; }
        
        "=>" { global_last_token = ARROW; return ARROW; }
        "..." { global_last_token = SPREAD; return SPREAD; }

        // --- 5. 关键字 (自动机匹配) ---
        "break"     { global_last_token = BREAK; return BREAK; }
        "case"      { global_last_token = CASE; return CASE; }
        "catch"     { global_last_token = CATCH; return CATCH; }
        "class"     { global_last_token = CLASS; return CLASS; }
        "const"     { global_last_token = CONST; return CONST; }
        "continue"  { global_last_token = CONTINUE; return CONTINUE; }
        "debugger"  { global_last_token = DEBUGGER; return DEBUGGER; }
        "default"   { global_last_token = DEFAULT; return DEFAULT; }
        "delete"    { global_last_token = DELETE; return DELETE; }
        "do"        { global_last_token = DO; return DO; }
        "else"      { global_last_token = ELSE; return ELSE; }
        "export"    { global_last_token = EXPORT; return EXPORT; }
        "extends"   { global_last_token = EXTENDS; return EXTENDS; }
        "finally"   { global_last_token = FINALLY; return FINALLY; }
        "for"       { global_last_token = FOR; return FOR; }
        "function"  { global_last_token = FUNCTION; return FUNCTION; }
        "if"        { global_last_token = IF; return IF; }
        "import"    { global_last_token = IMPORT; return IMPORT; }
        "in"        { global_last_token = IN; return IN; }
        "instanceof" { global_last_token = INSTANCEOF; return INSTANCEOF; }
        "new"       { global_last_token = NEW; return NEW; }
        "return"    { global_last_token = RETURN; return RETURN; }
        "super"     { global_last_token = SUPER; return SUPER; }
        "switch"    { global_last_token = SWITCH; return SWITCH; }
        "this"      { global_last_token = THIS; return THIS; }
        "throw"     { global_last_token = THROW; return THROW; }
        "try"       { global_last_token = TRY; return TRY; }
        "typeof"    { global_last_token = TYPEOF; return TYPEOF; }
        "var"       { global_last_token = VAR; return VAR; }
        "void"      { global_last_token = VOID; return VOID; }
        "while"     { global_last_token = WHILE; return WHILE; }
        "with"      { global_last_token = WITH; return WITH; }
        "yield"     { global_last_token = YIELD; return YIELD; }
        "let"       { global_last_token = LET; return LET; }
        "static"    { global_last_token = STATIC; return STATIC; }
        "enum"      { global_last_token = ENUM; return ENUM; }
        "await"     { global_last_token = AWAIT; return AWAIT; }
        "from"      { global_last_token = FROM; return FROM; }
        "as"        { global_last_token = AS; return AS; }
        "of"        { global_last_token = OF; return OF; }
        
        "true"      { global_last_token = TRUE_LITERAL; return TRUE_LITERAL; }
        "false"     { global_last_token = FALSE_LITERAL; return FALSE_LITERAL; }
        "null"      { global_last_token = NULL_LITERAL; return NULL_LITERAL; }

        // --- 6. 字面量 ---
        
        // 标识符 (必须在关键字之后)
        @yyt1 [a-zA-Z_$\x80-\xff][a-zA-Z0-9_$\x80-\xff]* {
            yylval->str_val = pool_strndup((const char*)yyt1, state->cursor - yyt1);
            global_last_token = IDENTIFIER;
            return IDENTIFIER;
        }

        // 数值 (支持 Decimal 和 Scientific)
        @yyt1 (("0" | [1-9][0-9]*) ("." [0-9]*)? | "." [0-9]+) ([eE] [+-]? [0-9]+)? {
            yylval->str_val = pool_strndup((const char*)yyt1, state->cursor - yyt1);
            global_last_token = NUMERIC_LITERAL;
            return NUMERIC_LITERAL;
        }
        // 十六进制
        @yyt1 "0" [xX] [0-9a-fA-F]+ {
            yylval->str_val = pool_strndup((const char*)yyt1, state->cursor - yyt1);
            global_last_token = NUMERIC_LITERAL;
            return NUMERIC_LITERAL;
        }

        // 字符串 (单引号)
        @yyt1 "'" ([^'\\\r\n] | "\\".)* "'" {
            yylval->str_val = pool_strndup((const char*)yyt1, state->cursor - yyt1);
            global_last_token = STRING_LITERAL;
            return STRING_LITERAL;
        }
        // 字符串 (双引号)
        @yyt1 '"' ([^"\\\r\n] | "\\".)* '"' {
            yylval->str_val = pool_strndup((const char*)yyt1, state->cursor - yyt1);
            global_last_token = STRING_LITERAL;
            return STRING_LITERAL;
        }
        // 模板字符串 (反引号 - 简化版)
        @yyt1 "`" ([^`\\] | "\\".)* "`" {
            yylval->str_val = pool_strndup((const char*)yyt1, state->cursor - yyt1);
            global_last_token = STRING_LITERAL; // 暂时作为普通字符串
            return STRING_LITERAL; 
        }

        // --- 7. 除法与正则的歧义处理 ---
        "/" {
            if (can_precede_division(global_last_token)) {
                // 是除法
                global_last_token = DIV;
                return DIV;
            } else {
                // 是正则表达式
                const unsigned char *start = state->cursor - 1; 
                bool in_class = false; // [
                
                while (state->cursor < state->limit) {
                    unsigned char c = *state->cursor;
                    if (c == '\n' || c == '\r') break; // 换行，正则错误
                    if (c == '\\') { 
                        state->cursor++; // 跳过转义字符
                        if (state->cursor < state->limit) state->cursor++; 
                        continue; 
                    }
                    if (c == '[') in_class = true;
                    else if (c == ']') in_class = false;
                    else if (c == '/' && !in_class) { 
                        state->cursor++; // 匹配到结尾的 '/'
                        break; 
                    }
                    state->cursor++;
                }
                
                // 匹配 flags (g, i, m, s, u, y)
                while (state->cursor < state->limit) {
                    unsigned char c = *state->cursor;
                    // 仅允许合法的 flag 字符
                    if (c == 'g' || c == 'i' || c == 'm' || c == 's' || c == 'u' || c == 'y') {
                        state->cursor++;
                    } else {
                        break;
                    }
                }
                
                yylval->str_val = pool_strndup((const char*)start, state->cursor - start);
                global_last_token = REGEX_LITERAL;
                return REGEX_LITERAL;
            }
        }

        // --- 8. EOF 和 错误 ---
        $ { return 0; }
        
        // 错误：跳过无法识别的字符
        * { 
            state->cursor++;
            goto yyc_start;
        }
    */
}