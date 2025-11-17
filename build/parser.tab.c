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
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1



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
     TOK_VIRTUAL_SEMICOLON = 345,
     UPOSTFIX = 346
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
#define TOK_VIRTUAL_SEMICOLON 345
#define UPOSTFIX 346




/* Copy the first part of user declarations.  */
#line 4 "src/parser.y"

#include <stdio.h>
#include <string.h>
#include "common.h" // 包含 Scanner/ParserState 定义
// #include "ast.h" // <-- 修复: 移除. 'common.h' 已经包含了它.
// #include "parser.tab.h" // <-- 修复: 移除. 'common.h' 已经包含了它.


// 全局变量的声明 (在 main.c 中定义)
extern ParserState *scanner;
extern ASTNode *ast_root;

/* 声明我们真正的词法分析器 (来自 lexer.re) */
int yylex_internal(YYSTYPE *yylval, ParserState *state);

// 声明 bison 调用的包装器 (yylex)
int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, ParserState* state);


/* --- ASI 引擎 C 代码 (来自文档 5.3 节) --- */



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
#line 44 "src/parser.y"
{
    char *str_val;
    struct ASTNode *node;
    NodeList *list;
}
/* Line 193 of yacc.c.  */
#line 307 "build/parser.tab.c"
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


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 332 "build/parser.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  138
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1031

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNRULES -- Number of states.  */
#define YYNSTATES  311

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    47,    49,    51,    54,    57,    60,    63,
      65,    69,    71,    75,    81,    89,    92,    93,    95,    96,
     101,   106,   108,   110,   112,   118,   128,   129,   131,   133,
     141,   144,   147,   155,   159,   163,   168,   174,   177,   178,
     183,   184,   187,   192,   196,   197,   200,   201,   203,   205,
     209,   213,   218,   222,   228,   232,   233,   236,   240,   245,
     247,   251,   253,   255,   259,   263,   267,   269,   275,   277,
     281,   283,   287,   289,   293,   295,   299,   301,   305,   307,
     311,   315,   319,   323,   325,   329,   333,   337,   341,   345,
     349,   351,   355,   359,   363,   365,   369,   373,   375,   379,
     383,   387,   389,   392,   395,   398,   401,   404,   407,   410,
     413,   416,   418,   421,   424,   426,   428,   430,   433,   436,
     440,   442,   447,   451,   454,   458,   460,   464,   466,   468,
     470,   472,   474,   476,   478,   480,   484,   486,   488,   490,
     492,   495,   499,   501,   505,   509,   511,   514,   518,   520,
     524,   530,   534,   536
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,    94,    -1,    -1,    95,    -1,    96,    -1,
      95,    96,    -1,    98,    -1,   100,    -1,   104,    -1,   107,
      -1,   105,    -1,   109,    -1,   110,    -1,   115,    -1,   116,
      -1,   117,    -1,   118,    -1,   121,    -1,   129,    -1,    97,
      -1,    99,    -1,     6,    94,     7,    -1,    13,    -1,    90,
      -1,   101,    99,    -1,    83,   102,    -1,    54,   102,    -1,
      78,   102,    -1,   103,    -1,   102,    14,   103,    -1,     3,
      -1,     3,    43,   134,    -1,    66,     8,   133,     9,    96,
      -1,    66,     8,   133,     9,    96,    60,    96,    -1,   133,
      99,    -1,    -1,   133,    -1,    -1,    71,   108,   106,    99,
      -1,    65,     3,   152,    98,    -1,   111,    -1,   112,    -1,
     114,    -1,    80,     8,   133,     9,    96,    -1,    64,     8,
     113,    13,   106,    13,   106,     9,    96,    -1,    -1,   101,
      -1,   133,    -1,    59,    96,    80,     8,   133,     9,    99,
      -1,    50,    99,    -1,    55,    99,    -1,    73,     8,   133,
       9,     6,   123,     7,    -1,    76,    98,   119,    -1,    76,
      98,   120,    -1,    76,    98,   119,   120,    -1,    52,     8,
       3,     9,    98,    -1,    63,    98,    -1,    -1,    75,   122,
     133,    99,    -1,    -1,   123,   124,    -1,    51,   133,    42,
     125,    -1,    57,    42,   125,    -1,    -1,   125,    96,    -1,
      -1,   127,    -1,     3,    -1,   127,    14,     3,    -1,    65,
     152,    98,    -1,    65,     3,   152,    98,    -1,    53,     3,
     130,    -1,    53,     3,    62,   134,   130,    -1,     6,   131,
       7,    -1,    -1,   131,   132,    -1,   159,   152,    98,    -1,
      84,   159,   152,    98,    -1,   134,    -1,   133,    14,   134,
      -1,   135,    -1,   162,    -1,   148,    43,   134,    -1,   148,
      44,   134,    -1,   148,    45,   134,    -1,   136,    -1,   136,
      41,   134,    42,   134,    -1,   137,    -1,   136,    39,   137,
      -1,   138,    -1,   137,    38,   138,    -1,   139,    -1,   138,
      34,   139,    -1,   140,    -1,   139,    35,   140,    -1,   141,
      -1,   140,    33,   141,    -1,   142,    -1,   141,    19,   142,
      -1,   141,    20,   142,    -1,   141,    21,   142,    -1,   141,
      22,   142,    -1,   143,    -1,   142,    15,   143,    -1,   142,
      16,   143,    -1,   142,    17,   143,    -1,   142,    18,   143,
      -1,   142,    68,   143,    -1,   142,    69,   143,    -1,   144,
      -1,   143,    30,   144,    -1,   143,    31,   144,    -1,   143,
      32,   144,    -1,   145,    -1,   144,    23,   145,    -1,   144,
      24,   145,    -1,   146,    -1,   145,    25,   146,    -1,   145,
      26,   146,    -1,   145,    27,   146,    -1,   147,    -1,    58,
     146,    -1,    79,   146,    -1,    77,   146,    -1,    28,   146,
      -1,    29,   146,    -1,    23,   146,    -1,    24,   146,    -1,
      37,   146,    -1,    36,   146,    -1,   148,    -1,   148,    28,
      -1,   148,    29,    -1,   149,    -1,   150,    -1,   151,    -1,
      70,   149,    -1,   151,   152,    -1,    70,   149,   152,    -1,
     155,    -1,   151,    10,   133,    11,    -1,   151,    12,     3,
      -1,     8,     9,    -1,     8,   153,     9,    -1,   134,    -1,
     153,    14,   134,    -1,     3,    -1,     5,    -1,     4,    -1,
      74,    -1,   154,    -1,    87,    -1,    88,    -1,    89,    -1,
       8,   133,     9,    -1,   156,    -1,   160,    -1,   128,    -1,
      72,    -1,     6,     7,    -1,     6,   157,     7,    -1,   158,
      -1,   157,    14,   158,    -1,   159,    42,   134,    -1,   154,
      -1,    10,    11,    -1,    10,   161,    11,    -1,   134,    -1,
     161,    14,   134,    -1,     8,   126,     9,    48,   163,    -1,
       3,    48,   163,    -1,    98,    -1,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   179,   180,   184,   189,   196,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   230,   235,   243,   244,   247,   251,   253,   255,   259,
     264,   271,   273,   277,   279,   283,   289,   290,   294,   294,
     301,   305,   307,   309,   313,   317,   323,   324,   326,   330,
     334,   338,   342,   346,   348,   350,   354,   358,   362,   362,
     370,   371,   378,   380,   385,   386,   398,   399,   403,   408,
     415,   417,   421,   423,   427,   432,   433,   440,   445,   453,
     455,   459,   461,   463,   465,   467,   472,   474,   478,   480,
     484,   486,   490,   492,   496,   498,   502,   504,   508,   510,
     512,   514,   516,   520,   522,   524,   526,   528,   530,   532,
     536,   538,   540,   542,   546,   548,   550,   554,   556,   558,
     560,   564,   566,   568,   570,   572,   574,   576,   578,   580,
     582,   586,   588,   590,   594,   596,   600,   602,   606,   608,
     612,   614,   616,   620,   622,   626,   631,   639,   641,   643,
     647,   649,   651,   653,   655,   657,   659,   661,   663,   665,
     669,   671,   675,   680,   687,   691,   695,   697,   701,   706,
     714,   720,   729,   731
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
  "FALSE_LITERAL", "NULL_LITERAL", "TOK_VIRTUAL_SEMICOLON", "UPOSTFIX",
  "$accept", "Script", "statement_list_opt", "statement_list", "statement",
  "empty_statement", "block_statement", "StatementTerminator",
  "variable_statement", "variable_declaration_list",
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
  "literal_or_identifier", "primary_expression", "object_expression",
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
     345,   346
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    94,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    98,    99,    99,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   108,   107,
     109,   110,   110,   110,   111,   112,   113,   113,   113,   114,
     115,   116,   117,   118,   118,   118,   119,   120,   122,   121,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   143,   144,   144,   144,   145,   145,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   147,   147,   148,   148,   149,   149,   150,   150,
     151,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   159,   160,   160,   161,   161,
     162,   162,   163,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     2,     2,     2,     1,
       3,     1,     3,     5,     7,     2,     0,     1,     0,     4,
       4,     1,     1,     1,     5,     9,     0,     1,     1,     7,
       2,     2,     7,     3,     3,     4,     5,     2,     0,     4,
       0,     2,     4,     3,     0,     2,     0,     1,     1,     3,
       3,     4,     3,     5,     3,     0,     2,     3,     4,     1,
       3,     1,     1,     3,     3,     3,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     1,     1,     1,     2,     2,     3,
       1,     4,     3,     2,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     3,     1,     3,     3,     1,     2,     3,     1,     3,
       5,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   147,   149,   148,     0,    66,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,   159,     0,   150,    58,     0,
       0,     0,     0,     0,     0,   152,   153,   154,    24,     0,
       2,     4,     5,    20,     7,    21,     8,     0,     9,    11,
      10,    12,    13,    41,    42,    43,    14,    15,    16,    17,
      18,   158,    19,     0,    79,    81,    86,    88,    90,    92,
      94,    96,    98,   103,   110,   114,   117,   121,   131,   134,
     135,   136,   151,   140,   156,   157,    82,     0,   160,     0,
     151,     0,   162,     0,   147,     0,     0,     0,    67,     0,
     166,   168,     0,   147,     0,   127,   131,   128,   125,   126,
     130,   129,    50,     0,    31,    27,    29,    51,   122,     0,
      46,     0,     0,     0,     0,     0,   137,   136,    36,     0,
       0,     3,     0,   124,    28,   123,     0,    26,     1,     6,
      25,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,   138,   172,   173,   171,    22,   161,
       0,     0,   165,     0,     0,     0,   155,   167,     0,    75,
       0,    72,     0,     0,     0,    47,     0,    48,     0,   143,
     145,     0,    70,     0,   137,   139,     0,    37,     0,     0,
       0,     0,    53,    54,     0,    80,    89,     0,    91,    93,
      95,    97,    99,   100,   101,   102,   104,   105,   106,   107,
     108,   109,   111,   112,   113,   115,   116,   118,   119,   120,
      83,    84,    85,     0,   142,   163,   164,     0,     0,    69,
     169,     0,     0,    32,    30,     0,    36,    40,   144,     0,
       0,    39,     0,    59,     0,    57,    55,     0,     0,   141,
      71,   170,    74,     0,    76,     0,    73,     0,     0,   146,
      33,    60,     0,    44,    87,     0,     0,     0,    36,     0,
       0,     0,     0,    77,    49,     0,    34,    52,     0,     0,
      61,    56,    78,     0,     0,    64,    45,    64,    63,    62,
      65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    39,    89,    41,    42,    43,    44,    45,    46,    47,
     115,   116,    48,    49,   206,    50,   128,    51,    52,    53,
      54,   196,    55,    56,    57,    58,    59,   212,   213,    60,
     130,   290,   300,   308,    97,    98,    61,    62,   191,   251,
     274,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
     123,   201,    82,    83,    84,    91,    92,    93,    85,   102,
      86,   177
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -235
static const yytype_int16 yypact[] =
{
     418,    -3,  -235,  -235,   330,   671,   545,  -235,   758,   758,
     758,   758,   758,   758,     1,    49,    86,     1,   758,   418,
      87,    29,   125,    65,  -235,  -235,   156,  -235,  -235,   115,
     758,    86,   758,   158,    86,  -235,  -235,  -235,  -235,   168,
    -235,   418,  -235,  -235,  -235,  -235,  -235,     1,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,     4,  -235,  -235,    40,   135,   146,   147,
     153,   107,     9,   119,    36,   130,  -235,  -235,    13,  -235,
    -235,   124,  -235,  -235,  -235,  -235,  -235,   797,  -235,   180,
     149,    24,  -235,   151,     7,   113,    31,   186,   175,    35,
    -235,  -235,    22,  -235,   884,  -235,    78,  -235,  -235,  -235,
    -235,  -235,  -235,    14,   157,   185,  -235,  -235,  -235,   121,
     506,   195,   632,   115,   884,    65,   195,   128,   884,   884,
     884,   418,   -23,  -235,   185,  -235,   884,   185,  -235,  -235,
    -235,   884,  -235,   758,   884,   758,   758,   758,   758,   758,
     758,   758,   758,   758,   758,   758,   758,   758,   758,   758,
     758,   758,   758,   758,   758,   758,   758,  -235,  -235,   884,
     884,   884,   884,   201,  -235,  -235,   167,  -235,  -235,  -235,
     155,   884,  -235,   195,   159,   202,  -235,  -235,   884,  -235,
     884,  -235,   884,    86,   200,  -235,   196,   197,   115,  -235,
    -235,    73,  -235,    74,  -235,  -235,     1,   197,    76,     4,
     205,   115,   152,  -235,    99,  -235,   135,   172,   146,   147,
     153,   107,     9,     9,     9,     9,   119,   119,   119,   119,
     119,   119,    36,    36,    36,   130,   130,  -235,  -235,  -235,
    -235,  -235,  -235,    32,  -235,  -235,  -235,   115,   797,  -235,
    -235,     8,   204,  -235,  -235,   884,   884,   962,  -235,   884,
     418,  -235,   210,  -235,   214,  -235,  -235,   418,   884,  -235,
    -235,  -235,  -235,   155,  -235,   195,  -235,   100,   211,  -235,
     163,  -235,   216,  -235,  -235,   195,   115,     1,   884,   418,
      23,   115,   115,  -235,  -235,   217,  -235,  -235,   884,   187,
    -235,  -235,  -235,   418,     5,  -235,  -235,  -235,   418,   418,
    -235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,   227,  -235,   -18,  -235,   -26,   -12,  -235,   108,
      62,    37,  -235,  -235,  -234,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,    19,  -235,
    -235,  -235,  -235,   -75,  -235,  -235,  -235,  -235,   -19,  -235,
    -235,    -5,     0,  -235,   -83,    91,    90,    92,    89,    93,
      -4,   -53,     2,   -20,    54,  -235,   166,   -14,  -235,   -13,
     -73,  -235,     3,  -235,  -235,  -235,    57,  -223,  -235,  -235,
    -235,    -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -166
static const yytype_int16 yytable[] =
{
      99,   119,   112,   132,   176,   117,   101,    90,   174,   126,
     127,   103,     2,     3,     7,   272,   -68,     7,   141,   141,
     189,   -68,   278,   139,   153,   154,   155,   156,   275,   210,
     297,   179,   121,   187,   183,   140,   188,   122,   180,   122,
     211,   167,   168,   269,   186,    87,   141,   307,   198,   141,
     285,   142,   113,   205,   295,    87,   169,   170,   171,   162,
     163,   175,   105,   107,   108,   109,   110,   111,   103,     2,
       3,    95,   118,   104,   298,     6,   190,   157,   158,   143,
     299,   144,   258,   260,   133,   262,   135,   259,   141,   114,
     141,    38,   273,   134,    38,   120,   137,   202,   182,    99,
     226,   227,   228,   229,   230,   231,   167,   168,   267,   287,
     247,   204,   127,   141,   141,   197,   103,     2,     3,   203,
      88,   131,   200,   207,   208,   209,   149,   150,   151,   152,
      96,   214,   122,   124,   172,   125,   173,    25,   172,    27,
     173,   215,   235,   236,   217,   222,   223,   224,   225,   159,
     160,   161,    35,    36,    37,   164,   165,   166,   103,     2,
       3,   232,   233,   234,   129,   176,   136,   243,   138,   240,
     241,   242,   257,   145,   106,   106,   106,   106,   106,   106,
     146,   246,   147,   182,   106,   265,   148,   178,   250,   185,
     252,  -165,   253,   181,   261,   184,   106,   263,   106,   193,
     192,   194,   286,   122,   244,   249,   143,   248,   255,   256,
     189,   141,   292,   264,   268,   211,   281,   282,   237,   238,
     239,   270,   175,   289,   288,   291,   303,    40,   195,   305,
     254,   266,   309,   276,   216,   218,   220,   245,   219,   271,
       0,   221,   280,     0,     0,     0,     0,     0,     0,   283,
     277,   207,     0,   106,   182,     0,     0,     0,     0,   279,
     293,     0,     0,     0,     0,   301,   302,     0,   284,     0,
       0,   296,     0,     0,     0,   294,   182,     0,     0,     0,
       0,     0,     0,   207,     0,   306,     0,     0,     0,     0,
     310,   310,     0,   304,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,     1,     2,     3,     4,    88,     5,     0,
       6,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,     0,     0,     0,    10,    11,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,    15,    16,    17,     0,     0,    18,    19,
       0,     0,     0,     0,    20,    21,    22,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     0,     0,    34,   106,     0,     0,    35,    36,    37,
      38,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,     0,    10,    11,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,    15,    16,    17,     0,     0,    18,    19,     0,     0,
       0,     0,    20,    21,    22,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     0,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     1,
       2,     3,    95,     0,     5,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       9,     0,     0,     0,    10,    11,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,     1,     2,
       3,    95,     0,     5,     0,     6,   100,     0,     0,     0,
      16,     0,     0,     0,    18,     0,     0,     0,     8,     9,
       0,    96,     0,    10,    11,     0,    23,     0,    25,     0,
      27,    12,    13,    30,    31,    32,     0,     0,     0,    34,
       0,     0,     0,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
      96,     0,     0,     0,     0,    23,     0,    25,     0,    27,
       0,     0,    30,     0,    32,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,     1,     2,     3,    95,     0,
       5,   199,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    94,     2,     3,    95,     0,     5,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     8,     9,     0,    96,     0,    10,
      11,     0,    23,     0,    25,     0,    27,    12,    13,    30,
       0,    32,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,    23,     0,    25,     0,    27,     0,     0,    30,     0,
      32,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,   103,     2,     3,    95,     0,   104,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,     0,    10,    11,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
     103,     2,     3,     4,     0,   104,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       8,     9,     0,    96,     0,    10,    11,     0,    23,     0,
      25,     0,    27,    12,    13,    30,     0,    32,     0,     0,
       0,     0,     0,     0,     0,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,    23,     0,    25,
       0,    27,     0,     0,    30,     0,    32,     0,     0,     0,
       0,     0,     0,     0,    35,    36,    37,     1,     2,     3,
      95,     0,     5,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,     0,
       0,     0,    10,    11,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    96,
       0,     0,     0,     0,    23,     0,    25,     0,    27,     0,
       0,    30,     0,    32,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -71,   -71,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,   -71,     0,   -71,     0,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71
};

static const yytype_int16 yycheck[] =
{
       5,    19,    14,    29,    87,    17,     6,     4,    81,    23,
      23,     3,     4,     5,    13,     7,     9,    13,    14,    14,
       6,    14,   256,    41,    15,    16,    17,    18,   251,    52,
       7,     7,     3,    11,     3,    47,    14,     8,    14,     8,
      63,    28,    29,    11,     9,    48,    14,    42,   121,    14,
     273,    63,     3,   126,   288,    48,    43,    44,    45,    23,
      24,    87,     8,     9,    10,    11,    12,    13,     3,     4,
       5,     6,    18,     8,    51,    10,    62,    68,    69,    39,
      57,    41,     9,     9,    30,     9,    32,    14,    14,     3,
      14,    90,    84,    31,    90,     8,    34,   123,    95,   104,
     153,   154,   155,   156,   157,   158,    28,    29,     9,     9,
     183,   125,   125,    14,    14,   120,     3,     4,     5,   124,
       7,     6,   122,   128,   129,   130,    19,    20,    21,    22,
      65,   136,     8,     8,    10,    70,    12,    72,    10,    74,
      12,   141,   162,   163,   144,   149,   150,   151,   152,    30,
      31,    32,    87,    88,    89,    25,    26,    27,     3,     4,
       5,   159,   160,   161,     8,   248,     8,   172,     0,   169,
     170,   171,   198,    38,     8,     9,    10,    11,    12,    13,
      34,   181,    35,   180,    18,   211,    33,     7,   188,    14,
     190,    42,   192,    42,   206,     9,    30,   209,    32,    14,
      43,    80,   275,     8,     3,     3,    39,    48,     8,    13,
       6,    14,   285,     8,    42,    63,     6,     3,   164,   165,
     166,   247,   248,    60,    13,     9,     9,     0,   120,    42,
     193,   212,   307,   252,   143,   145,   147,   180,   146,   248,
      -1,   148,   260,    -1,    -1,    -1,    -1,    -1,    -1,   267,
     255,   256,    -1,    87,   251,    -1,    -1,    -1,    -1,   259,
     286,    -1,    -1,    -1,    -1,   291,   292,    -1,   268,    -1,
      -1,   289,    -1,    -1,    -1,   287,   273,    -1,    -1,    -1,
      -1,    -1,    -1,   288,    -1,   303,    -1,    -1,    -1,    -1,
     308,   309,    -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    54,    55,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,   248,    -1,    -1,    87,    88,    89,
      90,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    54,    55,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    23,    24,
      -1,    65,    -1,    28,    29,    -1,    70,    -1,    72,    -1,
      74,    36,    37,    77,    78,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    23,    24,    -1,    65,    -1,    28,
      29,    -1,    70,    -1,    72,    -1,    74,    36,    37,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      23,    24,    -1,    65,    -1,    28,    29,    -1,    70,    -1,
      72,    -1,    74,    36,    37,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    27,
      -1,    -1,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    39,    -1,    41,    -1,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    13,    23,    24,
      28,    29,    36,    37,    50,    53,    54,    55,    58,    59,
      64,    65,    66,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    83,    87,    88,    89,    90,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   104,   105,
     107,   109,   110,   111,   112,   114,   115,   116,   117,   118,
     121,   128,   129,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   154,   155,   156,   160,   162,    48,     7,    94,
     154,   157,   158,   159,     3,     6,    65,   126,   127,   133,
      11,   134,   161,     3,     8,   146,   148,   146,   146,   146,
     146,   146,    99,     3,     3,   102,   103,    99,   146,    96,
       8,     3,     8,   152,     8,    70,   149,   151,   108,     8,
     122,     6,    98,   146,   102,   146,     8,   102,     0,    96,
      99,    14,    99,    39,    41,    38,    34,    35,    33,    19,
      20,    21,    22,    15,    16,    17,    18,    68,    69,    30,
      31,    32,    23,    24,    25,    26,    27,    28,    29,    43,
      44,    45,    10,    12,   152,    98,   136,   163,     7,     7,
      14,    42,   154,     3,     9,    14,     9,    11,    14,     6,
      62,   130,    43,    14,    80,   101,   113,   133,   152,     9,
     134,   153,    98,   133,   149,   152,   106,   133,   133,   133,
      52,    63,   119,   120,   133,   134,   137,   134,   138,   139,
     140,   141,   142,   142,   142,   142,   143,   143,   143,   143,
     143,   143,   144,   144,   144,   145,   145,   146,   146,   146,
     134,   134,   134,   133,     3,   158,   134,   152,    48,     3,
     134,   131,   134,   134,   103,     8,    13,    98,     9,    14,
       9,    99,     9,    99,     8,    98,   120,     9,    42,    11,
      98,   163,     7,    84,   132,   159,   130,   133,   106,   134,
      96,     6,     3,    96,   134,   159,   152,     9,    13,    60,
     123,     9,   152,    98,    99,   106,    96,     7,    51,    57,
     124,    98,    98,     9,   133,    42,    96,    42,   125,   125,
      96
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
      yyerror (&yylloc, state, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, state)
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
		  Type, Value, Location, state); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserState* state)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParserState* state;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (state);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserState* state)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParserState* state;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, state);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserState* state)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, state)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    ParserState* state;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , state);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, state); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserState* state)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, state)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    ParserState* state;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (state);

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
int yyparse (ParserState* state);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






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
yyparse (ParserState* state)
#else
int
yyparse (state)
    ParserState* state;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

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

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

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
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 175 "src/parser.y"
    { ast_root = create_script_node((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 179 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 4:
#line 181 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 5:
#line 185 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        if ((yyvsp[(1) - (1)].node) != NULL) nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); /* <-- 修复: 检查 NULL */
    ;}
    break;

  case 6:
#line 190 "src/parser.y"
    { 
        if ((yyvsp[(2) - (2)].node) != NULL) nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); /* <-- 修复: 检查 NULL */
        (yyval.list) = (yyvsp[(1) - (2)].list); 
    ;}
    break;

  case 7:
#line 197 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 199 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 201 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 203 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 205 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 207 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:
#line 209 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 211 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:
#line 213 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:
#line 215 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 217 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 219 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 221 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 223 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 21:
#line 231 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 22:
#line 236 "src/parser.y"
    { (yyval.node) = create_block_statement((yyvsp[(2) - (3)].list)); ;}
    break;

  case 25:
#line 248 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 26:
#line 252 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_LET, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 27:
#line 254 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_CONST, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 28:
#line 256 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_VAR, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 29:
#line 260 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 30:
#line 265 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 31:
#line 272 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (1)].str_val)), NULL); ;}
    break;

  case 32:
#line 274 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (3)].str_val)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 33:
#line 278 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL); ;}
    break;

  case 34:
#line 280 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 35:
#line 284 "src/parser.y"
    { (yyval.node) = create_expression_statement((yyvsp[(1) - (2)].node)); ;}
    break;

  case 36:
#line 289 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 37:
#line 291 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 38:
#line 294 "src/parser.y"
    { /* 'restrict_new_line' 标志现在由 ASI 包装器在 'last_token' 中处理 */ ;}
    break;

  case 39:
#line 296 "src/parser.y"
    { 
        (yyval.node) = create_return_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 40:
#line 302 "src/parser.y"
    { (yyval.node) = create_function_declaration(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 41:
#line 306 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 42:
#line 308 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 43:
#line 310 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 44:
#line 314 "src/parser.y"
    { (yyval.node) = create_while_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 45:
#line 318 "src/parser.y"
    { (yyval.node) = create_for_statement((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node)); ;}
    break;

  case 46:
#line 323 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 47:
#line 325 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 48:
#line 327 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:
#line 331 "src/parser.y"
    { (yyval.node) = create_do_while_statement((yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node)); ;}
    break;

  case 50:
#line 335 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 51:
#line 339 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 52:
#line 343 "src/parser.y"
    { (yyval.node) = create_switch_statement((yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].list)); ;}
    break;

  case 53:
#line 347 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL); ;}
    break;

  case 54:
#line 349 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 55:
#line 351 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 56:
#line 355 "src/parser.y"
    { (yyval.node) = create_catch_clause(create_identifier_node((yyvsp[(3) - (5)].str_val)), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 57:
#line 359 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 58:
#line 362 "src/parser.y"
    { /* 'restrict_new_line' 标志现在由 ASI 包装器在 'last_token' 中处理 */ ;}
    break;

  case 59:
#line 364 "src/parser.y"
    {
        (yyval.node) = create_throw_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 60:
#line 370 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 61:
#line 372 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 62:
#line 379 "src/parser.y"
    { (yyval.node) = create_switch_case((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list)); ;}
    break;

  case 63:
#line 381 "src/parser.y"
    { (yyval.node) = create_switch_case(NULL, (yyvsp[(3) - (3)].list)); ;}
    break;

  case 64:
#line 385 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 65:
#line 387 "src/parser.y"
    {
        if ((yyvsp[(2) - (2)].node) != NULL) nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); /* <-- 修复: 检查 NULL */
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 66:
#line 398 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 67:
#line 400 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 68:
#line 404 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), create_identifier_node((yyvsp[(1) - (1)].str_val)));
    ;}
    break;

  case 69:
#line 409 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), create_identifier_node((yyvsp[(3) - (3)].str_val)));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 70:
#line 416 "src/parser.y"
    { (yyval.node) = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 71:
#line 418 "src/parser.y"
    { (yyval.node) = create_function_expression(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 72:
#line 422 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (3)].str_val)), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 73:
#line 424 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (5)].str_val)), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 74:
#line 428 "src/parser.y"
    { (yyval.node) = create_class_body((yyvsp[(2) - (3)].list)); ;}
    break;

  case 75:
#line 432 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 76:
#line 434 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 77:
#line 441 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.node) = create_method_definition((yyvsp[(1) - (3)].node), func_value, false); 
    ;}
    break;

  case 78:
#line 446 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (4)].node), func_value, true); 
    ;}
    break;

  case 79:
#line 454 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 80:
#line 456 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_COMMA, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:
#line 460 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 82:
#line 462 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 83:
#line 464 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_ASSIGN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 84:
#line 466 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 85:
#line 468 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:
#line 473 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 87:
#line 475 "src/parser.y"
    { (yyval.node) = create_conditional_expression((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 88:
#line 479 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 89:
#line 481 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:
#line 485 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 91:
#line 487 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:
#line 491 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 93:
#line 493 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:
#line 497 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 95:
#line 499 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:
#line 503 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 97:
#line 505 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:
#line 509 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 99:
#line 511 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 100:
#line 513 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 101:
#line 515 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 102:
#line 517 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 103:
#line 521 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 104:
#line 523 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 105:
#line 525 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 106:
#line 527 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 107:
#line 529 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 108:
#line 531 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_IN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 109:
#line 533 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_INSTANCEOF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 110:
#line 537 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 111:
#line 539 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 112:
#line 541 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_RSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 113:
#line 543 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_URSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 114:
#line 547 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 115:
#line 549 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 116:
#line 551 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 117:
#line 555 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:
#line 557 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 119:
#line 559 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 120:
#line 561 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_POWER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 121:
#line 565 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 122:
#line 567 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DELETE, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 123:
#line 569 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 124:
#line 571 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_TYPEOF, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 125:
#line 573 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_INC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 126:
#line 575 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DEC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 127:
#line 577 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_PLUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 128:
#line 579 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_MINUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 129:
#line 581 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_BIT_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 130:
#line 583 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 131:
#line 587 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 132:
#line 589 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_INC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 133:
#line 591 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_DEC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 134:
#line 595 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 135:
#line 597 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 136:
#line 601 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 137:
#line 603 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (2)].node), NULL); ;}
    break;

  case 138:
#line 607 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 139:
#line 609 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].list)); ;}
    break;

  case 140:
#line 613 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 141:
#line 615 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 142:
#line 617 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node((yyvsp[(3) - (3)].str_val)), false); ;}
    break;

  case 143:
#line 621 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 144:
#line 623 "src/parser.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 145:
#line 627 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));  
    ;}
    break;

  case 146:
#line 632 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));  
        (yyval.list) = (yyvsp[(1) - (3)].list);                  
    ;}
    break;

  case 147:
#line 640 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 148:
#line 642 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 149:
#line 644 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 150:
#line 648 "src/parser.y"
    { (yyval.node) = create_this_node(); ;}
    break;

  case 151:
#line 650 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 152:
#line 652 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_TRUE, strdup("true")); ;}
    break;

  case 153:
#line 654 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_FALSE, strdup("false")); ;}
    break;

  case 154:
#line 656 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NULL, strdup("null")); ;}
    break;

  case 155:
#line 658 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 156:
#line 660 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 157:
#line 662 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 158:
#line 664 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 159:
#line 666 "src/parser.y"
    { (yyval.node) = create_super_node(); ;}
    break;

  case 160:
#line 670 "src/parser.y"
    { (yyval.node) = create_object_expression(nodelist_create()); ;}
    break;

  case 161:
#line 672 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 162:
#line 676 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 163:
#line 681 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 164:
#line 688 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 165:
#line 692 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 166:
#line 696 "src/parser.y"
    { (yyval.node) = create_array_expression(nodelist_create()); ;}
    break;

  case 167:
#line 698 "src/parser.y"
    { (yyval.node) = create_array_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 168:
#line 702 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 169:
#line 707 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 170:
#line 715 "src/parser.y"
    {
        bool is_expression_body = ((yyvsp[(5) - (5)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression((yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].node), is_expression_body);
    ;}
    break;

  case 171:
#line 721 "src/parser.y"
    {
        NodeList *params = nodelist_create();
        nodelist_append(params, create_identifier_node((yyvsp[(1) - (3)].str_val)));
        bool is_expression_body = ((yyvsp[(3) - (3)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression(params, (yyvsp[(3) - (3)].node), is_expression_body);
    ;}
    break;

  case 172:
#line 730 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 173:
#line 732 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2941 "build/parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
      yyerror (&yylloc, state, YY_("syntax error"));
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
	    yyerror (&yylloc, state, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, state, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc, state);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, state, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, state);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, state);
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


#line 734 "src/parser.y"

/* 辅助函数：是否为受限关键字？ */
static bool is_restricted_keyword(int token) {
    switch (token) {
        case RETURN:
        case BREAK:
        case CONTINUE:
        case THROW:
        case YIELD: 
        case AWAIT: 
            return true;
        default:
            return false;
    }
}

/* 辅助函数：此标记是否会“冒犯”一个表达式？ */
static bool is_offending_token(int token) {
    // 白名单策略：只有这些标记可以合法地跟在一个表达式后面
    switch (token) {
        case '(':
        case '[':
        case '.':
        case '+':
        case '-':
        case '*':
        case '%':
        case '/':
        case '?':
        case ':':
        case ',':
        case POWER:
        case LT:
        case GT:
        case LE:
        case GE:
        case EQ:
        case NE:
        case STRICT_EQ:
        case STRICT_NE:
        case LOGICAL_AND:
        case LOGICAL_OR:
        case NULLISH_COALESCING:
        case LSHIFT:
        case RSHIFT:
        case URSHIFT:
        case BIT_AND:
        case BIT_OR:
        case BIT_XOR:
        // 修复: = 和 ...= 赋值操作符
        // 它们是二元操作符, 不应该触发 ASI
        case ASSIGN:
        case ADD_ASSIGN:
        case SUB_ASSIGN:
        case MUL_ASSIGN:
        case POWER_ASSIGN:
            return false; // 不是冒犯性标记

        // (其他所有标记都是“冒犯性”的)
        default:
            return true;
    }
}

/* yylex 包装器 (ASI 引擎) */
int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, ParserState* state) {
    
    /* * --- 修复：更新位置跟踪 (Bison %locations) ---
     * 在我们做任何事情之前，更新 yyllocp。
     * 这是一个基本的实现；更复杂的实现会跟踪列。
     */
    yyllocp->first_line = state->line;
    yyllocp->last_line = state->line;
    if (state->has_buffered_token) {
        state->has_buffered_token = false;
        state->last_token = state->buffered_token;
        
        *yylvalp = state->buffered_yylval; // <--- 修复 1: 恢复保存的值
        memset(&state->buffered_yylval, 0, sizeof(YYSTYPE)); // 清空缓冲区
        
        return state->buffered_token;
    }

    // 2. 获取下一个“原始”标记
    int next_token = yylex_internal(yylvalp, state);
    
    /* * 在我们返回之前，再次更新 yyllocp 的 "last_line" 
     * 因为 yylex_internal 可能已经改变了 state->line 
     */
    yyllocp->last_line = state->line;


    // 3. 受限产生式检查
    // (如果上一个 token 是受限的，并且我们看到了换行)
    if (is_restricted_keyword(state->last_token) && state->has_seen_newline) {
        state->buffered_token = next_token;
        state->buffered_yylval = *yylvalp; // <--- 修复 2: 保存 yylval
        state->has_buffered_token = true;
        state->has_seen_newline = false; // “消耗”换行符
        state->last_token = TOK_VIRTUAL_SEMICOLON;
        memset(yylvalp, 0, sizeof(YYSTYPE));
        return TOK_VIRTUAL_SEMICOLON;
    }

    // 4. 通用 ASI 规则 1, 2, 3
    bool asi_rule_1 = state->has_seen_newline && is_offending_token(next_token);
    bool asi_rule_3 = (next_token == 0);      // 0 是 EOF (文件结尾)
    if (asi_rule_1 || asi_rule_3) {
        if (state->last_token == SEMICOLON || 
            state->last_token == TOK_VIRTUAL_SEMICOLON ||
            state->last_token == LBRACE ||
            state->last_token == 0)
        {
            // 不执行 ASI，继续（这将导致下一轮的 next_token 被正常处理）
        }
        else {
            // (我们尚未实现 'for' 循环状态，所以跳过)

            // 插入虚拟分号
            state->buffered_token = next_token;
            state->buffered_yylval = *yylvalp; // <--- 修复 3: 保存 yylval
            state->has_buffered_token = true;
            state->has_seen_newline = false; // “消耗”换行符
            state->last_token = TOK_VIRTUAL_SEMICOLON;

            memset(yylvalp, 0, sizeof(YYSTYPE));
            return TOK_VIRTUAL_SEMICOLON;
        }
    }
    state->has_seen_newline = false; 
    state->last_token = next_token;  
    return next_token;
}
