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
     FROM = 325,
     AS = 326,
     NEW = 327,
     RETURN = 328,
     SUPER = 329,
     SWITCH = 330,
     THIS = 331,
     THROW = 332,
     TRY = 333,
     TYPEOF = 334,
     VAR = 335,
     VOID = 336,
     WHILE = 337,
     WITH = 338,
     YIELD = 339,
     LET = 340,
     STATIC = 341,
     ENUM = 342,
     AWAIT = 343,
     TRUE_LITERAL = 344,
     FALSE_LITERAL = 345,
     NULL_LITERAL = 346,
     TOK_VIRTUAL_SEMICOLON = 347,
     UPOSTFIX = 348
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
#define FROM 325
#define AS 326
#define NEW 327
#define RETURN 328
#define SUPER 329
#define SWITCH 330
#define THIS 331
#define THROW 332
#define TRY 333
#define TYPEOF 334
#define VAR 335
#define VOID 336
#define WHILE 337
#define WITH 338
#define YIELD 339
#define LET 340
#define STATIC 341
#define ENUM 342
#define AWAIT 343
#define TRUE_LITERAL 344
#define FALSE_LITERAL 345
#define NULL_LITERAL 346
#define TOK_VIRTUAL_SEMICOLON 347
#define UPOSTFIX 348




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
#line 311 "build/parser.tab.c"
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
#line 336 "build/parser.tab.c"

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
#define YYFINAL  152
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1058

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNRULES -- Number of states.  */
#define YYNSTATES  362

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    51,    53,    55,    58,    61,
      64,    67,    69,    73,    75,    79,    85,    93,    96,    97,
      99,   100,   105,   110,   112,   114,   116,   122,   132,   133,
     135,   137,   145,   148,   151,   159,   163,   167,   172,   178,
     181,   182,   187,   188,   191,   196,   200,   201,   204,   205,
     207,   209,   213,   214,   216,   221,   225,   231,   235,   239,
     247,   253,   261,   263,   267,   269,   273,   276,   279,   282,
     287,   293,   301,   303,   307,   309,   313,   314,   317,   321,
     326,   328,   332,   334,   336,   340,   344,   348,   350,   356,
     358,   362,   364,   368,   370,   374,   376,   380,   382,   386,
     388,   392,   396,   400,   404,   406,   410,   414,   418,   422,
     426,   430,   432,   436,   440,   444,   446,   450,   454,   456,
     460,   464,   468,   470,   473,   476,   479,   482,   485,   488,
     491,   494,   497,   499,   502,   505,   507,   509,   511,   514,
     517,   521,   523,   528,   532,   535,   539,   541,   545,   547,
     549,   551,   553,   555,   557,   559,   563,   565,   567,   569,
     571,   574,   578,   580,   584,   588,   590,   592,   594,   597,
     601,   603,   607,   613,   617,   619
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    96,    -1,    -1,    97,    -1,    98,    -1,
      97,    98,    -1,   100,    -1,   102,    -1,   106,    -1,   109,
      -1,   107,    -1,   111,    -1,   112,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   123,    -1,   132,    -1,   134,
      -1,   137,    -1,    99,    -1,   101,    -1,     6,    96,     7,
      -1,    13,    -1,    92,    -1,   103,   101,    -1,    85,   104,
      -1,    54,   104,    -1,    80,   104,    -1,   105,    -1,   104,
      14,   105,    -1,     3,    -1,     3,    43,   143,    -1,    66,
       8,   142,     9,    98,    -1,    66,     8,   142,     9,    98,
      60,    98,    -1,   142,   101,    -1,    -1,   142,    -1,    -1,
      73,   110,   108,   101,    -1,    65,     3,   161,   100,    -1,
     113,    -1,   114,    -1,   116,    -1,    82,     8,   142,     9,
      98,    -1,    64,     8,   115,    13,   108,    13,   108,     9,
      98,    -1,    -1,   103,    -1,   142,    -1,    59,    98,    82,
       8,   142,     9,   101,    -1,    50,   101,    -1,    55,   101,
      -1,    75,     8,   142,     9,     6,   125,     7,    -1,    78,
     100,   121,    -1,    78,   100,   122,    -1,    78,   100,   121,
     122,    -1,    52,     8,     3,     9,   100,    -1,    63,   100,
      -1,    -1,    77,   124,   142,   101,    -1,    -1,   125,   126,
      -1,    51,   142,    42,   127,    -1,    57,    42,   127,    -1,
      -1,   127,    98,    -1,    -1,   129,    -1,     3,    -1,   129,
      14,     3,    -1,    -1,     3,    -1,    65,   130,   161,   100,
      -1,    53,     3,   133,    -1,    53,     3,    62,   143,   133,
      -1,     6,   140,     7,    -1,    67,     4,   101,    -1,    67,
       6,   135,     7,    70,     4,   101,    -1,    67,     3,    70,
       4,   101,    -1,    67,    25,    71,     3,    70,     4,   101,
      -1,   136,    -1,   135,    14,   136,    -1,     3,    -1,     3,
      71,     3,    -1,    61,   102,    -1,    61,   111,    -1,    61,
     132,    -1,    61,    57,   142,   101,    -1,    61,     6,   138,
       7,   101,    -1,    61,     6,   138,     7,    70,     4,   101,
      -1,   139,    -1,   138,    14,   139,    -1,     3,    -1,     3,
      71,     3,    -1,    -1,   140,   141,    -1,   167,   161,   100,
      -1,    86,   167,   161,   100,    -1,   143,    -1,   142,    14,
     143,    -1,   144,    -1,   170,    -1,   157,    43,   143,    -1,
     157,    44,   143,    -1,   157,    45,   143,    -1,   145,    -1,
     145,    41,   143,    42,   143,    -1,   146,    -1,   145,    39,
     146,    -1,   147,    -1,   146,    38,   147,    -1,   148,    -1,
     147,    34,   148,    -1,   149,    -1,   148,    35,   149,    -1,
     150,    -1,   149,    33,   150,    -1,   151,    -1,   150,    19,
     151,    -1,   150,    20,   151,    -1,   150,    21,   151,    -1,
     150,    22,   151,    -1,   152,    -1,   151,    15,   152,    -1,
     151,    16,   152,    -1,   151,    17,   152,    -1,   151,    18,
     152,    -1,   151,    68,   152,    -1,   151,    69,   152,    -1,
     153,    -1,   152,    30,   153,    -1,   152,    31,   153,    -1,
     152,    32,   153,    -1,   154,    -1,   153,    23,   154,    -1,
     153,    24,   154,    -1,   155,    -1,   154,    25,   155,    -1,
     154,    26,   155,    -1,   154,    27,   155,    -1,   156,    -1,
      58,   155,    -1,    81,   155,    -1,    79,   155,    -1,    28,
     155,    -1,    29,   155,    -1,    23,   155,    -1,    24,   155,
      -1,    37,   155,    -1,    36,   155,    -1,   157,    -1,   157,
      28,    -1,   157,    29,    -1,   158,    -1,   159,    -1,   160,
      -1,    72,   158,    -1,   160,   161,    -1,    72,   158,   161,
      -1,   163,    -1,   160,    10,   142,    11,    -1,   160,    12,
       3,    -1,     8,     9,    -1,     8,   162,     9,    -1,   143,
      -1,   162,    14,   143,    -1,    76,    -1,     3,    -1,     5,
      -1,     4,    -1,    89,    -1,    90,    -1,    91,    -1,     8,
     142,     9,    -1,   164,    -1,   168,    -1,   131,    -1,    74,
      -1,     6,     7,    -1,     6,   165,     7,    -1,   166,    -1,
     165,    14,   166,    -1,   167,    42,   143,    -1,     3,    -1,
       5,    -1,     4,    -1,    10,    11,    -1,    10,   169,    11,
      -1,   143,    -1,   169,    14,   143,    -1,     8,   128,     9,
      48,   171,    -1,     3,    48,   171,    -1,   100,    -1,   145,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   181,   181,   186,   187,   191,   196,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   241,   246,   254,   255,   258,   262,   264,
     266,   270,   275,   282,   284,   288,   290,   294,   300,   301,
     305,   305,   312,   316,   318,   320,   324,   328,   334,   335,
     337,   341,   345,   349,   353,   357,   359,   361,   365,   369,
     373,   373,   381,   382,   389,   391,   396,   397,   405,   406,
     410,   415,   422,   423,   426,   430,   432,   436,   441,   445,
     449,   460,   471,   476,   485,   495,   503,   507,   511,   515,
     521,   525,   530,   535,   544,   551,   559,   560,   567,   572,
     580,   582,   586,   588,   590,   592,   594,   599,   601,   605,
     607,   611,   613,   617,   619,   623,   625,   629,   631,   635,
     637,   639,   641,   643,   647,   649,   651,   653,   655,   657,
     659,   663,   665,   667,   669,   673,   675,   677,   681,   683,
     685,   687,   691,   693,   695,   697,   699,   701,   703,   705,
     707,   709,   713,   715,   717,   721,   723,   727,   729,   733,
     735,   739,   741,   743,   747,   749,   753,   758,   765,   767,
     769,   771,   773,   775,   777,   779,   781,   783,   785,   787,
     791,   793,   797,   802,   809,   813,   815,   817,   821,   823,
     827,   832,   840,   846,   855,   857
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
  "FUNCTION", "IF", "IMPORT", "IN", "INSTANCEOF", "FROM", "AS", "NEW",
  "RETURN", "SUPER", "SWITCH", "THIS", "THROW", "TRY", "TYPEOF", "VAR",
  "VOID", "WHILE", "WITH", "YIELD", "LET", "STATIC", "ENUM", "AWAIT",
  "TRUE_LITERAL", "FALSE_LITERAL", "NULL_LITERAL", "TOK_VIRTUAL_SEMICOLON",
  "UPOSTFIX", "$accept", "Script", "statement_list_opt", "statement_list",
  "statement", "empty_statement", "block_statement", "StatementTerminator",
  "variable_statement", "variable_declaration_list",
  "variable_declaration_list_inner", "variable_declaration",
  "if_statement", "expression_statement", "expression_opt",
  "return_statement", "@1", "function_declaration", "iteration_statement",
  "while_statement", "for_statement", "for_init", "do_while_statement",
  "break_statement", "continue_statement", "switch_statement",
  "try_statement", "catch_clause", "finally_clause", "throw_statement",
  "@2", "switch_case_list", "switch_case", "case_statement_list",
  "arrow_parameter_list", "identifier_list", "function_name_opt",
  "function_expression", "class_declaration", "class_body",
  "import_declaration", "import_specifier_list", "import_specifier",
  "export_declaration", "export_specifier_list", "export_specifier",
  "method_definition_list", "method_definition", "expression",
  "assignment_expression", "conditional_expression",
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
     345,   346,   347,   348
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,   100,   101,   101,   102,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   108,   108,
     110,   109,   111,   112,   112,   112,   113,   114,   115,   115,
     115,   116,   117,   118,   119,   120,   120,   120,   121,   122,
     124,   123,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   132,   132,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   152,   153,   153,   153,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     164,   164,   165,   165,   166,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     2,     2,
       2,     1,     3,     1,     3,     5,     7,     2,     0,     1,
       0,     4,     4,     1,     1,     1,     5,     9,     0,     1,
       1,     7,     2,     2,     7,     3,     3,     4,     5,     2,
       0,     4,     0,     2,     4,     3,     0,     2,     0,     1,
       1,     3,     0,     1,     4,     3,     5,     3,     3,     7,
       5,     7,     1,     3,     1,     3,     2,     2,     2,     4,
       5,     7,     1,     3,     1,     3,     0,     2,     3,     4,
       1,     3,     1,     1,     3,     3,     3,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     1,     2,     2,
       3,     1,     4,     3,     2,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     3,     1,     3,     3,     1,     1,     1,     2,     3,
       1,     3,     5,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   169,   171,   170,     0,    68,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,     0,     0,    40,   179,     0,   168,
      60,     0,     0,     0,     0,     0,     0,   172,   173,   174,
      26,     0,     2,     4,     5,    22,     7,    23,     8,     0,
       9,    11,    10,    12,    13,    43,    44,    45,    14,    15,
      16,    17,    18,   178,    19,    20,    21,     0,   100,   102,
     107,   109,   111,   113,   115,   117,   119,   124,   131,   135,
     138,   142,   152,   155,   156,   157,   161,   176,   177,   103,
       0,   169,   171,   170,   180,     0,     0,   182,     0,   169,
       0,    72,     0,    69,     0,   188,   190,     0,   169,     0,
     148,   152,   149,   146,   147,   151,   150,    52,     0,    33,
      29,    31,    53,   143,     0,     0,     0,     0,    86,    87,
      88,    48,     0,     0,     0,     0,     0,     0,     0,     0,
     158,   157,    38,     0,     0,     3,     0,   145,    30,   144,
       0,    28,     1,     6,    27,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   154,     0,     0,     0,     0,     0,     0,   159,
     194,   195,   193,    24,   181,     0,     0,   185,   187,   186,
      73,     0,     0,   175,   189,     0,    96,     0,    75,     0,
       0,     0,    94,     0,    92,     0,     0,    49,     0,    50,
       0,     0,     0,     0,    78,    84,     0,    82,     0,   158,
     160,     0,    39,     0,     0,     0,     0,    55,    56,     0,
     101,   110,     0,   112,   114,   116,   118,   120,   121,   122,
     123,   125,   126,   127,   128,   129,   130,   132,   133,   134,
     136,   137,   139,   140,   141,   104,   105,   106,   164,   166,
       0,     0,   163,   183,   184,     0,    71,   191,     0,     0,
      34,    32,     0,     0,     0,     0,    89,    38,    42,    74,
       0,     0,     0,     0,     0,     0,    41,     0,    61,     0,
      59,    57,     0,     0,   165,     0,   162,   192,    77,     0,
      97,     0,    76,     0,    95,     0,    90,    93,     0,    35,
      80,    85,     0,    83,     0,    62,     0,    46,   108,   167,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    98,    51,    91,     0,    36,    79,    81,    54,     0,
       0,    63,    58,    99,     0,     0,    66,    47,    66,    65,
      64,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    41,    95,    43,    44,    45,    46,    47,    48,    49,
     120,   121,    50,    51,   231,    52,   142,    53,    54,    55,
      56,   218,    57,    58,    59,    60,    61,   237,   238,    62,
     144,   338,   351,   359,   102,   103,   133,    63,    64,   208,
      65,   226,   227,    66,   213,   214,   278,   310,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,   220,   270,    86,
      87,    96,    97,    98,    88,   107,    89,   192
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -264
static const yytype_int16 yypact[] =
{
     432,    10,  -264,  -264,   342,   700,   522,  -264,   789,   789,
     789,   789,   789,   789,     9,   110,   129,     9,   789,   432,
      89,    31,   131,    60,    27,    59,  -264,  -264,   133,  -264,
    -264,   130,   789,   129,   789,   139,   129,  -264,  -264,  -264,
    -264,   157,  -264,   432,  -264,  -264,  -264,  -264,  -264,     9,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,    13,  -264,  -264,
      12,   125,   134,   135,   148,   239,   183,   163,   104,   222,
    -264,  -264,   174,  -264,  -264,   108,  -264,  -264,  -264,  -264,
     878,     7,   141,   146,  -264,   189,    30,  -264,   167,    33,
     250,   187,   196,   207,    45,  -264,  -264,    46,  -264,   967,
    -264,   124,  -264,  -264,  -264,  -264,  -264,  -264,     8,   213,
     256,  -264,  -264,  -264,   197,   268,   967,   275,  -264,  -264,
    -264,    86,   273,   273,   967,   215,     9,   280,   216,    59,
     273,    88,   967,   967,   967,   432,   -23,  -264,   256,  -264,
     967,   256,  -264,  -264,  -264,   967,  -264,   789,   967,   789,
     789,   789,   789,   789,   789,   789,   789,   789,   789,   789,
     789,   789,   789,   789,   789,   789,   789,   789,   789,   789,
     789,  -264,  -264,   967,   967,   967,   611,   967,   283,  -264,
    -264,   249,  -264,  -264,  -264,   263,   967,  -264,  -264,  -264,
    -264,   241,   287,  -264,  -264,   967,  -264,   967,  -264,   967,
     129,   284,   220,    34,  -264,    13,   273,  -264,   281,   279,
     130,   130,    57,   291,  -264,   225,    36,  -264,   294,  -264,
    -264,     9,   279,    79,    13,   290,   130,   236,  -264,    94,
    -264,   125,   258,   134,   135,   148,   239,   183,   183,   183,
     183,   163,   163,   163,   163,   163,   163,   104,   104,   104,
     222,   222,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
      97,    73,  -264,  -264,  -264,   878,  -264,  -264,    16,   295,
    -264,  -264,   967,   300,    15,   268,  -264,   967,  -264,  -264,
     432,     9,   302,   237,   280,   238,  -264,   303,  -264,   309,
    -264,  -264,   432,   967,  -264,   967,  -264,  -264,  -264,   263,
    -264,   273,  -264,   103,  -264,   310,  -264,  -264,   305,   253,
    -264,  -264,   311,  -264,   312,  -264,   314,  -264,  -264,  -264,
     273,   130,     9,     9,   967,   432,     9,     9,    29,   130,
     130,  -264,  -264,  -264,   315,  -264,  -264,  -264,  -264,   967,
     277,  -264,  -264,  -264,   432,     3,  -264,  -264,  -264,   432,
     432,  -264
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,   320,  -264,   -18,  -264,   -29,   -11,   307,   199,
     128,   118,  -264,  -264,  -252,  -264,  -264,   313,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,    95,  -264,
    -264,  -264,  -264,   -27,  -264,  -264,  -264,  -264,   317,    55,
    -264,  -264,    41,  -264,  -264,    53,  -264,  -264,    -5,     1,
    -264,   -86,   182,   184,   191,   192,   194,    99,    44,   101,
      -4,     0,  -264,    65,   -20,  -264,    -9,   -61,  -264,  -264,
    -264,  -264,   159,  -263,  -264,  -264,  -264,    82
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -188
static const yytype_int16 yytable[] =
{
     104,   124,   146,   117,   191,   140,   122,   106,   110,   112,
     113,   114,   115,   116,   206,   311,   141,   155,   123,   197,
     198,   199,     7,   308,   189,   153,     7,   155,     7,   235,
     135,   136,   147,   137,   149,   318,   348,   194,   154,   131,
     236,   284,   -70,   293,   195,   358,   330,   -70,   285,  -185,
     294,   157,   138,   158,   203,    90,   156,   204,    90,   155,
     205,   190,   108,     2,     3,   100,   290,   109,   134,     6,
     207,   155,   221,   111,   111,   111,   111,   111,   111,   230,
     349,    90,   344,   111,   306,   315,   350,   155,   297,     1,
       2,     3,   100,   155,     5,   125,     6,   111,   187,   111,
     188,    40,   309,   302,   104,    40,   304,    40,   155,     8,
       9,   305,   332,   118,    10,    11,   186,   155,   187,   229,
     188,   215,    12,    13,   101,   224,   219,   176,   177,   222,
     141,   139,   119,    27,   132,    29,   145,   232,   233,   234,
      16,   143,    15,    16,    18,   239,   126,   150,    37,    38,
      39,   101,   181,   182,   127,   111,   240,   152,    25,   242,
      27,   148,    29,   159,   151,    32,    33,    34,   160,    33,
     161,    36,   260,   261,    36,    37,    38,    39,   262,   263,
     264,   162,   271,  -187,   265,   266,   267,   269,  -186,   191,
     200,   288,   289,   173,   174,   175,   193,   274,   167,   168,
     169,   170,   181,   182,   286,   201,   277,   300,   279,   196,
     280,   251,   252,   253,   254,   255,   256,   183,   184,   185,
     296,   202,   111,   298,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   190,   178,   179,   180,
     331,   171,   172,   197,   198,   199,   209,    94,   163,   164,
     165,   166,   247,   248,   249,   250,   197,   198,   199,   340,
     210,   212,   319,   316,   257,   258,   259,   313,   216,   211,
     320,   186,   232,   225,   327,   223,   272,   228,   157,   275,
     276,   283,   282,   155,   287,   291,   292,   295,   299,   236,
     303,   206,   341,   314,   328,   321,   329,   322,   324,   325,
     352,   353,   326,   335,   333,   336,   337,   345,   334,   356,
      42,   342,   343,   339,   354,   346,   347,   128,   281,   232,
     217,   360,   301,   129,   312,   323,   357,   130,   317,   241,
     111,   361,   361,   243,   355,    91,    92,    93,     4,    94,
       5,   244,     6,   245,   273,     7,   246,   307,     0,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,    15,    16,    17,     0,     0,
      18,    19,     0,    20,     0,     0,    21,    22,    23,    24,
       0,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     0,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     1,     2,     3,     4,     0,
       5,     0,     6,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,    15,    16,    17,     0,     0,
      18,    19,     0,    20,     0,     0,    21,    22,    23,    24,
       0,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     0,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     1,     2,     3,   100,     0,
       5,     0,     6,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,   101,     0,     0,
       0,     0,     0,     0,    25,     0,    27,     0,    29,     0,
       0,    32,     0,    34,     0,     0,     0,     0,     0,     0,
       0,    37,    38,    39,     1,     2,     3,   100,     0,     5,
     268,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,     0,     0,     0,    10,
      11,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,    25,     0,    27,     0,    29,     0,     0,
      32,     0,    34,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,    99,     2,     3,   100,     0,     5,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,     0,     0,     0,    10,    11,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,   101,     0,     0,     0,     0,
       0,     0,    25,     0,    27,     0,    29,     0,     0,    32,
       0,    34,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,   108,     2,     3,   100,     0,   109,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,     0,    10,    11,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,    25,     0,    27,     0,    29,     0,     0,    32,     0,
      34,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,   108,     2,     3,     4,     0,   109,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,     0,    10,    11,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
      25,     0,    27,     0,    29,     0,     0,    32,     0,    34,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
       1,     2,     3,   100,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,     0,     0,     0,    10,    11,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,    25,
       0,    27,     0,    29,     0,     0,    32,     0,    34,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
       5,    19,    31,    14,    90,    25,    17,     6,     8,     9,
      10,    11,    12,    13,     6,   278,    25,    14,    18,     3,
       4,     5,    13,     7,    85,    43,    13,    14,    13,    52,
       3,     4,    32,     6,    34,   287,     7,     7,    49,     8,
      63,     7,     9,     7,    14,    42,   309,    14,    14,    42,
      14,    39,    25,    41,     9,    48,    67,    11,    48,    14,
      14,    90,     3,     4,     5,     6,     9,     8,     8,    10,
      62,    14,   133,     8,     9,    10,    11,    12,    13,   140,
      51,    48,   334,    18,    11,    70,    57,    14,     9,     3,
       4,     5,     6,    14,     8,     6,    10,    32,    10,    34,
      12,    92,    86,     9,   109,    92,     9,    92,    14,    23,
      24,    14,     9,     3,    28,    29,     8,    14,    10,   139,
      12,   126,    36,    37,    65,   136,   131,    23,    24,   134,
     139,    72,     3,    74,     3,    76,     6,   142,   143,   144,
      54,     8,    53,    54,    58,   150,    57,     8,    89,    90,
      91,    65,    28,    29,    65,    90,   155,     0,    72,   158,
      74,    33,    76,    38,    36,    79,    80,    81,    34,    80,
      35,    85,   176,   177,    85,    89,    90,    91,   178,   179,
     180,    33,   187,    42,   183,   184,   185,   186,    42,   275,
       3,   220,   221,    30,    31,    32,     7,   196,    15,    16,
      17,    18,    28,    29,   215,     9,   205,   236,   207,    42,
     209,   167,   168,   169,   170,   171,   172,    43,    44,    45,
     231,    14,   157,   234,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   275,    25,    26,    27,
     311,    68,    69,     3,     4,     5,    43,     7,    19,    20,
      21,    22,   163,   164,   165,   166,     3,     4,     5,   330,
      14,     3,   290,   284,   173,   174,   175,   282,     3,    82,
     291,     8,   287,     3,   302,    70,     3,    71,    39,    48,
       3,    71,     8,    14,    13,     4,    71,     3,     8,    63,
      42,     6,   331,     3,   303,     3,   305,    70,    70,     6,
     339,   340,     3,    60,     4,     4,     4,   335,    13,    42,
       0,   332,   333,     9,     9,   336,   337,    20,   210,   334,
     131,   358,   237,    20,   279,   294,   354,    20,   285,   157,
     275,   359,   360,   159,   349,     3,     4,     5,     6,     7,
       8,   160,    10,   161,   195,    13,   162,   275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    53,    54,    55,    -1,    -1,
      58,    59,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,    91,    92,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    53,    54,    55,    -1,    -1,
      58,    59,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,    91,    92,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    13,    23,    24,
      28,    29,    36,    37,    50,    53,    54,    55,    58,    59,
      61,    64,    65,    66,    67,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    85,    89,    90,    91,
      92,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     106,   107,   109,   111,   112,   113,   114,   116,   117,   118,
     119,   120,   123,   131,   132,   134,   137,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   163,   164,   168,   170,
      48,     3,     4,     5,     7,    96,   165,   166,   167,     3,
       6,    65,   128,   129,   142,    11,   143,   169,     3,     8,
     155,   157,   155,   155,   155,   155,   155,   101,     3,     3,
     104,   105,   101,   155,    98,     6,    57,    65,   102,   111,
     132,     8,     3,   130,     8,     3,     4,     6,    25,    72,
     158,   160,   110,     8,   124,     6,   100,   155,   104,   155,
       8,   104,     0,    98,   101,    14,   101,    39,    41,    38,
      34,    35,    33,    19,    20,    21,    22,    15,    16,    17,
      18,    68,    69,    30,    31,    32,    23,    24,    25,    26,
      27,    28,    29,    43,    44,    45,     8,    10,    12,   161,
     100,   145,   171,     7,     7,    14,    42,     3,     4,     5,
       3,     9,    14,     9,    11,    14,     6,    62,   133,    43,
      14,    82,     3,   138,   139,   142,     3,   103,   115,   142,
     161,   161,   142,    70,   101,     3,   135,   136,    71,   158,
     161,   108,   142,   142,   142,    52,    63,   121,   122,   142,
     143,   146,   143,   147,   148,   149,   150,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     154,   154,   155,   155,   155,   143,   143,   143,     9,   143,
     162,   142,     3,   166,   143,    48,     3,   143,   140,   143,
     143,   105,     8,    71,     7,    14,   101,    13,   100,   100,
       9,     4,    71,     7,    14,     3,   101,     9,   101,     8,
     100,   122,     9,    42,     9,    14,    11,   171,     7,    86,
     141,   167,   133,   142,     3,    70,   101,   139,   108,    98,
     101,     3,    70,   136,    70,     6,     3,    98,   143,   143,
     167,   161,     9,     4,    13,    60,     4,     4,   125,     9,
     161,   100,   101,   101,   108,    98,   101,   101,     7,    51,
      57,   126,   100,   100,     9,   142,    42,    98,    42,   127,
     127,    98
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
#line 182 "src/parser.y"
    { ast_root = create_script_node((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 186 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 4:
#line 188 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 5:
#line 192 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        if ((yyvsp[(1) - (1)].node) != NULL) nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); /* <-- 修复: 检查 NULL */
    ;}
    break;

  case 6:
#line 197 "src/parser.y"
    { 
        if ((yyvsp[(2) - (2)].node) != NULL) nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); /* <-- 修复: 检查 NULL */
        (yyval.list) = (yyvsp[(1) - (2)].list); 
    ;}
    break;

  case 7:
#line 204 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 206 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 208 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 210 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 212 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 214 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:
#line 216 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 218 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:
#line 220 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:
#line 222 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 224 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 226 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 228 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 230 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 21:
#line 232 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 22:
#line 234 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 23:
#line 242 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 24:
#line 247 "src/parser.y"
    { (yyval.node) = create_block_statement((yyvsp[(2) - (3)].list)); ;}
    break;

  case 27:
#line 259 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 28:
#line 263 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_LET, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 29:
#line 265 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_CONST, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 30:
#line 267 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_VAR, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 31:
#line 271 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 32:
#line 276 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 33:
#line 283 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (1)].str_val)), NULL); ;}
    break;

  case 34:
#line 285 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (3)].str_val)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 35:
#line 289 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL); ;}
    break;

  case 36:
#line 291 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 37:
#line 295 "src/parser.y"
    { (yyval.node) = create_expression_statement((yyvsp[(1) - (2)].node)); ;}
    break;

  case 38:
#line 300 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 39:
#line 302 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 40:
#line 305 "src/parser.y"
    { /* 'restrict_new_line' 标志现在由 ASI 包装器在 'last_token' 中处理 */ ;}
    break;

  case 41:
#line 307 "src/parser.y"
    { 
        (yyval.node) = create_return_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 42:
#line 313 "src/parser.y"
    { (yyval.node) = create_function_declaration(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 43:
#line 317 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 44:
#line 319 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:
#line 321 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:
#line 325 "src/parser.y"
    { (yyval.node) = create_while_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 47:
#line 329 "src/parser.y"
    { (yyval.node) = create_for_statement((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node)); ;}
    break;

  case 48:
#line 334 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 49:
#line 336 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 50:
#line 338 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:
#line 342 "src/parser.y"
    { (yyval.node) = create_do_while_statement((yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node)); ;}
    break;

  case 52:
#line 346 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 53:
#line 350 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 54:
#line 354 "src/parser.y"
    { (yyval.node) = create_switch_statement((yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].list)); ;}
    break;

  case 55:
#line 358 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL); ;}
    break;

  case 56:
#line 360 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 57:
#line 362 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 58:
#line 366 "src/parser.y"
    { (yyval.node) = create_catch_clause(create_identifier_node((yyvsp[(3) - (5)].str_val)), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 59:
#line 370 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 60:
#line 373 "src/parser.y"
    { /* 'restrict_new_line' 标志现在由 ASI 包装器在 'last_token' 中处理 */ ;}
    break;

  case 61:
#line 375 "src/parser.y"
    {
        (yyval.node) = create_throw_statement((yyvsp[(3) - (4)].node));
    ;}
    break;

  case 62:
#line 381 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 63:
#line 383 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 64:
#line 390 "src/parser.y"
    { (yyval.node) = create_switch_case((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list)); ;}
    break;

  case 65:
#line 392 "src/parser.y"
    { (yyval.node) = create_switch_case(NULL, (yyvsp[(3) - (3)].list)); ;}
    break;

  case 66:
#line 396 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 67:
#line 398 "src/parser.y"
    {
        if ((yyvsp[(2) - (2)].node) != NULL) nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); /* <-- 修复: 检查 NULL */
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 68:
#line 405 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 69:
#line 407 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 70:
#line 411 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), create_identifier_node((yyvsp[(1) - (1)].str_val)));
    ;}
    break;

  case 71:
#line 416 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), create_identifier_node((yyvsp[(3) - (3)].str_val)));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 72:
#line 422 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 73:
#line 423 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 74:
#line 427 "src/parser.y"
    { (yyval.node) = create_function_expression((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 75:
#line 431 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (3)].str_val)), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:
#line 433 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (5)].str_val)), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 77:
#line 437 "src/parser.y"
    { (yyval.node) = create_class_body((yyvsp[(2) - (3)].list)); ;}
    break;

  case 78:
#line 442 "src/parser.y"
    { (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(2) - (3)].str_val)), NULL); ;}
    break;

  case 79:
#line 446 "src/parser.y"
    { (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), (yyvsp[(3) - (7)].list)); ;}
    break;

  case 80:
#line 450 "src/parser.y"
    { 
        NodeList *specs = nodelist_create();
        // 默认导入: imported=NULL, local=IDENTIFIER, is_default=true
        ASTNode *local = create_identifier_node((yyvsp[(2) - (5)].str_val));
        ASTNode *spec = create_import_specifier(NULL, local, true, false);
        nodelist_append(specs, spec);
        (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(4) - (5)].str_val)), specs); 
    ;}
    break;

  case 81:
#line 461 "src/parser.y"
    {
        NodeList *specs = nodelist_create();
        ASTNode *local = create_identifier_node((yyvsp[(4) - (7)].str_val));
        ASTNode *spec = create_import_specifier(NULL, local, false, true); // is_namespace=true
        nodelist_append(specs, spec);
        (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), specs);
    ;}
    break;

  case 82:
#line 472 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 83:
#line 477 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 84:
#line 486 "src/parser.y"
    { 
        ASTNode *id = create_identifier_node((yyvsp[(1) - (1)].str_val));
        // 这里的关键是: 对于简写，imported 和 local 都是同一个标识符
        // 但我们需要两个独立的节点对象，或者在 AST 打印时处理。
        // 为了简单，我们创建两个节点。
        ASTNode *local = create_identifier_node((yyvsp[(1) - (1)].str_val));
        (yyval.node) = create_import_specifier(id, local, false, false); 
    ;}
    break;

  case 85:
#line 496 "src/parser.y"
    { 
        (yyval.node) = create_import_specifier(create_identifier_node((yyvsp[(1) - (3)].str_val)), create_identifier_node((yyvsp[(3) - (3)].str_val)), false, false); 
    ;}
    break;

  case 86:
#line 504 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 87:
#line 508 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 88:
#line 512 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 89:
#line 516 "src/parser.y"
    { 
        (yyval.node) = create_export_declaration((yyvsp[(3) - (4)].node), NULL, NULL, true); // is_default=true
    ;}
    break;

  case 90:
#line 522 "src/parser.y"
    { (yyval.node) = create_export_declaration(NULL, (yyvsp[(3) - (5)].list), NULL, false); ;}
    break;

  case 91:
#line 526 "src/parser.y"
    { (yyval.node) = create_export_declaration(NULL, (yyvsp[(3) - (7)].list), create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), false); ;}
    break;

  case 92:
#line 531 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 93:
#line 536 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 94:
#line 545 "src/parser.y"
    {
        ASTNode *id = create_identifier_node((yyvsp[(1) - (1)].str_val));
        ASTNode *exported = create_identifier_node((yyvsp[(1) - (1)].str_val));
        (yyval.node) = create_export_specifier(id, exported);
    ;}
    break;

  case 95:
#line 552 "src/parser.y"
    {
        (yyval.node) = create_export_specifier(create_identifier_node((yyvsp[(1) - (3)].str_val)), create_identifier_node((yyvsp[(3) - (3)].str_val)));
    ;}
    break;

  case 96:
#line 559 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 97:
#line 561 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 98:
#line 568 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.node) = create_method_definition((yyvsp[(1) - (3)].node), func_value, false); 
    ;}
    break;

  case 99:
