/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     STRING_LITERAL = 259,
     NUMERIC_LITERAL = 260,
     LBRACE = 261,
     RBRACE = 262,
     LPAREN = 263,
     RPAREN = 264,
     LBRACK = 265,
     RBRACK = 266,
     DOT = 267,
     SEMICOLON = 268,
     COMMA = 269,
     LT = 270,
     GT = 271,
     LE = 272,
     GE = 273,
     EQ = 274,
     NE = 275,
     STRICT_EQ = 276,
     STRICT_NE = 277,
     PLUS = 278,
     MINUS = 279,
     MUL = 280,
     MOD = 281,
     POWER = 282,
     INC = 283,
     DEC = 284,
     LSHIFT = 285,
     RSHIFT = 286,
     URSHIFT = 287,
     BIT_AND = 288,
     BIT_OR = 289,
     BIT_XOR = 290,
     NOT = 291,
     BIT_NOT = 292,
     LOGICAL_AND = 293,
     LOGICAL_OR = 294,
     NULLISH_COALESCING = 295,
     CONDITIONAL = 296,
     COLON = 297,
     ASSIGN = 298,
     ADD_ASSIGN = 299,
     SUB_ASSIGN = 300,
     MUL_ASSIGN = 301,
     POWER_ASSIGN = 302,
     ARROW = 303,
     SPREAD = 304,
     BREAK = 305,
     CASE = 306,
     CATCH = 307,
     CLASS = 308,
     CONST = 309,
     CONTINUE = 310,
     DEBUGGER = 311,
     DEFAULT = 312,
     DELETE = 313,
     DO = 314,
     ELSE = 315,
     EXPORT = 316,
     EXTENDS = 317,
     FINALLY = 318,
     FOR = 319,
     FUNCTION = 320,
     IF = 321,
     IMPORT = 322,
     IN = 323,
     INSTANCEOF = 324,
     NEW = 325,
     RETURN = 326,
     SUPER = 327,
     SWITCH = 328,
     THIS = 329,
     THROW = 330,
     TRY = 331,
     TYPEOF = 332,
     VAR = 333,
     VOID = 334,
     WHILE = 335,
     WITH = 336,
     YIELD = 337,
     LET = 338,
     STATIC = 339,
     ENUM = 340,
     AWAIT = 341,
     TRUE_LITERAL = 342,
     FALSE_LITERAL = 343,
     NULL_LITERAL = 344,
     UPOSTFIX = 345
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define NUMERIC_LITERAL 260
#define LBRACE 261
#define RBRACE 262
#define LPAREN 263
#define RPAREN 264
#define LBRACK 265
#define RBRACK 266
#define DOT 267
#define SEMICOLON 268
#define COMMA 269
#define LT 270
#define GT 271
#define LE 272
#define GE 273
#define EQ 274
#define NE 275
#define STRICT_EQ 276
#define STRICT_NE 277
#define PLUS 278
#define MINUS 279
#define MUL 280
#define MOD 281
#define POWER 282
#define INC 283
#define DEC 284
#define LSHIFT 285
#define RSHIFT 286
#define URSHIFT 287
#define BIT_AND 288
#define BIT_OR 289
#define BIT_XOR 290
#define NOT 291
#define BIT_NOT 292
#define LOGICAL_AND 293
#define LOGICAL_OR 294
#define NULLISH_COALESCING 295
#define CONDITIONAL 296
#define COLON 297
#define ASSIGN 298
#define ADD_ASSIGN 299
#define SUB_ASSIGN 300
#define MUL_ASSIGN 301
#define POWER_ASSIGN 302
#define ARROW 303
#define SPREAD 304
#define BREAK 305
#define CASE 306
#define CATCH 307
#define CLASS 308
#define CONST 309
#define CONTINUE 310
#define DEBUGGER 311
#define DEFAULT 312
#define DELETE 313
#define DO 314
#define ELSE 315
#define EXPORT 316
#define EXTENDS 317
#define FINALLY 318
#define FOR 319
#define FUNCTION 320
#define IF 321
#define IMPORT 322
#define IN 323
#define INSTANCEOF 324
#define NEW 325
#define RETURN 326
#define SUPER 327
#define SWITCH 328
#define THIS 329
#define THROW 330
#define TRY 331
#define TYPEOF 332
#define VAR 333
#define VOID 334
#define WHILE 335
#define WITH 336
#define YIELD 337
#define LET 338
#define STATIC 339
#define ENUM 340
#define AWAIT 341
#define TRUE_LITERAL 342
#define FALSE_LITERAL 343
#define NULL_LITERAL 344
#define UPOSTFIX 345




