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
#define YYFINAL  131
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   982

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNRULES -- Number of states.  */
#define YYNSTATES  287

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
     103,   105,   111,   121,   122,   124,   126,   134,   137,   140,
     148,   152,   156,   161,   167,   170,   171,   176,   177,   180,
     185,   189,   190,   193,   194,   196,   198,   202,   206,   211,
     213,   217,   219,   221,   225,   227,   233,   235,   239,   241,
     245,   247,   251,   253,   257,   259,   263,   265,   269,   273,
     277,   281,   283,   287,   291,   295,   299,   303,   307,   309,
     313,   317,   321,   323,   327,   331,   333,   337,   341,   345,
     347,   350,   353,   356,   359,   362,   365,   368,   371,   374,
     376,   379,   382,   384,   386,   388,   391,   394,   398,   400,
     405,   409,   412,   416,   418,   422,   424,   426,   428,   430,
     432,   434,   436,   440,   442,   444,   450,   452,   455,   459,
     461,   465,   469,   471,   473,   475,   478,   482,   484,   488,
     492,   494
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    93,    -1,    -1,    94,    -1,    95,    -1,
      94,    95,    -1,    96,    -1,    98,    -1,   102,    -1,   105,
      -1,   103,    -1,   107,    -1,   108,    -1,   113,    -1,   114,
      -1,   115,    -1,   116,    -1,   119,    -1,     6,    93,     7,
      -1,    13,    -1,    -1,    99,    97,    -1,    83,   100,    -1,
      54,   100,    -1,    78,   100,    -1,   101,    -1,   100,    14,
     101,    -1,     3,    -1,     3,    43,   128,    -1,    66,     8,
     127,     9,    95,    -1,    66,     8,   127,     9,    95,    60,
      95,    -1,   127,    97,    -1,    -1,   127,    -1,    -1,    71,
     106,   104,    97,    -1,    65,     3,   146,    96,    -1,   109,
      -1,   110,    -1,   112,    -1,    80,     8,   127,     9,    95,
      -1,    64,     8,   111,    13,   104,    13,   104,     9,    95,
      -1,    -1,    99,    -1,   127,    -1,    59,    95,    80,     8,
     127,     9,    97,    -1,    50,    97,    -1,    55,    97,    -1,
      73,     8,   127,     9,     6,   121,     7,    -1,    76,    96,
     117,    -1,    76,    96,   118,    -1,    76,    96,   117,   118,
      -1,    52,     8,     3,     9,    96,    -1,    63,    96,    -1,
      -1,    75,   120,   127,    97,    -1,    -1,   121,   122,    -1,
      51,   127,    42,   123,    -1,    57,    42,   123,    -1,    -1,
     123,    95,    -1,    -1,   125,    -1,     3,    -1,   125,    14,
       3,    -1,    65,   146,    96,    -1,    65,     3,   146,    96,
      -1,   128,    -1,   127,    14,   128,    -1,   129,    -1,   155,
      -1,   142,    43,   128,    -1,   130,    -1,   130,    41,   128,
      42,   128,    -1,   131,    -1,   130,    39,   131,    -1,   132,
      -1,   131,    38,   132,    -1,   133,    -1,   132,    34,   133,
      -1,   134,    -1,   133,    35,   134,    -1,   135,    -1,   134,
      33,   135,    -1,   136,    -1,   135,    19,   136,    -1,   135,
      20,   136,    -1,   135,    21,   136,    -1,   135,    22,   136,
      -1,   137,    -1,   136,    15,   137,    -1,   136,    16,   137,
      -1,   136,    17,   137,    -1,   136,    18,   137,    -1,   136,
      68,   137,    -1,   136,    69,   137,    -1,   138,    -1,   137,
      30,   138,    -1,   137,    31,   138,    -1,   137,    32,   138,
      -1,   139,    -1,   138,    23,   139,    -1,   138,    24,   139,
      -1,   140,    -1,   139,    25,   140,    -1,   139,    26,   140,
      -1,   139,    27,   140,    -1,   141,    -1,    58,   140,    -1,
      79,   140,    -1,    77,   140,    -1,    28,   140,    -1,    29,
     140,    -1,    23,   140,    -1,    24,   140,    -1,    37,   140,
      -1,    36,   140,    -1,   142,    -1,   142,    28,    -1,   142,
      29,    -1,   143,    -1,   144,    -1,   145,    -1,    70,   143,
      -1,   145,   146,    -1,    70,   143,   146,    -1,   148,    -1,
     145,    10,   127,    11,    -1,   145,    12,     3,    -1,     8,
       9,    -1,     8,   147,     9,    -1,   128,    -1,   147,    14,
     128,    -1,    74,    -1,     3,    -1,     5,    -1,     4,    -1,
      87,    -1,    88,    -1,    89,    -1,     8,   127,     9,    -1,
     149,    -1,   153,    -1,     8,   124,     9,    48,   156,    -1,
     126,    -1,     6,     7,    -1,     6,   150,     7,    -1,   151,
      -1,   150,    14,   151,    -1,   152,    42,   128,    -1,     3,
      -1,     4,    -1,     5,    -1,    10,    11,    -1,    10,   154,
      11,    -1,   128,    -1,   154,    14,   128,    -1,     3,    48,
     156,    -1,    96,    -1,   130,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   137,   138,   143,   149,   158,   160,   162,
     164,   166,   168,   170,   172,   174,   176,   178,   180,   185,
     191,   194,   206,   211,   213,   215,   222,   227,   235,   237,
     242,   244,   249,   256,   257,   262,   262,   270,   275,   277,
     279,   284,   289,   296,   297,   299,   304,   309,   314,   319,
     325,   329,   333,   338,   343,   348,   348,   358,   359,   368,
     370,   376,   377,   387,   388,   394,   399,   408,   412,   418,
     420,   425,   427,   429,   434,   436,   441,   443,   448,   450,
     455,   457,   462,   464,   469,   471,   476,   478,   480,   482,
     484,   489,   491,   493,   495,   497,   499,   501,   506,   508,
     510,   512,   517,   519,   521,   526,   528,   530,   532,   537,
     539,   541,   543,   545,   547,   549,   551,   553,   555,   561,
     563,   565,   570,   572,   577,   579,   584,   586,   591,   593,
     595,   600,   602,   607,   612,   620,   622,   624,   626,   628,
     630,   632,   634,   636,   638,   640,   645,   651,   655,   661,
     666,   675,   682,   684,   686,   692,   696,   703,   708,   719,
     730,   732
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
  "expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "unary_expression", "update_expression", "left_hand_side_expression",
  "new_expression", "call_expression", "member_expression", "arguments",
  "argument_list", "primary_expression", "object_expression",
  "property_list", "property", "property_name", "array_expression",
  "element_list", "arrow_function_expression", "arrow_body", 0
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
     108,   109,   110,   111,   111,   111,   112,   113,   114,   115,
     116,   116,   116,   117,   118,   120,   119,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   138,   138,   138,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   149,   149,   150,
     150,   151,   152,   152,   152,   153,   153,   154,   154,   155,
     156,   156
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     0,     2,     2,     2,     2,     1,     3,     1,     3,
       5,     7,     2,     0,     1,     0,     4,     4,     1,     1,
       1,     5,     9,     0,     1,     1,     7,     2,     2,     7,
       3,     3,     4,     5,     2,     0,     4,     0,     2,     4,
       3,     0,     2,     0,     1,     1,     3,     3,     4,     1,
       3,     1,     1,     3,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     1,     2,     2,     3,     1,     4,
       3,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     5,     1,     2,     3,     1,
       3,     3,     1,     1,     1,     2,     3,     1,     3,     3,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   136,   138,   137,     0,    63,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    21,     0,     0,     0,     0,
       0,     0,    35,     0,   135,    55,     0,     0,     0,     0,
       0,     0,   139,   140,   141,     0,     2,     4,     5,     7,
       8,    21,     9,    11,    10,    12,    13,    38,    39,    40,
      14,    15,    16,    17,    18,   146,    21,    69,    71,    74,
      76,    78,    80,    82,    84,    86,    91,    98,   102,   105,
     109,   119,   122,   123,   124,   128,   143,   144,    72,     0,
     136,   138,   137,   147,     0,     0,   149,     0,   136,     0,
       0,     0,    64,     0,   155,   157,     0,   136,   115,   119,
     116,   113,   114,   118,   117,    20,    47,    28,    24,    26,
      48,   110,     0,    43,     0,     0,     0,     0,     0,   125,
     124,    33,     0,     0,     3,     0,   112,    25,   111,     0,
      23,     1,     6,    22,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,   121,     0,     0,     0,   126,   160,   161,   159,    19,
     148,     0,     0,   152,   153,   154,     0,     0,     0,   142,
     156,     0,     0,     0,     0,    44,     0,    45,     0,   131,
     133,     0,    67,     0,   125,   127,    21,    34,     0,    21,
       0,     0,    50,    51,     0,    70,    77,     0,    79,    81,
      83,    85,    87,    88,    89,    90,    92,    93,    94,    95,
      96,    97,    99,   100,   101,   103,   104,   106,   107,   108,
      73,     0,   130,   150,   151,     0,     0,    66,   158,    29,
      27,     0,    33,    37,   132,     0,     0,    36,     0,    56,
       0,    54,    52,     0,     0,   129,    68,   145,     0,     0,
     134,    30,    57,     0,    41,    75,    21,    33,     0,     0,
       0,    46,     0,    31,    49,     0,     0,    58,    53,     0,
       0,    61,    42,    61,    60,    59,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,    84,    37,    38,    39,   106,    40,    41,   108,
     109,    42,    43,   196,    44,   121,    45,    46,    47,    48,
     186,    49,    50,    51,    52,    53,   202,   203,    54,   123,
     269,   277,   284,    91,    92,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    99,    72,    73,    74,   116,   191,    75,    76,    85,
      86,    87,    77,    96,    78,   168
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -221
static const yytype_int16 yypact[] =
{
     370,   -28,  -221,  -221,   283,   622,   496,   709,   709,   709,
     709,   709,   709,    45,    57,    45,   709,   370,    82,    49,
      91,     8,  -221,   100,  -221,  -221,   106,   709,    57,   709,
     108,    57,  -221,  -221,  -221,   128,  -221,   370,  -221,  -221,
    -221,    45,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,    67,  -221,  -221,     5,
      94,   102,   107,   114,   119,    23,   124,   156,   141,  -221,
    -221,    22,  -221,  -221,   123,  -221,  -221,  -221,  -221,   748,
     -12,   111,   117,  -221,   143,    48,  -221,   122,    20,    97,
      58,   148,   147,    61,  -221,  -221,    53,  -221,  -221,   161,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,   133,   172,  -221,
    -221,  -221,   118,   457,   186,   583,   106,   835,     8,   186,
     115,   835,   835,   835,   370,   -10,  -221,   172,  -221,   835,
     172,  -221,  -221,  -221,   835,  -221,   709,   835,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
    -221,  -221,   835,   835,   192,  -221,  -221,   160,  -221,  -221,
    -221,   166,   835,  -221,  -221,  -221,   186,   152,   198,  -221,
    -221,   835,   835,    57,   194,  -221,   190,   191,   106,  -221,
    -221,    62,  -221,    63,  -221,  -221,    45,   191,    65,    67,
     196,   106,   144,  -221,    80,  -221,    94,   164,   102,   107,
     114,   119,    23,    23,    23,    23,   124,   124,   124,   124,
     124,   124,   156,   156,   156,   141,   141,  -221,  -221,  -221,
    -221,    95,  -221,  -221,  -221,   106,   748,  -221,  -221,  -221,
    -221,   835,   835,   913,  -221,   835,   370,  -221,   202,  -221,
     206,  -221,  -221,   370,   835,  -221,  -221,  -221,    89,   197,
    -221,   151,  -221,   205,  -221,  -221,    45,   835,   370,    12,
     106,  -221,   207,  -221,  -221,   835,   173,  -221,  -221,   370,
      17,  -221,  -221,  -221,   370,   370,  -221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,   217,  -221,    -2,   -23,    -8,  -221,   105,   120,
      36,  -221,  -221,  -220,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,    18,  -221,  -221,
    -221,  -221,   -62,  -221,  -221,  -221,    -3,    15,  -221,   -78,
      86,    85,    87,    84,    88,     1,   -63,    31,    37,    16,
    -221,     0,   -13,  -221,   -11,   -65,  -221,  -221,  -221,  -221,
      54,  -221,  -221,  -221,  -221,    -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -155
static const yytype_int16 yytable[] =
{
      71,   167,    93,   125,    71,    71,    71,   110,   119,   165,
     120,    97,     2,     3,    89,   112,     5,    71,     6,   274,
      79,    95,   259,    98,   100,   101,   102,   103,   104,   -65,
    -152,   134,   111,   133,   -65,   132,    79,    71,   146,   147,
     148,   149,   200,   126,   136,   128,   137,   272,   135,   188,
     160,   161,   114,   201,   195,   170,   166,   115,   105,   283,
     107,   176,   171,   275,   180,   162,   115,   181,    79,   276,
     179,   244,   246,    90,   248,   134,   245,   134,   118,   134,
     105,   134,    24,   216,   217,   218,   219,   220,   221,   253,
     113,   150,   151,   192,   134,    32,    33,    34,   266,   117,
     173,   174,   175,   134,    83,   194,   255,   120,   122,   134,
     187,   235,   124,    71,   193,    71,   129,    71,   197,   198,
     199,    71,    71,    71,    71,   163,   204,   164,   131,    71,
     190,   115,   138,   163,    71,   164,   139,    71,   142,   143,
     144,   145,   140,   212,   213,   214,   215,   141,   127,   205,
     169,   130,   207,  -153,   152,   153,   154,   177,   167,  -154,
     231,   178,    71,    71,   172,   243,   157,   158,   159,   173,
     174,   175,    71,   227,   228,   229,   182,   230,   251,   155,
     156,    71,    71,   222,   223,   224,   183,   234,   247,   160,
     161,   249,   225,   226,   115,   232,   238,   239,   184,   136,
     236,   237,   241,   242,   250,   134,   254,   201,   262,   263,
     267,   268,   256,   166,   270,   281,   279,    36,   185,   240,
     252,   285,   206,   208,   210,   233,   209,   257,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,   258,   197,
       0,    71,    71,     0,   261,    71,    71,   278,     0,     0,
       0,   264,     0,    71,    71,     0,     0,     0,   271,     0,
     260,     0,     0,     0,   197,     0,   273,    71,    71,   265,
       0,     0,   280,     0,     0,    71,     0,   282,     0,    71,
       0,     0,   286,   286,    71,    71,    80,    81,    82,     4,
      83,     5,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,    14,    15,     0,
       0,    16,    17,     0,     0,     0,     0,    18,    19,    20,
       0,     0,     0,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
      32,    33,    34,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,    15,     0,     0,    16,    17,
       0,     0,     0,     0,    18,    19,    20,     0,     0,     0,
      21,    22,     0,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,    32,    33,    34,
       1,     2,     3,    89,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,     1,
       2,     3,    89,     0,     5,     0,     6,    94,     0,     0,
       0,    14,     0,     0,     0,    16,     0,     0,     0,     7,
       8,     0,    90,     0,     9,    10,     0,    21,     0,     0,
       0,    24,    11,    12,    27,    28,    29,     0,     0,     0,
      31,     0,     0,     0,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,    21,     0,     0,     0,
      24,     0,     0,    27,     0,    29,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,     1,     2,     3,    89,
       0,     5,   189,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    88,     2,     3,    89,     0,
       5,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     7,     8,     0,    90,     0,
       9,    10,     0,    21,     0,     0,     0,    24,    11,    12,
      27,     0,    29,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,    21,     0,     0,     0,    24,     0,     0,    27,
       0,    29,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    97,     2,     3,    89,     0,     5,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    97,     2,     3,     4,     0,     5,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     7,     8,     0,    90,     0,     9,    10,     0,    21,
       0,     0,     0,    24,    11,    12,    27,     0,    29,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,    21,     0,
       0,     0,    24,     0,     0,    27,     0,    29,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,     1,     2,
       3,    89,     0,     5,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,    21,     0,     0,     0,    24,
       0,     0,    27,     0,    29,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,   -68,   -68,
     -68,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,   -68,   -68,     0,   -68,     0,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,   -68
};

static const yytype_int16 yycheck[] =
{
       0,    79,     5,    26,     4,     5,     6,    15,    21,    74,
      21,     3,     4,     5,     6,    17,     8,    17,    10,     7,
      48,     6,   242,     7,     8,     9,    10,    11,    12,     9,
      42,    14,    16,    41,    14,    37,    48,    37,    15,    16,
      17,    18,    52,    27,    39,    29,    41,   267,    56,   114,
      28,    29,     3,    63,   119,     7,    79,     8,    13,    42,
       3,     3,    14,    51,    11,    43,     8,    14,    48,    57,
       9,     9,     9,    65,     9,    14,    14,    14,    70,    14,
      13,    14,    74,   146,   147,   148,   149,   150,   151,     9,
       8,    68,    69,   116,    14,    87,    88,    89,     9,     8,
       3,     4,     5,    14,     7,   118,    11,   118,     8,    14,
     113,   176,     6,   113,   117,   115,     8,   117,   121,   122,
     123,   121,   122,   123,   124,    10,   129,    12,     0,   129,
     115,     8,    38,    10,   134,    12,    34,   137,    19,    20,
      21,    22,    35,   142,   143,   144,   145,    33,    28,   134,
       7,    31,   137,    42,    30,    31,    32,     9,   236,    42,
     163,    14,   162,   163,    42,   188,    25,    26,    27,     3,
       4,     5,   172,   157,   158,   159,    43,   162,   201,    23,
      24,   181,   182,   152,   153,   154,    14,   172,   196,    28,
      29,   199,   155,   156,     8,     3,   181,   182,    80,    39,
      48,     3,     8,    13,     8,    14,    42,    63,     6,     3,
      13,    60,   235,   236,     9,    42,     9,     0,   113,   183,
     202,   283,   136,   138,   140,   171,   139,   236,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,
      -1,   241,   242,    -1,   246,   245,   246,   270,    -1,    -1,
      -1,   253,    -1,   253,   254,    -1,    -1,    -1,   266,    -1,
     245,    -1,    -1,    -1,   267,    -1,   268,   267,   268,   254,
      -1,    -1,   275,    -1,    -1,   275,    -1,   279,    -1,   279,
      -1,    -1,   284,   285,   284,   285,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    89,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    23,
      24,    -1,    65,    -1,    28,    29,    -1,    70,    -1,    -1,
      -1,    74,    36,    37,    77,    78,    79,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      74,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    23,    24,    -1,    65,    -1,
      28,    29,    -1,    70,    -1,    -1,    -1,    74,    36,    37,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    23,    24,    -1,    65,    -1,    28,    29,    -1,    70,
      -1,    -1,    -1,    74,    36,    37,    77,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,
      -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    23,    24,    28,
      29,    36,    37,    50,    54,    55,    58,    59,    64,    65,
      66,    70,    71,    73,    74,    75,    76,    77,    78,    79,
      80,    83,    87,    88,    89,    92,    93,    94,    95,    96,
      98,    99,   102,   103,   105,   107,   108,   109,   110,   112,
     113,   114,   115,   116,   119,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   148,   149,   153,   155,    48,
       3,     4,     5,     7,    93,   150,   151,   152,     3,     6,
      65,   124,   125,   127,    11,   128,   154,     3,   140,   142,
     140,   140,   140,   140,   140,    13,    97,     3,   100,   101,
      97,   140,    95,     8,     3,     8,   146,     8,    70,   143,
     145,   106,     8,   120,     6,    96,   140,   100,   140,     8,
     100,     0,    95,    97,    14,    97,    39,    41,    38,    34,
      35,    33,    19,    20,    21,    22,    15,    16,    17,    18,
      68,    69,    30,    31,    32,    23,    24,    25,    26,    27,
      28,    29,    43,    10,    12,   146,    96,   130,   156,     7,
       7,    14,    42,     3,     4,     5,     3,     9,    14,     9,
      11,    14,    43,    14,    80,    99,   111,   127,   146,     9,
     128,   147,    96,   127,   143,   146,   104,   127,   127,   127,
      52,    63,   117,   118,   127,   128,   131,   128,   132,   133,
     134,   135,   136,   136,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   140,   140,
     128,   127,     3,   151,   128,   146,    48,     3,   128,   128,
     101,     8,    13,    96,     9,    14,     9,    97,     9,    97,
       8,    96,   118,     9,    42,    11,    96,   156,   127,   104,
     128,    95,     6,     3,    95,   128,     9,    13,    60,   121,
       9,    97,   104,    95,     7,    51,    57,   122,    96,     9,
     127,    42,    95,    42,   123,   123,    95
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
#line 132 "src/parser.y"
    { ast_root = create_script_node((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 137 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 4:
#line 139 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 5:
#line 144 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); 
        // (移除重置)
    ;}
    break;

  case 6:
#line 150 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); 
        (yyval.list) = (yyvsp[(1) - (2)].list); 
        // (移除重置)
    ;}
    break;

  case 7:
#line 159 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 161 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 163 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 165 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 167 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 169 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:
#line 171 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 173 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:
#line 175 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:
#line 177 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 179 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 181 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 186 "src/parser.y"
    { (yyval.node) = create_block_statement((yyvsp[(2) - (3)].list)); ;}
    break;

  case 20:
#line 192 "src/parser.y"
    { extern Scanner *scanner; scanner->line_terminator_seen = false; ;}
    break;

  case 21:
#line 194 "src/parser.y"
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

  case 22:
#line 207 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 23:
#line 212 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_LET, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 24:
#line 214 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_CONST, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 25:
#line 216 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_VAR, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 26:
#line 223 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 27:
#line 228 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 28:
#line 236 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (1)].str_val)), NULL); ;}
    break;

  case 29:
#line 238 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (3)].str_val)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 30:
#line 243 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL); ;}
    break;

  case 31:
#line 245 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 32:
#line 250 "src/parser.y"
    { (yyval.node) = create_expression_statement((yyvsp[(1) - (2)].node)); ;}
    break;

  case 33:
#line 256 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 34:
#line 258 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 35:
#line 262 "src/parser.y"
    { scanner->restrict_new_line = true; ;}
    break;

  case 36:
#line 263 "src/parser.y"
    { 
        scanner->restrict_new_line = false; // 退出受限模式
        (yyval.node) = create_return_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 37:
#line 271 "src/parser.y"
    { (yyval.node) = create_function_declaration(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 38:
#line 276 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 39:
#line 278 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 40:
#line 280 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 41:
#line 285 "src/parser.y"
    { (yyval.node) = create_while_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 42:
#line 290 "src/parser.y"
    { (yyval.node) = create_for_statement((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node)); ;}
    break;

  case 43:
#line 296 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 44:
#line 298 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:
#line 300 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:
#line 305 "src/parser.y"
    { (yyval.node) = create_do_while_statement((yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node)); ;}
    break;

  case 47:
#line 310 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 48:
#line 315 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 49:
#line 320 "src/parser.y"
    { (yyval.node) = create_switch_statement((yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].list)); ;}
    break;

  case 50:
#line 326 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL); ;}
    break;

  case 51:
#line 330 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 52:
#line 334 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 53:
#line 339 "src/parser.y"
    { (yyval.node) = create_catch_clause(create_identifier_node((yyvsp[(3) - (5)].str_val)), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 54:
#line 344 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 55:
#line 348 "src/parser.y"
    { scanner->restrict_new_line = true; ;}
    break;

  case 56:
#line 349 "src/parser.y"
    {
        scanner->restrict_new_line = false; // 退出受限模式
        (yyval.node) = create_throw_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 57:
#line 358 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 58:
#line 360 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 59:
#line 369 "src/parser.y"
    { (yyval.node) = create_switch_case((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list)); ;}
    break;

  case 60:
#line 371 "src/parser.y"
    { (yyval.node) = create_switch_case(NULL, (yyvsp[(3) - (3)].list)); ;}
    break;

  case 61:
#line 376 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 62:
#line 378 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 63:
#line 387 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 64:
#line 389 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 65:
#line 395 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), create_identifier_node((yyvsp[(1) - (1)].str_val)));
    ;}
    break;

  case 66:
#line 400 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), create_identifier_node((yyvsp[(3) - (3)].str_val)));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 67:
#line 409 "src/parser.y"
    { (yyval.node) = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 68:
#line 413 "src/parser.y"
    { (yyval.node) = create_function_expression(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 69:
#line 419 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 70:
#line 421 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_COMMA, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 71:
#line 426 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 72:
#line 428 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 73:
#line 430 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_ASSIGN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 74:
#line 435 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 75:
#line 437 "src/parser.y"
    { (yyval.node) = create_conditional_expression((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 76:
#line 442 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 77:
#line 444 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:
#line 449 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 79:
#line 451 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:
#line 456 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 81:
#line 458 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:
#line 463 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 83:
#line 465 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 84:
#line 470 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 85:
#line 472 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:
#line 477 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 87:
#line 479 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:
#line 481 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:
#line 483 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:
#line 485 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:
#line 490 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 92:
#line 492 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:
#line 494 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:
#line 496 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:
#line 498 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:
#line 500 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_IN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 97:
#line 502 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_INSTANCEOF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:
#line 507 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 99:
#line 509 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 100:
#line 511 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_RSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 101:
#line 513 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_URSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 102:
#line 518 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 103:
#line 520 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 104:
#line 522 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 105:
#line 527 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 106:
#line 529 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 107:
#line 531 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 108:
#line 533 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_POWER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 109:
#line 538 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 110:
#line 540 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DELETE, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 111:
#line 542 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 112:
#line 544 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_TYPEOF, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 113:
#line 546 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_INC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 114:
#line 548 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DEC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 115:
#line 550 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_PLUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 116:
#line 552 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_MINUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 117:
#line 554 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_BIT_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 118:
#line 556 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 119:
#line 562 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 120:
#line 564 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_INC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 121:
#line 566 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_DEC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 122:
#line 571 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 123:
#line 573 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 124:
#line 578 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 125:
#line 580 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (2)].node), NULL); ;}
    break;

  case 126:
#line 585 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 127:
#line 587 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].list)); ;}
    break;

  case 128:
#line 592 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 129:
#line 594 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 130:
#line 596 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node((yyvsp[(3) - (3)].str_val)), false); ;}
    break;

  case 131:
#line 601 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 132:
#line 603 "src/parser.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 133:
#line 608 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); // Create a new list
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));  // Add the first argument
    ;}
    break;

  case 134:
#line 613 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));  // Add the next argument to the existing list
        (yyval.list) = (yyvsp[(1) - (3)].list);                  // Return the modified list
    ;}
    break;

  case 135:
#line 621 "src/parser.y"
    { (yyval.node) = create_this_node(); ;}
    break;

  case 136:
#line 623 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 137:
#line 625 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 138:
#line 627 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 139:
#line 629 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_TRUE, strdup("true")); ;}
    break;

  case 140:
#line 631 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_FALSE, strdup("false")); ;}
    break;

  case 141:
#line 633 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NULL, strdup("null")); ;}
    break;

  case 142:
#line 635 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 143:
#line 637 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 144:
#line 639 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 145:
#line 641 "src/parser.y"
    {
        bool is_expression_body = ((yyvsp[(5) - (5)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression((yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].node), is_expression_body);
    ;}
    break;

  case 146:
#line 646 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 147:
#line 652 "src/parser.y"
    { (yyval.node) = create_object_expression(nodelist_create()); ;}
    break;

  case 148:
#line 656 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 149:
#line 662 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 150:
#line 667 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 151:
#line 676 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 152:
#line 683 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 153:
#line 685 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 154:
#line 687 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 155:
#line 693 "src/parser.y"
    { (yyval.node) = create_array_expression(nodelist_create()); ;}
    break;

  case 156:
#line 697 "src/parser.y"
    { (yyval.node) = create_array_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 157:
#line 704 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 158:
#line 709 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 159:
#line 720 "src/parser.y"
    {
        NodeList *params = nodelist_create();
        nodelist_append(params, create_identifier_node((yyvsp[(1) - (3)].str_val)));
        bool is_expression_body = ((yyvsp[(3) - (3)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression(params, (yyvsp[(3) - (3)].node), is_expression_body);
    ;}
    break;

  case 160:
#line 731 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 161:
#line 733 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2824 "build/parser.tab.c"
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


#line 735 "src/parser.y"

/* 附加 C 代码区 */
/* (main 和 yyerror 已移至 main.c) */