#line 573 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (4)].node), func_value, true); 
    ;}
    break;

  case 100:
#line 581 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 101:
#line 583 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_COMMA, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 102:
#line 587 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 103:
#line 589 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 104:
#line 591 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_ASSIGN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 105:
#line 593 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 106:
#line 595 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 107:
#line 600 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 108:
#line 602 "src/parser.y"
    { (yyval.node) = create_conditional_expression((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 109:
#line 606 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 110:
#line 608 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 111:
#line 612 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 112:
#line 614 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 113:
#line 618 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 114:
#line 620 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 115:
#line 624 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 116:
#line 626 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 117:
#line 630 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:
#line 632 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 119:
#line 636 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 120:
#line 638 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 121:
#line 640 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 122:
#line 642 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 123:
#line 644 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 124:
#line 648 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 125:
#line 650 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 126:
#line 652 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 127:
#line 654 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 128:
#line 656 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 129:
#line 658 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_IN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 130:
#line 660 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_INSTANCEOF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 131:
#line 664 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 132:
#line 666 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 133:
#line 668 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_RSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 134:
#line 670 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_URSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 135:
#line 674 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 136:
#line 676 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 137:
#line 678 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 138:
#line 682 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 139:
#line 684 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 140:
#line 686 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 141:
#line 688 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_POWER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 142:
#line 692 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 143:
#line 694 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DELETE, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 144:
#line 696 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 145:
#line 698 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_TYPEOF, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 146:
#line 700 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_INC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 147:
#line 702 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DEC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 148:
#line 704 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_PLUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 149:
#line 706 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_MINUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 150:
#line 708 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_BIT_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 151:
#line 710 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 152:
#line 714 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 153:
#line 716 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_INC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 154:
#line 718 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_DEC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 155:
#line 722 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 156:
#line 724 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 157:
#line 728 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 158:
#line 730 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (2)].node), NULL); ;}
    break;

  case 159:
#line 734 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 160:
#line 736 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].list)); ;}
    break;

  case 161:
#line 740 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 162:
#line 742 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 163:
#line 744 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node((yyvsp[(3) - (3)].str_val)), false); ;}
    break;

  case 164:
#line 748 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 165:
#line 750 "src/parser.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
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
#line 766 "src/parser.y"
    { (yyval.node) = create_this_node(); ;}
    break;

  case 169:
#line 768 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 170:
#line 770 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 171:
#line 772 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 172:
#line 774 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_TRUE, strdup("true")); ;}
    break;

  case 173:
#line 776 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_FALSE, strdup("false")); ;}
    break;

  case 174:
#line 778 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NULL, strdup("null")); ;}
    break;

  case 175:
#line 780 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 176:
#line 782 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 177:
#line 784 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 178:
#line 786 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 179:
#line 788 "src/parser.y"
    { (yyval.node) = create_super_node(); ;}
    break;

  case 180:
#line 792 "src/parser.y"
    { (yyval.node) = create_object_expression(nodelist_create()); ;}
    break;

  case 181:
#line 794 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 182:
#line 798 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 183:
#line 803 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 184:
#line 810 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 185:
#line 814 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 186:
#line 816 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 187:
#line 818 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 188:
#line 822 "src/parser.y"
    { (yyval.node) = create_array_expression(nodelist_create()); ;}
    break;

  case 189:
#line 824 "src/parser.y"
    { (yyval.node) = create_array_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 190:
#line 828 "src/parser.y"
    {
        (yyval.list) = nodelist_create();
        nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 191:
#line 833 "src/parser.y"
    {
        nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 192:
#line 841 "src/parser.y"
    {
        bool is_expression_body = ((yyvsp[(5) - (5)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression((yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].node), is_expression_body);
    ;}
    break;

  case 193:
#line 847 "src/parser.y"
    {
        NodeList *params = nodelist_create();
        nodelist_append(params, create_identifier_node((yyvsp[(1) - (3)].str_val)));
        bool is_expression_body = ((yyvsp[(3) - (3)].node)->type != NODE_BLOCK_STATEMENT);
        (yyval.node) = create_arrow_function_expression(params, (yyvsp[(3) - (3)].node), is_expression_body);
    ;}
    break;

  case 194:
#line 856 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 195:
#line 858 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3135 "build/parser.tab.c"
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


#line 860 "src/parser.y"

static void update_bracket_depth(ParserState* state, int token) {
    switch (token) {
        case LBRACE:
            state->brace_depth++;
            break;
        case RBRACE:
            if (state->brace_depth > 0) state->brace_depth--;
            // 离开花括号作用域，清除对象字面量标记
            if (state->brace_depth == 0) state->in_object_literal = false;
            break;
        case LBRACK:
            state->bracket_depth++;
            break;
        case RBRACK:
            if (state->bracket_depth > 0) state->bracket_depth--;
            break;
        case LPAREN:
            state->paren_depth++;
            break;
        case RPAREN:
            if (state->paren_depth > 0) state->paren_depth--;
            break;
        case COLON:
            // 看到冒号，可能在对象字面量中
            if (state->brace_depth > 0) {
                state->in_object_literal = true;
            }
            break;
        case SEMICOLON:
        case TOK_VIRTUAL_SEMICOLON:
            // 语句结束，清除对象字面量标记
            state->in_object_literal = false;
            break;
    }
}

static bool should_suppress_asi(ParserState* state, int next_token) {
    // 规则1: 在某些 last_token 之后总是抑制
    if (state->last_token == SEMICOLON || 
        state->last_token == TOK_VIRTUAL_SEMICOLON ||
        state->last_token == LBRACE ||
        state->last_token == LPAREN ||
        state->last_token == LBRACK ||
        state->last_token == COMMA ||       // 逗号后面，如对象/数组元素之间
        state->last_token == COLON ||       // 冒号后面，如对象属性名后
        state->last_token == 0)
    {
        fprintf(stderr, "[DEBUG] suppress_asi: rule 1 triggered (last_token=%d)\n", state->last_token);
        return true;
    }
    
    // 规则2: 类成员定义
    // 在类体中，方法定义之间不需要分隔符
    // 当 last_token 是 RBRACE（方法结束）且 next_token 是类成员关键字时，抑制 ASI
    if (state->last_token == RBRACE) {
        fprintf(stderr, "[DEBUG] suppress_asi: last_token is RBRACE, next_token=%d\n", next_token);
        fprintf(stderr, "[DEBUG] Checking: STATIC=%d, IDENTIFIER=%d, RBRACE=%d\n", STATIC, IDENTIFIER, RBRACE);
        if (next_token == STATIC ||      // static 方法
            next_token == IDENTIFIER ||  // 普通方法名
            next_token == STRING_LITERAL || // 计算属性名
            next_token == NUMERIC_LITERAL || // 计算属性名
            next_token == LBRACK ||      // 计算属性名 [expr]
            next_token == RBRACE)        // 类定义结束
        {
            fprintf(stderr, "[DEBUG] suppress_asi: rule 2 triggered (class member)\n");
            return true;
        }
    }
    
    // 规则3: 右花括号的特殊处理
    // 如果我们在对象字面量中（最近看到过冒号），则抑制 ASI
    if (next_token == RBRACE && state->in_object_literal && state->brace_depth > 0) {
        fprintf(stderr, "[DEBUG] suppress_asi: rule 3 triggered (object literal)\n");
        return true;
    }
    
    // 规则4: 在数组字面量内部，右方括号不触发 ASI
    if (next_token == RBRACK && state->bracket_depth > 0) {
        fprintf(stderr, "[DEBUG] suppress_asi: rule 4 triggered (array literal)\n");
        return true;
    }
    
    // 规则5: 在括号表达式内部，右圆括号不触发 ASI
    if (next_token == RPAREN && state->paren_depth > 0) {
        fprintf(stderr, "[DEBUG] suppress_asi: rule 5 triggered (paren expr)\n");
        return true;
    }
    
    fprintf(stderr, "[DEBUG] suppress_asi: no rule matched, returning false\n");
    return false;
}

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

static bool is_offending_token(int token) {
    // 白名单策略：只有这些标记可以合法地跟在一个表达式后面
    switch (token) {
        // 二元操作符
        case PLUS:
        case MINUS:
        case MUL:
        case MOD:
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
        case IN:
        case INSTANCEOF:
        
        // 赋值操作符
        case ASSIGN:
        case ADD_ASSIGN:
        case SUB_ASSIGN:
        case MUL_ASSIGN:
        case POWER_ASSIGN:
        
        // 成员访问和调用
        case DOT:
        case LBRACK:
        case LPAREN:
        
        // 其他
        case CONDITIONAL:
        case COLON:
        case COMMA:
        case INC:
        case DEC:
            return false; // 不是冒犯性标记

        // 其他所有标记都是"冒犯性"的（包括右括号、关键字、标识符、字面量）
        default:
            return true;
    }
}

/* 在 yylex 函数中添加调试输出 */

int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, ParserState* state) {
    yyllocp->first_line = state->line;
    yyllocp->last_line = state->line;
    
    fprintf(stderr, "[DEBUG] yylex: line=%d, brace=%d, bracket=%d, paren=%d, last_token=%d, has_newline=%d\n",
            state->line, state->brace_depth, state->bracket_depth, state->paren_depth, 
            state->last_token, state->has_seen_newline);
    
    if (state->has_buffered_token) {
        state->has_buffered_token = false;
        int token = state->buffered_token;
        state->last_token = token;
        *yylvalp = state->buffered_yylval;
        memset(&state->buffered_yylval, 0, sizeof(YYSTYPE));
        
        // 更新深度（对于缓冲的 token）
        update_bracket_depth(state, token);
        
        fprintf(stderr, "[DEBUG] Returning buffered token: %d, new_brace=%d\n", token, state->brace_depth);
        return token;
    }

    int next_token = yylex_internal(yylvalp, state);
    yyllocp->last_line = state->line;
    
    fprintf(stderr, "[DEBUG] Got next_token: %d, has_newline=%d\n", next_token, state->has_seen_newline);

    // 受限产生式检查
    if (is_restricted_keyword(state->last_token) && state->has_seen_newline) {
        fprintf(stderr, "[DEBUG] Restricted keyword ASI\n");
        state->buffered_token = next_token;
        state->buffered_yylval = *yylvalp;
        state->has_buffered_token = true;
        state->has_seen_newline = false;
        state->last_token = TOK_VIRTUAL_SEMICOLON;
        memset(yylvalp, 0, sizeof(YYSTYPE));
        return TOK_VIRTUAL_SEMICOLON;
    }

    // 通用 ASI 规则
    bool asi_rule_1 = state->has_seen_newline && is_offending_token(next_token);
    bool asi_rule_3 = (next_token == 0);
    
    if (asi_rule_1 || asi_rule_3) {
        bool suppress_asi = should_suppress_asi(state, next_token);
        
        fprintf(stderr, "[DEBUG] ASI check: rule_1=%d, rule_3=%d, suppress=%d\n", 
                asi_rule_1, asi_rule_3, suppress_asi);
        
        if (suppress_asi) {
            fprintf(stderr, "[DEBUG] ASI suppressed\n");
            // 不执行 ASI
        }
        else {
            fprintf(stderr, "[DEBUG] Inserting virtual semicolon\n");
            // 插入虚拟分号
            state->buffered_token = next_token;
            state->buffered_yylval = *yylvalp;
            state->has_buffered_token = true;
            state->has_seen_newline = false;
            state->last_token = TOK_VIRTUAL_SEMICOLON;
            memset(yylvalp, 0, sizeof(YYSTYPE));
            return TOK_VIRTUAL_SEMICOLON;
        }
    }
    
    state->has_seen_newline = false;
    
    // 更新深度（在更新 last_token 之前）
    update_bracket_depth(state, next_token);
    
    fprintf(stderr, "[DEBUG] Updated depth: brace=%d, bracket=%d, paren=%d\n",
            state->brace_depth, state->bracket_depth, state->paren_depth);
    
    state->last_token = next_token;  
    return next_token;
}
