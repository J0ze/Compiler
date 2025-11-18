/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     STRING_LITERAL = 259,
     NUMERIC_LITERAL = 260,
     REGEX_LITERAL = 261,
     PRIVATE_IDENTIFIER = 262,
     LBRACE = 263,
     RBRACE = 264,
     LPAREN = 265,
     RPAREN = 266,
     LBRACK = 267,
     RBRACK = 268,
     DOT = 269,
     SEMICOLON = 270,
     COMMA = 271,
     LT = 272,
     GT = 273,
     LE = 274,
     GE = 275,
     EQ = 276,
     NE = 277,
     STRICT_EQ = 278,
     STRICT_NE = 279,
     PLUS = 280,
     MINUS = 281,
     MUL = 282,
     MOD = 283,
     POWER = 284,
     INC = 285,
     DEC = 286,
     DIV = 287,
     DIV_ASSIGN = 288,
     LSHIFT = 289,
     RSHIFT = 290,
     URSHIFT = 291,
     BIT_AND = 292,
     BIT_OR = 293,
     BIT_XOR = 294,
     NOT = 295,
     BIT_NOT = 296,
     LOGICAL_AND = 297,
     LOGICAL_OR = 298,
     NULLISH_COALESCING = 299,
     CONDITIONAL = 300,
     COLON = 301,
     ASSIGN = 302,
     ADD_ASSIGN = 303,
     SUB_ASSIGN = 304,
     MUL_ASSIGN = 305,
     POWER_ASSIGN = 306,
     ARROW = 307,
     SPREAD = 308,
     BREAK = 309,
     CASE = 310,
     CATCH = 311,
     CLASS = 312,
     CONST = 313,
     CONTINUE = 314,
     DEBUGGER = 315,
     DEFAULT = 316,
     DELETE = 317,
     DO = 318,
     ELSE = 319,
     EXPORT = 320,
     EXTENDS = 321,
     FINALLY = 322,
     FOR = 323,
     FUNCTION = 324,
     IF = 325,
     IMPORT = 326,
     IN = 327,
     INSTANCEOF = 328,
     NEW = 329,
     RETURN = 330,
     SUPER = 331,
     SWITCH = 332,
     THIS = 333,
     THROW = 334,
     TRY = 335,
     TYPEOF = 336,
     VAR = 337,
     VOID = 338,
     WHILE = 339,
     WITH = 340,
     YIELD = 341,
     ENUM = 342,
     AWAIT = 343,
     GET = 344,
     SET = 345,
     STATIC = 346,
     ASYNC = 347,
     FROM = 348,
     OF = 349,
     LET = 350,
     AS = 351,
     TRUE_LITERAL = 352,
     FALSE_LITERAL = 353,
     NULL_LITERAL = 354,
     UPOSTFIX = 355
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define NUMERIC_LITERAL 260
#define REGEX_LITERAL 261
#define PRIVATE_IDENTIFIER 262
#define LBRACE 263
#define RBRACE 264
#define LPAREN 265
#define RPAREN 266
#define LBRACK 267
#define RBRACK 268
#define DOT 269
#define SEMICOLON 270
#define COMMA 271
#define LT 272
#define GT 273
#define LE 274
#define GE 275
#define EQ 276
#define NE 277
#define STRICT_EQ 278
#define STRICT_NE 279
#define PLUS 280
#define MINUS 281
#define MUL 282
#define MOD 283
#define POWER 284
#define INC 285
#define DEC 286
#define DIV 287
#define DIV_ASSIGN 288
#define LSHIFT 289
#define RSHIFT 290
#define URSHIFT 291
#define BIT_AND 292
#define BIT_OR 293
#define BIT_XOR 294
#define NOT 295
#define BIT_NOT 296
#define LOGICAL_AND 297
#define LOGICAL_OR 298
#define NULLISH_COALESCING 299
#define CONDITIONAL 300
#define COLON 301
#define ASSIGN 302
#define ADD_ASSIGN 303
#define SUB_ASSIGN 304
#define MUL_ASSIGN 305
#define POWER_ASSIGN 306
#define ARROW 307
#define SPREAD 308
#define BREAK 309
#define CASE 310
#define CATCH 311
#define CLASS 312
#define CONST 313
#define CONTINUE 314
#define DEBUGGER 315
#define DEFAULT 316
#define DELETE 317
#define DO 318
#define ELSE 319
#define EXPORT 320
#define EXTENDS 321
#define FINALLY 322
#define FOR 323
#define FUNCTION 324
#define IF 325
#define IMPORT 326
#define IN 327
#define INSTANCEOF 328
#define NEW 329
#define RETURN 330
#define SUPER 331
#define SWITCH 332
#define THIS 333
#define THROW 334
#define TRY 335
#define TYPEOF 336
#define VAR 337
#define VOID 338
#define WHILE 339
#define WITH 340
#define YIELD 341
#define ENUM 342
#define AWAIT 343
#define GET 344
#define SET 345
#define STATIC 346
#define ASYNC 347
#define FROM 348
#define OF 349
#define LET 350
#define AS 351
#define TRUE_LITERAL 352
#define FALSE_LITERAL 353
#define NULL_LITERAL 354
#define UPOSTFIX 355




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "src/parser.y"
{
    char *str_val;
    struct ASTNode *node;
    NodeList *list;
}
/* Line 1529 of yacc.c.  */
#line 255 "build/parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


