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
     LBRACE = 262,
     RBRACE = 263,
     LPAREN = 264,
     RPAREN = 265,
     LBRACK = 266,
     RBRACK = 267,
     DOT = 268,
     SEMICOLON = 269,
     COMMA = 270,
     LT = 271,
     GT = 272,
     LE = 273,
     GE = 274,
     EQ = 275,
     NE = 276,
     STRICT_EQ = 277,
     STRICT_NE = 278,
     PLUS = 279,
     MINUS = 280,
     MUL = 281,
     MOD = 282,
     POWER = 283,
     INC = 284,
     DEC = 285,
     DIV = 286,
     DIV_ASSIGN = 287,
     LSHIFT = 288,
     RSHIFT = 289,
     URSHIFT = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_XOR = 293,
     NOT = 294,
     BIT_NOT = 295,
     LOGICAL_AND = 296,
     LOGICAL_OR = 297,
     NULLISH_COALESCING = 298,
     CONDITIONAL = 299,
     COLON = 300,
     ASSIGN = 301,
     ADD_ASSIGN = 302,
     SUB_ASSIGN = 303,
     MUL_ASSIGN = 304,
     POWER_ASSIGN = 305,
     ARROW = 306,
     SPREAD = 307,
     BREAK = 308,
     CASE = 309,
     CATCH = 310,
     CLASS = 311,
     CONST = 312,
     CONTINUE = 313,
     DEBUGGER = 314,
     DEFAULT = 315,
     DELETE = 316,
     DO = 317,
     ELSE = 318,
     EXPORT = 319,
     EXTENDS = 320,
     FINALLY = 321,
     FOR = 322,
     FUNCTION = 323,
     IF = 324,
     IMPORT = 325,
     IN = 326,
     INSTANCEOF = 327,
     FROM = 328,
     AS = 329,
     OF = 330,
     NEW = 331,
     RETURN = 332,
     SUPER = 333,
     SWITCH = 334,
     THIS = 335,
     THROW = 336,
     TRY = 337,
     TYPEOF = 338,
     VAR = 339,
     VOID = 340,
     WHILE = 341,
     WITH = 342,
     YIELD = 343,
     LET = 344,
     STATIC = 345,
     ENUM = 346,
     AWAIT = 347,
     TRUE_LITERAL = 348,
     FALSE_LITERAL = 349,
     NULL_LITERAL = 350,
     UPOSTFIX = 351
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define NUMERIC_LITERAL 260
#define REGEX_LITERAL 261
#define LBRACE 262
#define RBRACE 263
#define LPAREN 264
#define RPAREN 265
#define LBRACK 266
#define RBRACK 267
#define DOT 268
#define SEMICOLON 269
#define COMMA 270
#define LT 271
#define GT 272
#define LE 273
#define GE 274
#define EQ 275
#define NE 276
#define STRICT_EQ 277
#define STRICT_NE 278
#define PLUS 279
#define MINUS 280
#define MUL 281
#define MOD 282
#define POWER 283
#define INC 284
#define DEC 285
#define DIV 286
#define DIV_ASSIGN 287
#define LSHIFT 288
#define RSHIFT 289
#define URSHIFT 290
#define BIT_AND 291
#define BIT_OR 292
#define BIT_XOR 293
#define NOT 294
#define BIT_NOT 295
#define LOGICAL_AND 296
#define LOGICAL_OR 297
#define NULLISH_COALESCING 298
#define CONDITIONAL 299
#define COLON 300
#define ASSIGN 301
#define ADD_ASSIGN 302
#define SUB_ASSIGN 303
#define MUL_ASSIGN 304
#define POWER_ASSIGN 305
#define ARROW 306
#define SPREAD 307
#define BREAK 308
#define CASE 309
#define CATCH 310
#define CLASS 311
#define CONST 312
#define CONTINUE 313
#define DEBUGGER 314
#define DEFAULT 315
#define DELETE 316
#define DO 317
#define ELSE 318
#define EXPORT 319
#define EXTENDS 320
#define FINALLY 321
#define FOR 322
#define FUNCTION 323
#define IF 324
#define IMPORT 325
#define IN 326
#define INSTANCEOF 327
#define FROM 328
#define AS 329
#define OF 330
#define NEW 331
#define RETURN 332
#define SUPER 333
#define SWITCH 334
#define THIS 335
#define THROW 336
#define TRY 337
#define TYPEOF 338
#define VAR 339
#define VOID 340
#define WHILE 341
#define WITH 342
#define YIELD 343
#define LET 344
#define STATIC 345
#define ENUM 346
#define AWAIT 347
#define TRUE_LITERAL 348
#define FALSE_LITERAL 349
#define NULL_LITERAL 350
#define UPOSTFIX 351




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "src/parser.y"
{
    char *str_val;
    struct ASTNode *node;
    NodeList *list;
}
/* Line 1529 of yacc.c.  */
#line 247 "build/parser.tab.h"
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


