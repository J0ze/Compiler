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
#define YYFINAL  135
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   990

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNRULES -- Number of states.  */
#define YYNSTATES  306

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
      39,    43,    45,    46,    49,    52,    55,    58,    60,    64,
      66,    70,    76,    84,    87,    88,    90,    91,    96,   101,
     103,   105,   107,   113,   123,   124,   126,   128,   136,   139,
     142,   150,   154,   158,   163,   169,   172,   173,   178,   179,
     182,   187,   191,   192,   195,   196,   198,   200,   204,   208,
     213,   217,   223,   227,   228,   231,   235,   240,   242,   246,
     248,   250,   254,   256,   262,   264,   268,   270,   274,   276,
     280,   282,   286,   288,   292,   294,   298,   302,   306,   310,
     312,   316,   320,   324,   328,   332,   336,   338,   342,   346,
     350,   352,   356,   360,   362,   366,   370,   374,   376,   379,
     382,   385,   388,   391,   394,   397,   400,   403,   405,   408,
     411,   413,   415,   417,   420,   423,   427,   429,   434,   438,
     441,   445,   447,   451,   453,   455,   457,   459,   461,   463,
     465,   469,   471,   473,   479,   481,   483,   486,   490,   492,
     496,   500,   502,   504,   506,   509,   513,   515,   519,   523,
     525
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    93,    -1,    -1,    94,    -1,    95,    -1,
      94,    95,    -1,    96,    -1,    98,    -1,   102,    -1,   105,
      -1,   103,    -1,   107,    -1,   108,    -1,   113,    -1,   114,
      -1,   115,    -1,   116,    -1,   119,    -1,   127,    -1,     6,
      93,     7,    -1,    13,    -1,    -1,    99,    97,    -1,    83,
     100,    -1,    54,   100,    -1,    78,   100,    -1,   101,    -1,
     100,    14,   101,    -1,     3,    -1,     3,    43,   132,    -1,
      66,     8,   131,     9,    95,    -1,    66,     8,   131,     9,
      95,    60,    95,    -1,   131,    97,    -1,    -1,   131,    -1,
      -1,    71,   106,   104,    97,    -1,    65,     3,   150,    96,
      -1,   109,    -1,   110,    -1,   112,    -1,    80,     8,   131,
       9,    95,    -1,    64,     8,   111,    13,   104,    13,   104,
       9,    95,    -1,    -1,    99,    -1,   131,    -1,    59,    95,
      80,     8,   131,     9,    97,    -1,    50,    97,    -1,    55,
      97,    -1,    73,     8,   131,     9,     6,   121,     7,    -1,
      76,    96,   117,    -1,    76,    96,   118,    -1,    76,    96,
     117,   118,    -1,    52,     8,     3,     9,    96,    -1,    63,
      96,    -1,    -1,    75,   120,   131,    97,    -1,    -1,   121,
     122,    -1,    51,   131,    42,   123,    -1,    57,    42,   123,
      -1,    -1,   123,    95,    -1,    -1,   125,    -1,     3,    -1,
     125,    14,     3,    -1,    65,   150,    96,    -1,    65,     3,
     150,    96,    -1,    53,     3,   128,    -1,    53,     3,    62,
     132,   128,    -1,     6,   129,     7,    -1,    -1,   129,   130,
      -1,   156,   150,    96,    -1,    84,   156,   150,    96,    -1,
     132,    -1,   131,    14,   132,    -1,   133,    -1,   159,    -1,
     146,    43,   132,    -1,   134,    -1,   134,    41,   132,    42,
     132,    -1,   135,    -1,   134,    39,   135,    -1,   136,    -1,
     135,    38,   136,    -1,   137,    -1,   136,    34,   137,    -1,
     138,    -1,   137,    35,   138,    -1,   139,    -1,   138,    33,
     139,    -1,   140,    -1,   139,    19,   140,    -1,   139,    20,
     140,    -1,   139,    21,   140,    -1,   139,    22,   140,    -1,
     141,    -1,   140,    15,   141,    -1,   140,    16,   141,    -1,
     140,    17,   141,    -1,   140,    18,   141,    -1,   140,    68,
     141,    -1,   140,    69,   141,    -1,   142,    -1,   141,    30,
     142,    -1,   141,    31,   142,    -1,   141,    32,   142,    -1,
     143,    -1,   142,    23,   143,    -1,   142,    24,   143,    -1,
     144,    -1,   143,    25,   144,    -1,   143,    26,   144,    -1,
     143,    27,   144,    -1,   145,    -1,    58,   144,    -1,    79,
     144,    -1,    77,   144,    -1,    28,   144,    -1,    29,   144,
      -1,    23,   144,    -1,    24,   144,    -1,    37,   144,    -1,
      36,   144,    -1,   146,    -1,   146,    28,    -1,   146,    29,
      -1,   147,    -1,   148,    -1,   149,    -1,    70,   147,    -1,
     149,   150,    -1,    70,   147,   150,    -1,   152,    -1,   149,
      10,   131,    11,    -1,   149,    12,     3,    -1,     8,     9,
      -1,     8,   151,     9,    -1,   132,    -1,   151,    14,   132,
      -1,    74,    -1,     3,    -1,     5,    -1,     4,    -1,    87,
      -1,    88,    -1,    89,    -1,     8,   131,     9,    -1,   153,
      -1,   157,    -1,     8,   124,     9,    48,   160,    -1,   126,
      -1,    72,    -1,     6,     7,    -1,     6,   154,     7,    -1,
     155,    -1,   154,    14,   155,    -1,   156,    42,   132,    -1,
       3,    -1,     4,    -1,     5,    -1,    10,    11,    -1,    10,
     158,    11,    -1,   132,    -1,   158,    14,   132,    -1,     3,
      48,   160,    -1,    96,    -1,   134,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   135,   135,   141,   142,   147,   153,   162,   164,   166,
     168,   170,   172,   174,   176,   178,   180,   182,   184,   186,
     191,   197,   200,   212,   217,   219,   221,   228,   233,   241,
     243,   248,   250,   255,   262,   263,   268,   268,   276,   281,
     283,   285,   290,   295,   302,   303,   305,   310,   315,   320,
     325,   331,   335,   339,   344,   349,   354,   354,   364,   365,
     374,   376,   382,   383,   393,   394,   400,   405,   414,   418,
     424,   428,   433,   439,   440,   450,   457,   466,   468,   473,
     475,   477,   482,   484,   489,   491,   496,   498,   503,   505,
     510,   512,   517,   519,   524,   526,   528,   530,   532,   537,
     539,   541,   543,   545,   547,   549,   554,   556,   558,   560,
     565,   567,   569,   574,   576,   578,   580,   585,   587,   589,
     591,   593,   595,   597,   599,   601,   603,   609,   611,   613,
     618,   620,   625,   627,   632,   634,   639,   641,   643,   648,
     650,   655,   660,   668,   670,   672,   674,   676,   678,   680,
     682,   684,   686,   688,   693,   695,   701,   705,   711,   716,
     725,   732,   734,   736,   742,   746,   753,   758,   769,   780,
     782
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
  "while_statement", "for_statement", "for_init", "do_while_statement",
  "break_statement", "continue_statement", "switch_statement",
  "try_statement", "catch_clause", "finally_clause", "throw_statement",
  "@2", "switch_case_list", "switch_case", "case_statement_list",
  "arrow_parameter_list", "identifier_list", "function_expression",
  "class_declaration", "class_body", "method_definition_list",
  "method_definition", "expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "update_expression", "left_hand_side_expression", "new_expression",
  "call_expression", "member_expression", "arguments", "argument_list",
  "primary_expression", "object_expression", "property_list", "property",
  "property_name", "array_expression", "element_list",
  "arrow_function_expression", "arrow_body", 0
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
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    97,    97,    98,    99,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   104,   104,   106,   105,   107,   108,
     108,   108,   109,   110,   111,   111,   111,   112,   113,   114,
     115,   116,   116,   116,   117,   118,   120,   119,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   141,   141,   141,   141,
     142,   142,   142,   143,   143,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   153,   153,   154,   154,
     155,   156,   156,   156,   157,   157,   158,   158,   159,   160,
     160
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     2,     2,     2,     2,     1,     3,     1,
       3,     5,     7,     2,     0,     1,     0,     4,     4,     1,
       1,     1,     5,     9,     0,     1,     1,     7,     2,     2,
       7,     3,     3,     4,     5,     2,     0,     4,     0,     2,
       4,     3,     0,     2,     0,     1,     1,     3,     3,     4,
       3,     5,     3,     0,     2,     3,     4,     1,     3,     1,
       1,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     1,     2,     2,     3,     1,     4,     3,     2,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     5,     1,     1,     2,     3,     1,     3,
       3,     1,     1,     1,     2,     3,     1,     3,     3,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   144,   146,   145,     0,    64,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    22,     0,     0,     0,
       0,     0,     0,    36,   155,     0,   143,    56,     0,     0,
       0,     0,     0,     0,   147,   148,   149,     0,     2,     4,
       5,     7,     8,    22,     9,    11,    10,    12,    13,    39,
      40,    41,    14,    15,    16,    17,    18,   154,    19,    22,
      77,    79,    82,    84,    86,    88,    90,    92,    94,    99,
     106,   110,   113,   117,   127,   130,   131,   132,   136,   151,
     152,    80,     0,   144,   146,   145,   156,     0,     0,   158,
       0,   144,     0,     0,     0,    65,     0,   164,   166,     0,
     144,   123,   127,   124,   121,   122,   126,   125,    21,    48,
       0,    29,    25,    27,    49,   118,     0,    44,     0,     0,
       0,     0,     0,   133,   132,    34,     0,     0,     3,     0,
     120,    26,   119,     0,    24,     1,     6,    23,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,     0,     0,     0,   134,
     169,   170,   168,    20,   157,     0,     0,   161,   162,   163,
       0,     0,     0,   150,   165,     0,    73,     0,    70,     0,
       0,     0,    45,     0,    46,     0,   139,   141,     0,    68,
       0,   133,   135,    22,    35,     0,    22,     0,     0,    51,
      52,     0,    78,    85,     0,    87,    89,    91,    93,    95,
      96,    97,    98,   100,   101,   102,   103,   104,   105,   107,
     108,   109,   111,   112,   114,   115,   116,    81,     0,   138,
     159,   160,     0,     0,    67,   167,     0,     0,    30,    28,
       0,    34,    38,   140,     0,     0,    37,     0,    57,     0,
      55,    53,     0,     0,   137,    69,   153,    72,     0,    74,
       0,    71,     0,     0,   142,    31,    58,     0,    42,    83,
       0,     0,    22,    34,     0,     0,     0,     0,    75,    47,
       0,    32,    50,     0,     0,    59,    54,    76,     0,     0,
      62,    43,    62,    61,    60,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    87,    39,    40,    41,   109,    42,    43,   112,
     113,    44,    45,   203,    46,   125,    47,    48,    49,    50,
     193,    51,    52,    53,    54,    55,   209,   210,    56,   127,
     285,   295,   303,    94,    95,    57,    58,   188,   246,   269,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   120,
     198,    78,    79,    88,    89,    90,    80,    99,    81,   172
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -245
static const yytype_int16 yypact[] =
{
     378,   -38,  -245,  -245,   291,   630,   504,   717,   717,   717,
     717,   717,   717,    34,    11,    30,    34,   717,   378,    47,
      66,    89,    26,  -245,  -245,   116,  -245,  -245,    83,   717,
      30,   717,   119,    30,  -245,  -245,  -245,    72,  -245,   378,
    -245,  -245,  -245,    34,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   104,
    -245,  -245,    95,   102,   131,   111,   147,   123,    33,   125,
     129,   133,  -245,  -245,    37,  -245,  -245,   127,  -245,  -245,
    -245,  -245,   756,    -7,   144,   172,  -245,   174,    39,  -245,
     176,    28,   126,    67,   210,   206,    64,  -245,  -245,    96,
    -245,  -245,   139,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
       2,   178,   208,  -245,  -245,  -245,   143,   465,   216,   591,
      83,   843,    26,   216,   151,   843,   843,   843,   378,    -9,
    -245,   208,  -245,   843,   208,  -245,  -245,  -245,   843,  -245,
     717,   843,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,  -245,  -245,   843,   843,   223,  -245,
    -245,   188,  -245,  -245,  -245,   170,   843,  -245,  -245,  -245,
     216,   180,   226,  -245,  -245,   843,  -245,   843,  -245,   843,
      30,   222,  -245,   218,   219,    83,  -245,  -245,    79,  -245,
      81,  -245,  -245,    34,   219,    90,   104,   224,    83,   171,
    -245,    94,  -245,   102,   193,   131,   111,   147,   123,    33,
      33,    33,    33,   125,   125,   125,   125,   125,   125,   129,
     129,   129,   133,   133,  -245,  -245,  -245,  -245,   112,  -245,
    -245,  -245,    83,   756,  -245,  -245,     8,   230,  -245,  -245,
     843,   843,   921,  -245,   843,   378,  -245,   231,  -245,   235,
    -245,  -245,   378,   843,  -245,  -245,  -245,  -245,   170,  -245,
     216,  -245,    97,   227,  -245,   179,  -245,   233,  -245,  -245,
     216,    83,    34,   843,   378,    20,    83,    83,  -245,  -245,
     234,  -245,  -245,   843,   202,  -245,  -245,  -245,   378,    10,
    -245,  -245,  -245,   378,   378,  -245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,   247,  -245,   -14,   -26,   -15,  -245,   132,   121,
      60,  -245,  -245,  -244,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,    42,  -245,  -245,
    -245,  -245,   -50,  -245,  -245,  -245,  -245,     6,  -245,  -245,
      -5,     0,  -245,   -79,   117,   114,   115,   118,   120,     1,
     -68,    21,    24,     9,  -245,    50,   -17,  -245,   -13,   -55,
    -245,  -245,  -245,  -245,    84,  -223,  -245,  -245,  -245,    23
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -164
static const yytype_int16 yytable[] =
{
      96,   114,   129,   171,   116,   123,    98,   273,   186,   124,
      82,   177,   178,   179,   110,   267,   101,   103,   104,   105,
     106,   107,   169,   270,   138,   136,   115,   292,   137,   100,
       2,     3,    92,   111,     5,  -161,     6,   -66,   130,   290,
     132,    82,   -66,   207,   139,   280,   174,   108,   150,   151,
     152,   153,   302,   175,   208,   117,   170,   102,   102,   102,
     102,   102,   102,   195,   187,   164,   165,   102,   202,   118,
     180,   293,   135,   183,   119,   119,    82,   294,   138,   102,
     166,   102,   223,   224,   225,   226,   227,   228,   253,   128,
     255,    93,   268,   254,   199,   138,   122,   121,    24,   257,
      26,   154,   155,   262,   138,   201,   282,   184,   138,   124,
     185,   138,   194,    34,    35,    36,   200,   108,   138,   197,
     204,   205,   206,   264,   126,   242,   138,   133,   211,   177,
     178,   179,   102,    86,   140,   119,   141,   167,   212,   168,
     142,   214,   146,   147,   148,   149,   144,   219,   220,   221,
     222,   131,   159,   160,   134,   156,   157,   158,   161,   162,
     163,   167,   238,   168,   171,   143,   237,   164,   165,   252,
     234,   235,   236,   177,   178,   179,   241,   229,   230,   231,
     145,   173,   260,   232,   233,   245,  -162,   247,   256,   248,
     102,   258,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,  -163,   281,   265,   170,   176,   181,
     182,   189,   190,   191,   119,   287,   239,   140,   243,   244,
     250,   251,   259,   138,   208,   263,   186,   276,   277,   284,
     283,   275,   286,   298,   300,   272,   204,    38,   278,   192,
     249,   261,   304,   271,   274,   288,   215,   213,   216,   240,
     296,   297,   217,   279,     0,   218,   266,   289,     0,     0,
     291,     0,     0,     0,     0,     0,     0,     0,   204,     0,
       0,     0,     0,     0,   301,     0,     0,     0,   299,   305,
     305,     0,     0,   102,    83,    84,    85,     4,    86,     5,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    14,    15,    16,     0,     0,    17,
      18,     0,     0,     0,     0,    19,    20,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,    33,     0,     0,     0,    34,    35,
      36,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,    10,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    14,    15,    16,     0,     0,    17,    18,     0,     0,
       0,     0,    19,    20,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     0,
       0,    33,     0,     0,     0,    34,    35,    36,     1,     2,
       3,    92,     0,     5,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     1,     2,     3,
      92,     0,     5,     0,     6,    97,     0,     0,     0,    15,
       0,     0,     0,    17,     0,     0,     0,     7,     8,     0,
      93,     0,     9,    10,     0,    22,     0,    24,     0,    26,
      11,    12,    29,    30,    31,     0,     0,     0,    33,     0,
       0,     0,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,    22,     0,    24,     0,    26,     0,
       0,    29,     0,    31,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     1,     2,     3,    92,     0,     5,
     196,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    91,     2,     3,    92,     0,     5,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     7,     8,     0,    93,     0,     9,    10,
       0,    22,     0,    24,     0,    26,    11,    12,    29,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
      22,     0,    24,     0,    26,     0,     0,    29,     0,    31,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
     100,     2,     3,    92,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,   100,
       2,     3,     4,     0,     5,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     7,
       8,     0,    93,     0,     9,    10,     0,    22,     0,    24,
       0,    26,    11,    12,    29,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,    22,     0,    24,     0,
      26,     0,     0,    29,     0,    31,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,     1,     2,     3,    92,
       0,     5,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,    22,     0,    24,     0,    26,     0,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,   -69,   -69,   -69,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,
     -69,     0,   -69,     0,   -69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69
};

static const yytype_int16 yycheck[] =
{
       5,    16,    28,    82,    18,    22,     6,   251,     6,    22,
      48,     3,     4,     5,     3,     7,     7,     8,     9,    10,
      11,    12,    77,   246,    14,    39,    17,     7,    43,     3,
       4,     5,     6,     3,     8,    42,    10,     9,    29,   283,
      31,    48,    14,    52,    59,   268,     7,    13,    15,    16,
      17,    18,    42,    14,    63,     8,    82,     7,     8,     9,
      10,    11,    12,   118,    62,    28,    29,    17,   123,     3,
       3,    51,     0,     9,     8,     8,    48,    57,    14,    29,
      43,    31,   150,   151,   152,   153,   154,   155,     9,     6,
       9,    65,    84,    14,   120,    14,    70,     8,    72,     9,
      74,    68,    69,     9,    14,   122,     9,    11,    14,   122,
      14,    14,   117,    87,    88,    89,   121,    13,    14,   119,
     125,   126,   127,    11,     8,   180,    14,     8,   133,     3,
       4,     5,    82,     7,    39,     8,    41,    10,   138,    12,
      38,   141,    19,    20,    21,    22,    35,   146,   147,   148,
     149,    30,    23,    24,    33,    30,    31,    32,    25,    26,
      27,    10,   167,    12,   243,    34,   166,    28,    29,   195,
     161,   162,   163,     3,     4,     5,   176,   156,   157,   158,
      33,     7,   208,   159,   160,   185,    42,   187,   203,   189,
     140,   206,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    42,   270,   242,   243,    42,     9,
      14,    43,    14,    80,     8,   280,     3,    39,    48,     3,
       8,    13,     8,    14,    63,    42,     6,     6,     3,    60,
      13,   255,     9,     9,    42,   250,   251,     0,   262,   117,
     190,   209,   302,   247,   254,   281,   142,   140,   143,   175,
     286,   287,   144,   263,    -1,   145,   243,   282,    -1,    -1,
     284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,    -1,
      -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,   293,   303,
     304,    -1,    -1,   243,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,    55,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,
      89,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    54,    55,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    89,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    23,    24,    -1,
      65,    -1,    28,    29,    -1,    70,    -1,    72,    -1,    74,
      36,    37,    77,    78,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    23,    24,    -1,    65,    -1,    28,    29,
      -1,    70,    -1,    72,    -1,    74,    36,    37,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    -1,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    23,
      24,    -1,    65,    -1,    28,    29,    -1,    70,    -1,    72,
      -1,    74,    36,    37,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    23,    24,    28,
      29,    36,    37,    50,    53,    54,    55,    58,    59,    64,
      65,    66,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    83,    87,    88,    89,    92,    93,    94,
      95,    96,    98,    99,   102,   103,   105,   107,   108,   109,
     110,   112,   113,   114,   115,   116,   119,   126,   127,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   152,   153,
     157,   159,    48,     3,     4,     5,     7,    93,   154,   155,
     156,     3,     6,    65,   124,   125,   131,    11,   132,   158,
       3,   144,   146,   144,   144,   144,   144,   144,    13,    97,
       3,     3,   100,   101,    97,   144,    95,     8,     3,     8,
     150,     8,    70,   147,   149,   106,     8,   120,     6,    96,
     144,   100,   144,     8,   100,     0,    95,    97,    14,    97,
      39,    41,    38,    34,    35,    33,    19,    20,    21,    22,
      15,    16,    17,    18,    68,    69,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    43,    10,    12,   150,
      96,   134,   160,     7,     7,    14,    42,     3,     4,     5,
       3,     9,    14,     9,    11,    14,     6,    62,   128,    43,
      14,    80,    99,   111,   131,   150,     9,   132,   151,    96,
     131,   147,   150,   104,   131,   131,   131,    52,    63,   117,
     118,   131,   132,   135,   132,   136,   137,   138,   139,   140,
     140,   140,   140,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   143,   143,   144,   144,   144,   132,   131,     3,
     155,   132,   150,    48,     3,   132,   129,   132,   132,   101,
       8,    13,    96,     9,    14,     9,    97,     9,    97,     8,
      96,   118,     9,    42,    11,    96,   160,     7,    84,   130,
     156,   128,   131,   104,   132,    95,     6,     3,    95,   132,
     156,   150,     9,    13,    60,   121,     9,   150,    96,    97,
     104,    95,     7,    51,    57,   122,    96,    96,     9,   131,
      42,    95,    42,   123,   123,    95
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
#line 136 "src/parser.y"
    { ast_root = create_script_node((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 141 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 4:
#line 143 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 5:
#line 148 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); 
        // (移除重置)
    ;}
    break;

  case 6:
#line 154 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); 
        (yyval.list) = (yyvsp[(1) - (2)].list); 
        // (移除重置)
    ;}
    break;

  case 7:
#line 163 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 165 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 167 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 169 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 171 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 173 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:
#line 175 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 177 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:
#line 179 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:
#line 181 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 183 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 185 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 187 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 192 "src/parser.y"
    { (yyval.node) = create_block_statement((yyvsp[(2) - (3)].list)); ;}
    break;

  case 21:
#line 198 "src/parser.y"
    { extern Scanner *scanner; scanner->line_terminator_seen = false; ;}
    break;

  case 22:
#line 200 "src/parser.y"
    {
        extern Scanner *scanner;
        if (!can_insert_semicolon(scanner)) {
            yyerror("missing semicolon");
            YYERROR;
        }
        // 无论 ASI 成功与否，标志都必须被“消耗”和重置
        scanner->line_terminator_seen = false; // <-- 在此重置
    ;}
    break;

  case 23:
#line 213 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 24:
#line 218 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_LET, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 25:
#line 220 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_CONST, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 26:
#line 222 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_VAR, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 27:
#line 229 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 28:
#line 234 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 29:
#line 242 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (1)].str_val)), NULL); ;}
    break;

  case 30:
#line 244 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (3)].str_val)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 31:
#line 249 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL); ;}
    break;

  case 32:
#line 251 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 33:
#line 256 "src/parser.y"
    { (yyval.node) = create_expression_statement((yyvsp[(1) - (2)].node)); ;}
    break;

  case 34:
#line 262 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 35:
#line 264 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 36:
#line 268 "src/parser.y"
    { scanner->restrict_new_line = true; ;}
    break;

  case 37:
#line 269 "src/parser.y"
    { 
        scanner->restrict_new_line = false; // 退出受限模式
        (yyval.node) = create_return_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 38:
#line 277 "src/parser.y"
    { (yyval.node) = create_function_declaration(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 39:
#line 282 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 40:
#line 284 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 41:
#line 286 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 42:
#line 291 "src/parser.y"
    { (yyval.node) = create_while_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 43:
#line 296 "src/parser.y"
    { (yyval.node) = create_for_statement((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node)); ;}
    break;

  case 44:
#line 302 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 45:
#line 304 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:
#line 306 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 47:
#line 311 "src/parser.y"
    { (yyval.node) = create_do_while_statement((yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node)); ;}
    break;

  case 48:
#line 316 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 49:
#line 321 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 50:
#line 326 "src/parser.y"
    { (yyval.node) = create_switch_statement((yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].list)); ;}
    break;

  case 51:
#line 332 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL); ;}
    break;

  case 52:
#line 336 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 53:
#line 340 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 54:
#line 345 "src/parser.y"
    { (yyval.node) = create_catch_clause(create_identifier_node((yyvsp[(3) - (5)].str_val)), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 55:
#line 350 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 56:
#line 354 "src/parser.y"
    { scanner->restrict_new_line = true; ;}
    break;

  case 57:
#line 355 "src/parser.y"
    {
        scanner->restrict_new_line = false; // 退出受限模式
        (yyval.node) = create_throw_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 58:
#line 364 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 59:
#line 366 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 60:
#line 375 "src/parser.y"
    { (yyval.node) = create_switch_case((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list)); ;}
    break;

  case 61:
#line 377 "src/parser.y"
    { (yyval.node) = create_switch_case(NULL, (yyvsp[(3) - (3)].list)); ;}
    break;

  case 62:
#line 382 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 63:
#line 384 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 64:
#line 393 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 65:
#line 395 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 66:
#line 401 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), create_identifier_node((yyvsp[(1) - (1)].str_val)));
    ;}
    break;

  case 67:
#line 406 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), create_identifier_node((yyvsp[(3) - (3)].str_val)));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 68:
#line 415 "src/parser.y"
    { (yyval.node) = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 69:
#line 419 "src/parser.y"
    { (yyval.node) = create_function_expression(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 70:
#line 425 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (3)].str_val)), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 71:
#line 429 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (5)].str_val)), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 72:
#line 434 "src/parser.y"
    { (yyval.node) = create_class_body((yyvsp[(2) - (3)].list)); ;}
    break;

  case 73:
#line 439 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 74:
#line 441 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 75:
#line 451 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.node) = create_method_definition((yyvsp[(1) - (3)].node), func_value, false); // 传递 is_static = false
    ;}
    break;

  case 76:
#line 458 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (4)].node), func_value, true); // 传递 is_static = true
    ;}
    break;

  case 77:
#line 467 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 78:
#line 469 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_COMMA, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:
#line 474 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 80:
#line 476 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 81:
#line 478 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_ASSIGN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:
#line 483 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 83:
#line 485 "src/parser.y"
    { (yyval.node) = create_conditional_expression((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 84:
#line 490 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 85:
#line 492 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:
#line 497 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 87:
#line 499 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:
#line 504 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 89:
#line 506 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:
#line 511 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 91:
#line 513 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:
#line 518 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 93:
#line 520 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:
#line 525 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 95:
#line 527 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:
#line 529 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 97:
#line 531 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:
#line 533 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 99:
#line 538 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 100:
#line 540 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 101:
#line 542 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 102:
#line 544 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 103:
#line 546 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 104:
#line 548 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_IN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 105:
#line 550 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_INSTANCEOF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 106:
#line 555 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 107:
#line 557 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 108:
#line 559 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_RSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 109:
#line 561 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_URSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 110:
#line 566 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 111:
#line 568 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 112:
#line 570 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 113:
#line 575 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 114:
#line 577 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 115:
#line 579 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 116:
#line 581 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_POWER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 117:
#line 586 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:
#line 588 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DELETE, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 119:
#line 590 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 120:
#line 592 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_TYPEOF, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 121:
#line 594 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_INC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 122:
#line 596 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DEC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 123:
#line 598 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_PLUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 124:
#line 600 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_MINUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 125:
#line 602 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_BIT_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 126:
#line 604 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 127:
#line 610 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 128:
#line 612 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_INC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 129:
#line 614 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_DEC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 130:
#line 619 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 131:
#line 621 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 132:
#line 626 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 133:
#line 628 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (2)].node), NULL); ;}
    break;

  case 134:
#line 633 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 135:
#line 635 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].list)); ;}
    break;

  case 136:
#line 640 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 137:
#line 642 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 138:
#line 644 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node((yyvsp[(3) - (3)].str_val)), false); ;}
    break;

  case 139:
#line 649 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 140:
#line 651 "src/parser.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 141:
#line 656 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); // Create a new list
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));  // Add the first argument
    ;}
    break;

  case 142:
#line 661 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));  // Add the next argument to the existing list
        (yyval.list) = (yyvsp[(1) - (3)].list);                  // Return the modified list
    ;}
    break;

  case 143:
#line 669 "src/parser.y"
    { (yyval.node) = create_this_node(); ;}
    break;

  case 144:
#line 671 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 145:
#line 673 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 146:
#line 675 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 147:
#line 677 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_TRUE, strdup("true")); ;}
    break;

  case 148:
#line 679 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_FALSE, strdup("false")); ;}
    break;

  case 149:
#line 681 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NULL, strdup("null")); ;}
    break;

  case 150:
#line 683 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 151:
#line 685 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 152:
#line 687 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 153:
#line 689 "src/parser.y"
    {
        bool is_expression_body = ((yyvsp[(5) - (5)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression((yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].node), is_expression_body);
    ;}
    break;

  case 154:
#line 694 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 155:
#line 696 "src/parser.y"
    { (yyval.node) = create_super_node(); ;}
    break;

  case 156:
#line 702 "src/parser.y"
    { (yyval.node) = create_object_expression(nodelist_create()); ;}
    break;

  case 157:
#line 706 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 158:
#line 712 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 159:
#line 717 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 160:
#line 726 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 161:
#line 733 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 162:
#line 735 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 163:
#line 737 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 164:
#line 743 "src/parser.y"
    { (yyval.node) = create_array_expression(nodelist_create()); ;}
    break;

  case 165:
#line 747 "src/parser.y"
    { (yyval.node) = create_array_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 166:
#line 754 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 167:
#line 759 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 168:
#line 770 "src/parser.y"
    {
        NodeList *params = nodelist_create();
        nodelist_append(params, create_identifier_node((yyvsp[(1) - (3)].str_val)));
        bool is_expression_body = ((yyvsp[(3) - (3)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression(params, (yyvsp[(3) - (3)].node), is_expression_body);
    ;}
    break;

  case 169:
#line 781 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 170:
#line 783 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2895 "build/parser.tab.c"
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


#line 785 "src/parser.y"

/* 附加 C 代码区 */
/* (main 和 yyerror 已移至 main.c) */