/* Copy the first part of user declarations.  */
#line 4 "src/parser.y"

#include <stdio.h>
#include <string.h>
#include "common.h" // 包含 Scanner 定义
#include "ast.h"    // 引入 AST 节点定义

// 全局变量的声明 (在 main.c 中定义)
extern Scanner *scanner;
extern ASTNode *ast_root;

/* 声明我们真正的词法分析器 (来自 lexer.re) */
int real_yylex(YYSTYPE *yylval, Scanner *scanner);

/*
 * 包装函数：Bison 会调用这个 yylex(void)
 */
int yylex(void)
{
    /* 访问 Bison 生成的全局 yylval */
    extern YYSTYPE yylval; 

    /* 访问我们在 main.c 中定义的全局 scanner */
    extern Scanner *scanner; 

    /* 用正确的参数调用我们真正的词法分析器 */
    return real_yylex(&yylval, scanner);
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 34 "src/parser.y"
{
    char *str_val;
    struct ASTNode *node; // *** 更新：使用 ast.h 中的类型 ***
    NodeList *list;
}
/* Line 193 of yacc.c.  */
#line 311 "build/parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 324 "build/parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  113
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   602

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      41,    43,    44,    47,    50,    53,    56,    58,    62,    64,
      68,    74,    82,    85,    86,    88,    89,    94,    99,   101,
     103,   109,   119,   120,   122,   124,   127,   130,   138,   142,
     146,   151,   157,   160,   161,   166,   167,   170,   175,   179,
     180,   183,   185,   189,   191,   195,   197,   203,   205,   209,
     211,   215,   217,   221,   223,   227,   229,   233,   235,   239,
     243,   247,   251,   253,   257,   261,   265,   269,   273,   277,
     279,   283,   287,   291,   293,   297,   301,   303,   307,   311,
     315,   317,   320,   323,   326,   329,   332,   335,   338,   341,
     344,   346,   349,   352,   354,   356,   358,   361,   364,   368,
     370,   375,   379,   382,   386,   388,   392,   394,   396,   398,
     400,   402,   404,   406,   410,   412,   415,   419,   421,   425,
     429,   431,   433
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    93,    -1,    -1,    94,    -1,    95,    -1,
      94,    95,    -1,    96,    -1,    98,    -1,   102,    -1,   105,
      -1,   103,    -1,   107,    -1,   108,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   118,    -1,     6,    93,     7,
      -1,    13,    -1,    -1,    99,    97,    -1,    83,   100,    -1,
      54,   100,    -1,    78,   100,    -1,   101,    -1,   100,    14,
     101,    -1,     3,    -1,     3,    43,   124,    -1,    66,     8,
     123,     9,    95,    -1,    66,     8,   123,     9,    95,    60,
      95,    -1,   123,    97,    -1,    -1,   123,    -1,    -1,    71,
     106,   104,    97,    -1,    65,     3,   142,    96,    -1,   109,
      -1,   110,    -1,    80,     8,   123,     9,    95,    -1,    64,
       8,   111,    13,   104,    13,   104,     9,    95,    -1,    -1,
      99,    -1,   123,    -1,    50,    97,    -1,    55,    97,    -1,
      73,     8,   123,     9,     6,   120,     7,    -1,    76,    96,
     116,    -1,    76,    96,   117,    -1,    76,    96,   116,   117,
      -1,    52,     8,     3,     9,    96,    -1,    63,    96,    -1,
      -1,    75,   119,   123,    97,    -1,    -1,   120,   121,    -1,
      51,   123,    42,   122,    -1,    57,    42,   122,    -1,    -1,
     122,    95,    -1,   124,    -1,   123,    14,   124,    -1,   125,
      -1,   138,    43,   124,    -1,   126,    -1,   126,    41,   124,
      42,   124,    -1,   127,    -1,   126,    39,   127,    -1,   128,
      -1,   127,    38,   128,    -1,   129,    -1,   128,    34,   129,
      -1,   130,    -1,   129,    35,   130,    -1,   131,    -1,   130,
      33,   131,    -1,   132,    -1,   131,    19,   132,    -1,   131,
      20,   132,    -1,   131,    21,   132,    -1,   131,    22,   132,
      -1,   133,    -1,   132,    15,   133,    -1,   132,    16,   133,
      -1,   132,    17,   133,    -1,   132,    18,   133,    -1,   132,
      68,   133,    -1,   132,    69,   133,    -1,   134,    -1,   133,
      30,   134,    -1,   133,    31,   134,    -1,   133,    32,   134,
      -1,   135,    -1,   134,    23,   135,    -1,   134,    24,   135,
      -1,   136,    -1,   135,    25,   136,    -1,   135,    26,   136,
      -1,   135,    27,   136,    -1,   137,    -1,    58,   136,    -1,
      79,   136,    -1,    77,   136,    -1,    28,   136,    -1,    29,
     136,    -1,    23,   136,    -1,    24,   136,    -1,    37,   136,
      -1,    36,   136,    -1,   138,    -1,   138,    28,    -1,   138,
      29,    -1,   139,    -1,   140,    -1,   141,    -1,    70,   139,
      -1,   141,   142,    -1,    70,   139,   142,    -1,   144,    -1,
     141,    10,   123,    11,    -1,   141,    12,     3,    -1,     8,
       9,    -1,     8,   143,     9,    -1,   124,    -1,   143,    14,
     124,    -1,    74,    -1,     3,    -1,     5,    -1,     4,    -1,
      87,    -1,    88,    -1,    89,    -1,     8,   123,     9,    -1,
     145,    -1,     6,     7,    -1,     6,   146,     7,    -1,   147,
      -1,   146,    14,   147,    -1,   148,    42,   124,    -1,     3,
      -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   130,   131,   136,   141,   149,   151,   153,
     155,   157,   159,   161,   163,   165,   167,   169,   171,   176,
     182,   184,   195,   200,   202,   204,   211,   216,   224,   226,
     231,   233,   238,   245,   246,   251,   251,   259,   264,   266,
     271,   276,   283,   284,   286,   291,   296,   301,   307,   311,
     315,   320,   325,   330,   330,   340,   341,   350,   352,   358,
     359,   367,   369,   374,   376,   382,   384,   389,   391,   396,
     398,   403,   405,   410,   412,   417,   419,   424,   426,   428,
     430,   432,   437,   439,   441,   443,   445,   447,   449,   454,
     456,   458,   460,   465,   467,   469,   474,   476,   478,   480,
     485,   487,   489,   491,   493,   495,   497,   499,   501,   503,
     509,   511,   513,   518,   520,   525,   527,   532,   534,   539,
     541,   543,   548,   550,   555,   560,   568,   570,   572,   574,
     576,   578,   580,   582,   584,   590,   594,   600,   605,   614,
     621,   623,   625
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "NUMERIC_LITERAL", "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACK",
  "RBRACK", "DOT", "SEMICOLON", "COMMA", "LT", "GT", "LE", "GE", "EQ",
  "NE", "STRICT_EQ", "STRICT_NE", "PLUS", "MINUS", "MUL", "MOD", "POWER",
  "INC", "DEC", "LSHIFT", "RSHIFT", "URSHIFT", "BIT_AND", "BIT_OR",
  "BIT_XOR", "NOT", "BIT_NOT", "LOGICAL_AND", "LOGICAL_OR",
  "NULLISH_COALESCING", "CONDITIONAL", "COLON", "ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "POWER_ASSIGN", "ARROW", "SPREAD", "BREAK",
  "CASE", "CATCH", "CLASS", "CONST", "CONTINUE", "DEBUGGER", "DEFAULT",
  "DELETE", "DO", "ELSE", "EXPORT", "EXTENDS", "FINALLY", "FOR",
  "FUNCTION", "IF", "IMPORT", "IN", "INSTANCEOF", "NEW", "RETURN", "SUPER",
  "SWITCH", "THIS", "THROW", "TRY", "TYPEOF", "VAR", "VOID", "WHILE",
  "WITH", "YIELD", "LET", "STATIC", "ENUM", "AWAIT", "TRUE_LITERAL",
  "FALSE_LITERAL", "NULL_LITERAL", "UPOSTFIX", "$accept", "Script",
  "statement_list_opt", "statement_list", "statement", "block_statement",
  "optional_semicolon", "variable_statement", "variable_declaration_list",
  "variable_declaration_list_inner", "variable_declaration",
  "if_statement", "expression_statement", "expression_opt",
  "return_statement", "@1", "function_declaration", "iteration_statement",
  "while_statement", "for_statement", "for_init", "break_statement",
  "continue_statement", "switch_statement", "try_statement",
  "catch_clause", "finally_clause", "throw_statement", "@2",
  "switch_case_list", "switch_case", "case_statement_list", "expression",
  "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "unary_expression", "update_expression", "left_hand_side_expression",
  "new_expression", "call_expression", "member_expression", "arguments",
  "argument_list", "primary_expression", "object_expression",
  "property_list", "property", "property_name", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      97,    97,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   104,   104,   106,   105,   107,   108,   108,
     109,   110,   111,   111,   111,   112,   113,   114,   115,   115,
     115,   116,   117,   119,   118,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   133,   133,   134,   134,   134,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   146,   146,   147,
     148,   148,   148
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     0,     2,     2,     2,     2,     1,     3,     1,     3,
       5,     7,     2,     0,     1,     0,     4,     4,     1,     1,
       5,     9,     0,     1,     1,     2,     2,     7,     3,     3,
       4,     5,     2,     0,     4,     0,     2,     4,     3,     0,
       2,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     1,     2,     2,     3,     1,
       4,     3,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     1,     3,     3,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   127,   129,   128,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    21,     0,     0,     0,     0,     0,
      35,     0,   126,    53,     0,     0,     0,     0,     0,     0,
     130,   131,   132,     0,     2,     4,     5,     7,     8,    21,
       9,    11,    10,    12,    13,    38,    39,    14,    15,    16,
      17,    18,    21,    61,    63,    65,    67,    69,    71,    73,
      75,    77,    82,    89,    93,    96,   100,   110,   113,   114,
     115,   119,   134,   127,   129,   128,   135,     0,     0,   137,
       0,     0,     0,   106,   110,   107,   104,   105,   109,   108,
      20,    45,    28,    24,    26,    46,   101,    42,     0,     0,
       0,   116,   115,    33,     0,     0,     3,     0,   103,    25,
     102,     0,    23,     1,     6,    22,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,     0,     0,     0,   117,    19,
     136,     0,     0,   140,   141,   142,   133,     0,     0,    43,
       0,    44,     0,     0,   116,   118,    21,    34,     0,    21,
       0,     0,    48,    49,     0,    62,    68,     0,    70,    72,
      74,    76,    78,    79,    80,    81,    83,    84,    85,    86,
      87,    88,    90,    91,    92,    94,    95,    97,    98,    99,
      64,   122,   124,     0,     0,   121,   138,   139,    29,    27,
      33,    37,     0,    36,     0,    54,     0,    52,    50,     0,
       0,   123,     0,   120,     0,    30,    55,     0,    40,    66,
     125,    33,     0,     0,     0,     0,    31,    47,     0,     0,
      56,    51,     0,     0,    59,    41,    59,    58,    57,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    33,    77,    35,    36,    37,    91,    38,    39,    93,
      94,    40,    41,   166,    42,   103,    43,    44,    45,    46,
     160,    47,    48,    49,    50,   172,   173,    51,   105,   233,
     240,   247,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    84,    68,    69,
      70,   148,   203,    71,    72,    78,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -202
static const yytype_int16 yypact[] =
{
     333,  -202,  -202,  -202,   246,   513,   513,   513,   513,   513,
     513,   513,    -1,    33,    -1,   513,    36,    92,    90,    43,
    -202,    99,  -202,  -202,   106,   513,    33,   513,   113,    33,
    -202,  -202,  -202,   127,  -202,   333,  -202,  -202,  -202,    -1,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,    39,  -202,  -202,    47,   104,    94,   115,   118,
      71,    41,   103,     4,   111,  -202,  -202,   -10,  -202,  -202,
      75,  -202,  -202,   114,   119,   124,  -202,   153,    24,  -202,
     125,    74,    58,  -202,    86,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,   126,   154,  -202,  -202,  -202,   420,   162,   513,
      43,   162,    70,   513,   513,   513,   333,   -37,  -202,   154,
    -202,   513,   154,  -202,  -202,  -202,   513,  -202,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,  -202,  -202,   513,   456,   513,   168,  -202,  -202,
    -202,   136,   513,  -202,  -202,  -202,  -202,   513,    33,  -202,
     159,   160,   106,    59,  -202,  -202,    -1,   160,    60,    39,
     165,   106,   112,  -202,    61,  -202,   104,   134,    94,   115,
     118,    71,    41,    41,    41,    41,   103,   103,   103,   103,
     103,   103,     4,     4,     4,   111,   111,  -202,  -202,  -202,
    -202,  -202,  -202,    62,     2,  -202,  -202,  -202,  -202,  -202,
     513,  -202,   333,  -202,   171,  -202,   176,  -202,  -202,   333,
     513,  -202,   513,  -202,   167,   121,  -202,   173,  -202,  -202,
    -202,   513,   333,     3,   106,   174,  -202,  -202,   513,   142,
    -202,  -202,   333,    -8,  -202,  -202,  -202,   333,   333,  -202
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,  -202,   186,  -202,   -34,   -13,    -7,  -202,    91,    11,
      31,  -202,  -202,  -201,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,    15,  -202,  -202,  -202,
    -202,   -56,    -3,  -102,  -202,  -202,    73,    72,    76,    77,
      78,    -2,   -67,    29,    10,    14,  -202,     0,   -16,  -202,
     -11,    28,  -202,  -202,  -202,  -202,    42,  -202
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -143
static const yytype_int16 yytable[] =
{
      67,   114,    82,   101,    67,    67,   116,    95,   102,   224,
     237,   107,    90,   223,   175,   170,   116,   177,   142,   143,
      83,    85,    86,    87,    88,    89,   171,   137,   138,    96,
     235,   150,   115,   144,   246,    67,    92,   109,   151,   108,
     112,   110,   200,   202,    97,   117,     1,     2,     3,    81,
     207,     5,    90,   116,   238,   208,   128,   129,   130,   131,
     239,   186,   187,   188,   189,   190,   191,   156,   212,   214,
     219,   221,   116,   116,   116,   116,   222,   153,   154,   155,
     146,    76,   147,   145,   164,   146,   118,   147,   119,   102,
     124,   125,   126,   127,   161,    98,   163,    67,    99,    67,
     167,   168,   169,    67,    67,    67,    67,   104,   174,   132,
     133,    67,   106,   100,   142,   143,    67,    22,   229,    67,
     230,   111,   182,   183,   184,   185,   162,   113,   121,   165,
      30,    31,    32,   134,   135,   136,   139,   140,   141,   153,
     154,   155,   120,   204,    67,    67,    67,   195,   196,   211,
     122,   123,    67,   197,   198,   199,  -140,    67,   217,   213,
     149,  -141,   215,   192,   193,   194,  -142,   152,   158,   157,
     145,   205,   210,   216,   116,   171,   220,   226,   225,   227,
     231,   232,   234,   242,   244,   228,    34,   218,   159,   209,
     248,   176,   178,   206,     0,     0,     0,   179,   236,   180,
       0,   181,     0,     0,     0,     0,     0,   167,   245,     0,
      67,     0,    67,   249,   249,     0,     0,     0,     0,    67,
      67,   241,    67,     0,     0,     0,     0,     0,   167,     0,
       0,    67,    67,     0,     0,   243,     0,     0,    67,     0,
       0,     0,    67,     0,     0,     0,     0,    67,    67,    73,
      74,    75,     4,    76,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
      13,    14,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,     0,    19,    20,     0,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,     0,     0,    30,    31,    32,     1,     2,     3,     4,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     7,     0,     0,
       0,     8,     9,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,    13,    14,     0,
       0,    15,     0,     0,     0,     0,     0,    16,    17,    18,
       0,     0,     0,    19,    20,     0,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,     0,     0,     0,
      30,    31,    32,     1,     2,     3,    81,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     0,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     1,
       2,     3,    81,     0,     5,   201,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    15,     6,
       7,     0,     0,     0,     8,     9,     0,     0,     0,     0,
      19,     0,    10,    11,    22,     0,     0,    25,    26,    27,
       0,     0,     0,    29,     0,     0,     0,    30,    31,    32,
       0,     0,     0,     0,    15,     0,     1,     2,     3,    81,
       0,     5,     0,     0,     0,     0,    19,     0,     0,     0,
      22,     0,     0,    25,     0,    27,     6,     7,     0,     0,
       0,     8,     9,    30,    31,    32,     0,     0,     0,    10,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,    22,     0,     0,
      25,     0,    27,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32
};

static const yytype_int16 yycheck[] =
{
       0,    35,     5,    19,     4,     5,    14,    14,    19,   210,
       7,    24,    13,    11,   116,    52,    14,   119,    28,    29,
       6,     7,     8,     9,    10,    11,    63,    23,    24,    15,
     231,     7,    39,    43,    42,    35,     3,    26,    14,    25,
      29,    27,   144,   145,     8,    52,     3,     4,     5,     6,
     152,     8,    13,    14,    51,   157,    15,    16,    17,    18,
      57,   128,   129,   130,   131,   132,   133,     9,     9,     9,
       9,     9,    14,    14,    14,    14,    14,     3,     4,     5,
      10,     7,    12,     8,   100,    10,    39,    12,    41,   100,
      19,    20,    21,    22,    97,     3,    99,    97,     8,    99,
     103,   104,   105,   103,   104,   105,   106,     8,   111,    68,
      69,   111,     6,    70,    28,    29,   116,    74,   220,   119,
     222,     8,   124,   125,   126,   127,    98,     0,    34,   101,
      87,    88,    89,    30,    31,    32,    25,    26,    27,     3,
       4,     5,    38,   146,   144,   145,   146,   137,   138,   162,
      35,    33,   152,   139,   140,   141,    42,   157,   171,   166,
       7,    42,   169,   134,   135,   136,    42,    42,    14,    43,
       8,     3,    13,     8,    14,    63,    42,     6,   212,     3,
      13,    60,     9,     9,    42,   219,     0,   172,    97,   158,
     246,   118,   120,   151,    -1,    -1,    -1,   121,   232,   122,
      -1,   123,    -1,    -1,    -1,    -1,    -1,   210,   242,    -1,
     210,    -1,   212,   247,   248,    -1,    -1,    -1,    -1,   219,
     220,   234,   222,    -1,    -1,    -1,    -1,    -1,   231,    -1,
      -1,   231,   232,    -1,    -1,   238,    -1,    -1,   238,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,   247,   248,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,     3,     4,     5,     6,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    89,     3,     4,     5,     6,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      70,    -1,    36,    37,    74,    -1,    -1,    77,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    58,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      74,    -1,    -1,    77,    -1,    79,    23,    24,    -1,    -1,
      -1,    28,    29,    87,    88,    89,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    23,    24,    28,    29,
      36,    37,    50,    54,    55,    58,    64,    65,    66,    70,
      71,    73,    74,    75,    76,    77,    78,    79,    80,    83,
      87,    88,    89,    92,    93,    94,    95,    96,    98,    99,
     102,   103,   105,   107,   108,   109,   110,   112,   113,   114,
     115,   118,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   144,   145,     3,     4,     5,     7,    93,   146,   147,
     148,     6,   123,   136,   138,   136,   136,   136,   136,   136,
      13,    97,     3,   100,   101,    97,   136,     8,     3,     8,
      70,   139,   141,   106,     8,   119,     6,    96,   136,   100,
     136,     8,   100,     0,    95,    97,    14,    97,    39,    41,
      38,    34,    35,    33,    19,    20,    21,    22,    15,    16,
      17,    18,    68,    69,    30,    31,    32,    23,    24,    25,
      26,    27,    28,    29,    43,     8,    10,    12,   142,     7,
       7,    14,    42,     3,     4,     5,     9,    43,    14,    99,
     111,   123,   142,   123,   139,   142,   104,   123,   123,   123,
      52,    63,   116,   117,   123,   124,   127,   124,   128,   129,
     130,   131,   132,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   134,   134,   134,   135,   135,   136,   136,   136,
     124,     9,   124,   143,   123,     3,   147,   124,   124,   101,
      13,    96,     9,    97,     9,    97,     8,    96,   117,     9,
      42,     9,    14,    11,   104,    95,     6,     3,    95,   124,
     124,    13,    60,   120,     9,   104,    95,     7,    51,    57,
     121,    96,     9,   123,    42,    95,    42,   122,   122,    95
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 125 "src/parser.y"
    { ast_root = create_script_node((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 130 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 4:
#line 132 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 5:
#line 137 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); 
    ;}
    break;

  case 6:
#line 142 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); // $1 是 NodeList*, $2 是新语句
        (yyval.list) = (yyvsp[(1) - (2)].list); 
    ;}
    break;

  case 7:
#line 150 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 152 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 154 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 156 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 158 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 160 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:
#line 162 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 164 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:
#line 166 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:
#line 168 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 170 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 172 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 177 "src/parser.y"
    { (yyval.node) = create_block_statement((yyvsp[(2) - (3)].list)); ;}
    break;

  case 21:
#line 184 "src/parser.y"
    {
        extern Scanner *scanner; // <-- 添加这一行
        
        if (!can_insert_semicolon(scanner)) {
            yyerror("missing semicolon");
            YYERROR;
        }
    ;}
    break;

  case 22:
#line 196 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 23:
#line 201 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_LET, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 24:
#line 203 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_CONST, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 25:
#line 205 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_VAR, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 26:
#line 212 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 27:
#line 217 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 28:
#line 225 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (1)].str_val)), NULL); ;}
    break;

  case 29:
#line 227 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (3)].str_val)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 30:
#line 232 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL); ;}
    break;

  case 31:
#line 234 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 32:
#line 239 "src/parser.y"
    { (yyval.node) = create_expression_statement((yyvsp[(1) - (2)].node)); ;}
    break;

  case 33:
#line 245 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 34:
#line 247 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 35:
#line 251 "src/parser.y"
    { scanner->restrict_new_line = true; ;}
    break;

  case 36:
#line 252 "src/parser.y"
    { 
        scanner->restrict_new_line = false; // 退出受限模式
        (yyval.node) = create_return_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 37:
#line 260 "src/parser.y"
    { (yyval.node) = create_function_declaration(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 38:
#line 265 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 39:
#line 267 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 40:
#line 272 "src/parser.y"
    { (yyval.node) = create_while_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 41:
#line 277 "src/parser.y"
    { (yyval.node) = create_for_statement((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node)); ;}
    break;

  case 42:
#line 283 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 43:
#line 285 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 44:
#line 287 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:
#line 292 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 46:
#line 297 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 47:
#line 302 "src/parser.y"
    { (yyval.node) = create_switch_statement((yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].list)); ;}
    break;

  case 48:
#line 308 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL); ;}
    break;

  case 49:
#line 312 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 50:
#line 316 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 51:
#line 321 "src/parser.y"
    { (yyval.node) = create_catch_clause(create_identifier_node((yyvsp[(3) - (5)].str_val)), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 52:
#line 326 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 53:
#line 330 "src/parser.y"
    { scanner->restrict_new_line = true; ;}
    break;

  case 54:
#line 331 "src/parser.y"
    {
        scanner->restrict_new_line = false; // 退出受限模式
        (yyval.node) = create_throw_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 55:
#line 340 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 56:
#line 342 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 57:
#line 351 "src/parser.y"
    { (yyval.node) = create_switch_case((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list)); ;}
    break;

  case 58:
#line 353 "src/parser.y"
    { (yyval.node) = create_switch_case(NULL, (yyvsp[(3) - (3)].list)); ;}
    break;

  case 59:
#line 358 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 60:
#line 360 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 61:
#line 368 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 62:
#line 370 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_COMMA, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 63:
#line 375 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:
#line 377 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_ASSIGN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 65:
#line 383 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:
#line 385 "src/parser.y"
    { (yyval.node) = create_conditional_expression((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 67:
#line 390 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 68:
#line 392 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 69:
#line 397 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 70:
#line 399 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 71:
#line 404 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 72:
#line 406 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 73:
#line 411 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 74:
#line 413 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 75:
#line 418 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 76:
#line 420 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:
#line 425 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 78:
#line 427 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:
#line 429 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:
#line 431 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:
#line 433 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:
#line 438 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 83:
#line 440 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 84:
#line 442 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 85:
#line 444 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:
#line 446 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 87:
#line 448 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_IN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:
#line 450 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_INSTANCEOF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:
#line 455 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 90:
#line 457 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:
#line 459 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_RSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:
#line 461 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_URSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:
#line 466 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 94:
#line 468 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:
#line 470 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:
#line 475 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 97:
#line 477 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:
#line 479 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 99:
#line 481 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_POWER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 100:
#line 486 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 101:
#line 488 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DELETE, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 102:
#line 490 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 103:
#line 492 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_TYPEOF, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 104:
#line 494 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_INC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 105:
#line 496 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DEC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 106:
#line 498 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_PLUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 107:
#line 500 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_MINUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 108:
#line 502 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_BIT_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 109:
#line 504 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 110:
#line 510 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 111:
#line 512 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_INC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 112:
#line 514 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_DEC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 113:
#line 519 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 114:
#line 521 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 115:
#line 526 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 116:
#line 528 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (2)].node), NULL); ;}
    break;

  case 117:
#line 533 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 118:
#line 535 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].list)); ;}
    break;

  case 119:
#line 540 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 120:
#line 542 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 121:
#line 544 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node((yyvsp[(3) - (3)].str_val)), false); ;}
    break;

  case 122:
#line 549 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 123:
#line 551 "src/parser.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 124:
#line 556 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); // Create a new list
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));  // Add the first argument
    ;}
    break;

  case 125:
#line 561 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));  // Add the next argument to the existing list
        (yyval.list) = (yyvsp[(1) - (3)].list);                  // Return the modified list
    ;}
    break;

  case 126:
#line 569 "src/parser.y"
    { (yyval.node) = create_this_node(); ;}
    break;

  case 127:
#line 571 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 128:
#line 573 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 129:
#line 575 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 130:
#line 577 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_TRUE, strdup("true")); ;}
    break;

  case 131:
#line 579 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_FALSE, strdup("false")); ;}
    break;

  case 132:
#line 581 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NULL, strdup("null")); ;}
    break;

  case 133:
#line 583 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 134:
#line 585 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 135:
#line 591 "src/parser.y"
    { (yyval.node) = create_object_expression(nodelist_create()); ;}
    break;

  case 136:
#line 595 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 137:
#line 601 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 138:
#line 606 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 139:
#line 615 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 140:
#line 622 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 141:
#line 624 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 142:
#line 626 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2595 "build/parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 629 "src/parser.y"

/* 附加 C 代码区 */
/* (main 和 yyerror 已移至 main.c) */
