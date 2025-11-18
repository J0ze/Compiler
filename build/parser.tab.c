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




/* Copy the first part of user declarations.  */
#line 4 "src/parser.y"

#include <stdio.h>
#include <string.h>
#include "common.h" 
#include "pool.h"

extern ParserState *scanner;
extern ASTNode *ast_root;

/* 词法分析器函数 (yylex 是 re2c 生成的主函数) */
int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, ParserState* state);


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
#line 24 "src/parser.y"
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
#define YYFINAL  210
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  256
/* YYNRULES -- Number of states.  */
#define YYNSTATES  475

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   140,   142,   144,   148,   151,   154,   160,   168,   170,
     172,   174,   176,   178,   186,   192,   202,   210,   218,   226,
     234,   243,   244,   246,   248,   251,   254,   258,   264,   272,
     273,   276,   281,   285,   286,   289,   293,   297,   301,   306,
     312,   315,   318,   323,   328,   329,   331,   335,   341,   345,
     346,   349,   353,   358,   362,   370,   376,   384,   386,   390,
     392,   396,   399,   402,   405,   410,   416,   424,   426,   430,
     432,   436,   439,   442,   445,   447,   451,   453,   457,   458,
     460,   462,   466,   468,   470,   474,   478,   482,   486,   488,
     494,   496,   500,   502,   506,   508,   512,   514,   518,   520,
     524,   526,   530,   534,   538,   542,   544,   548,   552,   556,
     560,   564,   568,   570,   574,   578,   582,   584,   588,   592,
     594,   598,   602,   606,   608,   612,   614,   617,   620,   623,
     626,   629,   632,   635,   638,   641,   643,   646,   649,   651,
     653,   655,   658,   661,   664,   668,   671,   673,   678,   682,
     685,   689,   691,   695,   697,   699,   701,   703,   705,   707,
     709,   711,   715,   717,   719,   721,   723,   726,   730,   732,
     736,   739,   743,   745,   747,   749,   752,   756,   758,   762,
     765,   771,   775,   776,   778,   782,   784
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      98,     0,    -1,    99,    -1,    -1,   100,    -1,   101,    -1,
     100,   101,    -1,   103,    -1,   130,    -1,   133,    -1,   140,
      -1,   137,    -1,     3,    -1,    56,    -1,    60,    -1,    68,
      -1,    69,    -1,    63,    -1,    77,    -1,    84,    -1,    89,
      -1,    57,    -1,    86,    -1,    62,    -1,    67,    -1,    79,
      -1,    54,    -1,    53,    -1,    58,    -1,    93,    -1,    94,
      -1,    95,    -1,    76,    -1,    80,    -1,    61,    -1,    71,
      -1,    72,    -1,    83,    -1,    85,    -1,    88,    -1,    92,
      -1,    64,    -1,    70,    -1,    78,    -1,    65,    -1,    73,
      -1,    75,    -1,    74,    -1,    82,    -1,    55,    -1,    66,
      -1,    81,    -1,    59,    -1,    87,    -1,    90,    -1,    91,
      -1,   106,    -1,   107,    -1,   109,    -1,   119,    -1,   108,
      -1,   110,    -1,   117,    -1,   118,    -1,   121,    -1,   126,
      -1,   125,    -1,   105,    -1,   129,    -1,   120,    -1,    -1,
      14,    -1,    14,    -1,     7,    99,     8,    -1,   143,   104,
      -1,   147,   104,    -1,    69,     9,   147,    10,   103,    -1,
      69,     9,   147,    10,   103,    63,   103,    -1,   111,    -1,
     112,    -1,   113,    -1,   114,    -1,   115,    -1,    62,   103,
      86,     9,   147,    10,   104,    -1,    86,     9,   147,    10,
     103,    -1,    67,     9,   116,    14,   146,    14,   146,    10,
     103,    -1,    67,     9,   163,    71,   147,    10,   103,    -1,
      67,     9,   143,    71,   147,    10,   103,    -1,    67,     9,
     163,    75,   147,    10,   103,    -1,    67,     9,   143,    75,
     147,    10,   103,    -1,    67,    92,     9,   163,    75,   147,
      10,   103,    -1,    -1,   143,    -1,   147,    -1,    53,   104,
      -1,    58,   104,    -1,    77,   146,   104,    -1,    87,     9,
     147,    10,   103,    -1,    79,     9,   147,    10,     7,   122,
       8,    -1,    -1,   122,   123,    -1,    54,   147,    45,   124,
      -1,    60,    45,   124,    -1,    -1,   124,   101,    -1,    81,
     147,   104,    -1,    82,   106,   127,    -1,    82,   106,   128,
      -1,    82,   106,   127,   128,    -1,    55,     9,     3,    10,
     106,    -1,    66,   106,    -1,    59,   104,    -1,    68,     3,
     167,   106,    -1,    68,   132,   167,   106,    -1,    -1,     3,
      -1,    56,     3,   134,    -1,    56,     3,    65,   148,   134,
      -1,     7,   135,     8,    -1,    -1,   135,   136,    -1,   173,
     167,   106,    -1,    90,   173,   167,   106,    -1,    70,     4,
     104,    -1,    70,     7,   138,     8,    73,     4,   104,    -1,
      70,     3,    73,     4,   104,    -1,    70,    26,    74,     3,
      73,     4,   104,    -1,   139,    -1,   138,    15,   139,    -1,
       3,    -1,     3,    74,     3,    -1,    64,   107,    -1,    64,
     130,    -1,    64,   133,    -1,    64,    60,   147,   104,    -1,
      64,     7,   141,     8,   104,    -1,    64,     7,   141,     8,
      73,     4,   104,    -1,   142,    -1,   141,    15,   142,    -1,
       3,    -1,     3,    74,     3,    -1,    84,   144,    -1,    89,
     144,    -1,    57,   144,    -1,   145,    -1,   144,    15,   145,
      -1,     3,    -1,     3,    46,   148,    -1,    -1,   147,    -1,
     148,    -1,   147,    15,   148,    -1,   149,    -1,   176,    -1,
     163,    46,   148,    -1,   163,    47,   148,    -1,   163,    48,
     148,    -1,   163,    32,   148,    -1,   150,    -1,   150,    44,
     148,    45,   148,    -1,   151,    -1,   150,    42,   151,    -1,
     152,    -1,   151,    41,   152,    -1,   153,    -1,   152,    37,
     153,    -1,   154,    -1,   153,    38,   154,    -1,   155,    -1,
     154,    36,   155,    -1,   156,    -1,   155,    20,   156,    -1,
     155,    21,   156,    -1,   155,    22,   156,    -1,   155,    23,
     156,    -1,   157,    -1,   156,    16,   157,    -1,   156,    17,
     157,    -1,   156,    18,   157,    -1,   156,    19,   157,    -1,
     156,    71,   157,    -1,   156,    72,   157,    -1,   158,    -1,
     157,    33,   158,    -1,   157,    34,   158,    -1,   157,    35,
     158,    -1,   159,    -1,   158,    24,   159,    -1,   158,    25,
     159,    -1,   160,    -1,   159,    26,   160,    -1,   159,    31,
     160,    -1,   159,    27,   160,    -1,   161,    -1,   161,    28,
     160,    -1,   162,    -1,    61,   161,    -1,    85,   161,    -1,
      83,   161,    -1,    29,   161,    -1,    30,   161,    -1,    24,
     161,    -1,    25,   161,    -1,    40,   161,    -1,    39,   161,
      -1,   163,    -1,   163,    29,    -1,   163,    30,    -1,   164,
      -1,   165,    -1,   166,    -1,    76,   164,    -1,   166,   167,
      -1,   165,   167,    -1,    76,   164,   167,    -1,    78,   167,
      -1,   169,    -1,   166,    11,   147,    12,    -1,   166,    13,
     102,    -1,     9,    10,    -1,     9,   168,    10,    -1,   148,
      -1,   168,    15,   148,    -1,    80,    -1,     3,    -1,     5,
      -1,     4,    -1,     6,    -1,    93,    -1,    94,    -1,    95,
      -1,     9,   147,    10,    -1,   170,    -1,   174,    -1,   131,
      -1,    78,    -1,     7,     8,    -1,     7,   171,     8,    -1,
     172,    -1,   171,    15,   172,    -1,   171,    15,    -1,   173,
      45,   148,    -1,   102,    -1,     4,    -1,     5,    -1,    11,
      12,    -1,    11,   175,    12,    -1,   148,    -1,   175,    15,
     148,    -1,   175,    15,    -1,     9,   177,    10,    51,   178,
      -1,     3,    51,   178,    -1,    -1,     3,    -1,   177,    15,
       3,    -1,   106,    -1,   148,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   122,   122,   127,   128,   132,   137,   144,   146,   148,
     150,   152,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   205,   207,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     236,   237,   240,   244,   248,   252,   256,   258,   264,   266,
     268,   270,   272,   276,   280,   287,   292,   294,   299,   301,
     303,   309,   310,   312,   318,   322,   326,   330,   334,   338,
     339,   342,   344,   348,   349,   352,   356,   358,   360,   364,
     368,   372,   378,   382,   386,   387,   390,   392,   396,   400,
     401,   404,   409,   418,   420,   422,   430,   440,   441,   444,
     446,   450,   452,   454,   456,   458,   460,   464,   465,   468,
     470,   477,   479,   481,   485,   487,   491,   493,   497,   498,
     501,   502,   506,   507,   508,   510,   512,   514,   518,   519,
     523,   524,   528,   529,   533,   534,   538,   539,   543,   544,
     548,   549,   551,   553,   555,   559,   560,   562,   564,   566,
     568,   570,   574,   575,   577,   579,   583,   584,   586,   590,
     591,   593,   595,   599,   600,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   613,   616,   617,   619,   623,   624,
     627,   628,   632,   634,   636,   638,   642,   643,   645,   649,
     650,   653,   655,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   674,   675,   678,   679,
     680,   683,   687,   688,   689,   693,   694,   697,   699,   701,
     704,   706,   716,   717,   722,   729,   730
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "NUMERIC_LITERAL", "REGEX_LITERAL", "LBRACE", "RBRACE", "LPAREN",
  "RPAREN", "LBRACK", "RBRACK", "DOT", "SEMICOLON", "COMMA", "LT", "GT",
  "LE", "GE", "EQ", "NE", "STRICT_EQ", "STRICT_NE", "PLUS", "MINUS", "MUL",
  "MOD", "POWER", "INC", "DEC", "DIV", "DIV_ASSIGN", "LSHIFT", "RSHIFT",
  "URSHIFT", "BIT_AND", "BIT_OR", "BIT_XOR", "NOT", "BIT_NOT",
  "LOGICAL_AND", "LOGICAL_OR", "NULLISH_COALESCING", "CONDITIONAL",
  "COLON", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "POWER_ASSIGN", "ARROW", "SPREAD", "BREAK", "CASE", "CATCH", "CLASS",
  "CONST", "CONTINUE", "DEBUGGER", "DEFAULT", "DELETE", "DO", "ELSE",
  "EXPORT", "EXTENDS", "FINALLY", "FOR", "FUNCTION", "IF", "IMPORT", "IN",
  "INSTANCEOF", "FROM", "AS", "OF", "NEW", "RETURN", "SUPER", "SWITCH",
  "THIS", "THROW", "TRY", "TYPEOF", "VAR", "VOID", "WHILE", "WITH",
  "YIELD", "LET", "STATIC", "ENUM", "AWAIT", "TRUE_LITERAL",
  "FALSE_LITERAL", "NULL_LITERAL", "UPOSTFIX", "$accept", "Script",
  "statement_list_opt", "statement_list", "statement_list_item",
  "identifier_name", "statement", "optional_semicolon", "empty_statement",
  "block_statement", "variable_statement", "expression_statement",
  "if_statement", "iteration_statement", "do_while_statement",
  "while_statement", "for_statement", "for_in_statement",
  "for_of_statement", "for_init", "break_statement", "continue_statement",
  "return_statement", "with_statement", "switch_statement",
  "switch_case_list", "switch_case", "case_statement_list",
  "throw_statement", "try_statement", "catch_clause", "finally_clause",
  "debugger_statement", "function_declaration", "function_expression",
  "function_name_opt", "class_declaration", "class_body",
  "method_definition_list", "method_definition", "import_declaration",
  "import_specifier_list", "import_specifier", "export_declaration",
  "export_specifier_list", "export_specifier", "variable_declaration_list",
  "variable_declaration_list_inner", "variable_declaration",
  "expression_opt", "expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression",
  "exponentiation_expression", "unary_expression", "update_expression",
  "left_hand_side_expression", "new_expression", "call_expression",
  "member_expression", "arguments", "argument_list", "primary_expression",
  "object_expression", "property_list", "property", "property_name",
  "array_expression", "element_list", "arrow_function_expression",
  "arrow_parameter_list", "arrow_body", 0
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
     345,   346,   347,   348,   349,   350,   351
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   105,   106,   107,   108,   109,   109,   110,   110,
     110,   110,   110,   111,   112,   113,   114,   114,   115,   115,
     115,   116,   116,   116,   117,   118,   119,   120,   121,   122,
     122,   123,   123,   124,   124,   125,   126,   126,   126,   127,
     128,   129,   130,   131,   132,   132,   133,   133,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   140,   140,   140,   141,   141,   142,
     142,   143,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   155,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   158,   158,   158,   159,
     159,   159,   159,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   162,   163,   163,
     164,   164,   165,   165,   165,   165,   166,   166,   166,   167,
     167,   168,   168,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   170,   170,   171,   171,
     171,   172,   173,   173,   173,   174,   174,   175,   175,   175,
     176,   176,   177,   177,   177,   178,   178
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     3,     2,     2,     5,     7,     1,     1,
       1,     1,     1,     7,     5,     9,     7,     7,     7,     7,
       8,     0,     1,     1,     2,     2,     3,     5,     7,     0,
       2,     4,     3,     0,     2,     3,     3,     3,     4,     5,
       2,     2,     4,     4,     0,     1,     3,     5,     3,     0,
       2,     3,     4,     3,     7,     5,     7,     1,     3,     1,
       3,     2,     2,     2,     4,     5,     7,     1,     3,     1,
       3,     2,     2,     2,     1,     3,     1,     3,     0,     1,
       1,     3,     1,     1,     3,     3,     3,     3,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     1,     1,
       1,     2,     2,     2,     3,     2,     1,     4,     3,     2,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     3,     1,     3,
       2,     3,     1,     1,     1,     2,     3,     1,     3,     2,
       5,     3,     0,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,   224,   226,   225,   227,     0,   252,     0,    72,     0,
       0,     0,     0,     0,     0,    70,     0,     0,    70,    70,
       0,     0,     0,     0,   114,     0,     0,     0,   148,   235,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
     228,   229,   230,     0,     2,     4,     5,     7,    67,    56,
      57,    60,    58,    61,    78,    79,    80,    81,    82,    62,
      63,    59,    69,    64,    66,    65,    68,     8,   234,     9,
      11,    10,    70,    70,   150,   152,   158,   160,   162,   164,
     166,   168,   170,   175,   182,   186,   189,   193,   195,   205,
     208,   209,   210,   216,   232,   233,   153,     0,   224,   226,
     225,   236,    70,    26,    49,    13,    21,    70,    70,    14,
      34,    23,    17,    41,    44,    50,    24,    15,    16,    42,
      35,    36,    45,    47,    46,    32,   148,   235,    25,   223,
      51,    48,    37,    19,    38,    22,    53,    39,    20,    54,
      55,    40,   228,   229,   230,     0,   242,     0,   238,     0,
     224,     0,   114,     0,     0,   245,   247,     0,   224,     0,
     201,   205,   202,   199,   200,   204,   203,    71,    94,     0,
     146,   143,   144,    95,   111,   196,     0,     0,     0,     0,
     131,   132,   133,    91,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   235,   211,   210,    70,   149,     0,   215,
       0,    70,     3,     0,   198,   141,   197,     0,     0,   142,
       1,     6,    74,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,   207,     0,     0,     0,     0,   213,     0,     0,   212,
     255,   256,   251,    73,   237,   240,     0,    12,   243,   244,
      27,    13,    21,    28,    52,    34,    23,    41,    24,    15,
      16,    42,    32,    18,    43,    25,    33,    51,    48,    37,
      19,    38,    22,    53,    20,    29,    30,    31,   115,   231,
       0,     0,   246,   249,   119,     0,   116,     0,     0,     0,
     139,     0,   137,    70,     0,     0,    92,    93,   205,     0,
       0,     0,     0,     0,   123,   129,     0,   127,     0,   211,
     214,    96,   219,   221,     0,     0,   105,     0,     0,   106,
     107,     0,     0,   151,   161,     0,   163,   165,   167,   169,
     171,   172,   173,   174,   176,   177,   178,   179,   180,   181,
     183,   184,   185,   187,   188,   190,   192,   191,   194,   157,
     154,   155,   156,     0,   218,   239,   241,     0,   254,   248,
       0,     0,   147,   145,     0,     0,    70,     0,   134,   148,
       0,     0,     0,     0,     0,   112,   113,     0,    70,     0,
       0,     0,     0,   220,     0,     0,     0,   110,   108,     0,
       0,     0,   217,   250,   118,    54,   120,     0,   117,     0,
     140,     0,   135,   138,     0,     0,     0,     0,     0,     0,
      76,   125,   130,     0,   128,     0,   222,    99,     0,    84,
      97,   159,     0,     0,    70,    70,   148,     0,     0,     0,
       0,     0,     0,    70,    70,     0,     0,     0,   121,    83,
     136,     0,    87,    89,    86,    88,     0,    77,   124,   126,
      98,     0,     0,   100,   109,   122,     0,    90,     0,   103,
      85,   103,   102,   101,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    43,   145,    45,    46,   146,    47,   168,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,   305,
      59,    60,    61,    62,    63,   445,   463,   472,    64,    65,
     329,   330,    66,    67,    68,   186,    69,   296,   370,   406,
      70,   316,   317,    71,   301,   302,    72,   171,   172,   196,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     199,   324,    93,    94,   147,   148,   149,    95,   157,    96,
     154,   252
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -373
static const yytype_int16 yypact[] =
{
     876,    -4,  -373,  -373,  -373,   511,  1239,  1062,  -373,  1332,
    1332,  1332,  1332,  1332,  1332,    70,    92,   105,    70,    70,
    1332,   969,   202,    18,   112,   122,    41,   151,  1374,   143,
     167,  -373,  1374,   178,  1332,   105,  1332,   190,   201,   105,
    -373,  -373,  -373,   211,  -373,   876,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,    70,   126,  -373,  -373,    79,   183,   189,   195,
     206,   255,    14,   238,   171,   147,  -373,   232,  -373,   158,
    -373,   143,    83,  -373,  -373,  -373,  -373,  1467,    37,   224,
     240,  -373,    15,  -373,  -373,    92,   105,    23,    28,  -373,
    1332,   969,  -373,   202,  -373,  -373,    18,    90,   122,    41,
    -373,  -373,  -373,  -373,  -373,   151,  1104,    25,   167,   244,
    1374,   178,  1332,   105,  1332,   190,   201,  -373,   105,  -373,
    -373,  -373,   247,   256,   262,   226,  -373,    35,  -373,   263,
      -4,   554,   284,    62,   117,  -373,  -373,    34,  -373,  1374,
    -373,   153,  -373,  -373,  -373,  -373,  -373,  -373,  -373,    13,
     253,   294,  -373,  -373,  -373,  -373,   225,   307,  1374,   309,
    -373,  -373,  -373,    50,   304,   143,   143,  1374,   243,    70,
     311,   245,   151,  -373,   143,   148,    70,   300,  1197,  -373,
    1374,   126,   876,   -14,  -373,   294,  -373,  1374,  1374,   294,
    -373,  -373,  -373,  1374,  -373,  1332,  1374,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,
    -373,  -373,  1374,  1374,  1374,  1374,  -373,  1374,   783,  -373,
    -373,  -373,  -373,  -373,  -373,   690,  1374,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
     266,   315,  -373,  1374,  -373,  1374,  -373,  1374,   105,   312,
     246,    43,  -373,   126,   143,   308,    54,   300,   168,   160,
     178,   178,   127,   319,  -373,   250,    68,  -373,   322,  -373,
    -373,  -373,  -373,  -373,   165,   174,  -373,   318,   178,   264,
    -373,   197,   198,  -373,   183,   283,   189,   195,   206,   255,
      14,    14,    14,    14,   238,   238,   238,   238,   238,   238,
     171,   171,   171,   147,   147,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,    94,  -373,  -373,  -373,  1467,  -373,  -373,
     647,   324,  -373,  -373,  1374,   326,    -8,   307,  -373,  1374,
    1374,  1374,  1374,  1374,   257,  -373,  -373,   969,    70,   330,
     261,   311,   265,  -373,  1374,   328,   334,  -373,  -373,   969,
     969,  1374,  -373,  -373,  -373,   690,  -373,   143,  -373,   207,
    -373,   335,  -373,  -373,   327,   210,   220,   222,   241,  1374,
     277,  -373,  -373,   338,  -373,   339,  -373,  -373,   336,  -373,
    -373,  -373,   143,   178,    70,    70,  1374,   969,   969,   969,
     969,   242,   969,    70,    70,    27,   178,   178,  -373,  -373,
    -373,   337,  -373,  -373,  -373,  -373,   969,  -373,  -373,  -373,
    -373,  1374,   299,  -373,  -373,  -373,   969,  -373,    24,  -373,
    -373,  -373,   876,   876,  -373
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,  -373,   345,  -373,   -41,   100,   -20,   -10,  -373,   -31,
      -1,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -122,  -373,  -373,
    -373,    21,  -373,     3,  -373,  -373,     6,   -19,  -373,  -373,
    -373,  -373,   -38,  -373,  -373,   -23,   172,   -16,    58,  -372,
      -6,     5,  -373,  -373,   142,   141,   144,   140,   145,    60,
     -79,    63,   -42,    67,     4,  -373,   254,   -24,  -373,   -22,
     -81,  -373,  -373,  -373,  -373,   106,  -334,  -373,  -373,  -373,
    -373,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -245
static const yytype_int16 yytable[] =
{
     153,   176,   203,   194,   211,   195,   167,   414,   173,   174,
     246,   249,   156,   160,   162,   163,   164,   165,   166,   205,
     294,   180,   197,   209,   175,   181,   201,   183,   182,   167,
     225,   226,   227,   228,   198,   460,   407,   167,   204,   213,
     206,   327,   167,   254,   188,   189,   292,    97,   190,   293,
     255,   376,   328,     1,     2,     3,     4,   151,   377,     6,
     -27,     7,   212,   214,   451,   411,   250,   191,   -28,   471,
     -43,   432,   289,   -52,     9,    10,   390,   213,   295,    11,
      12,   461,   -12,   391,   167,   229,   230,   462,    97,    13,
      14,   176,   198,   185,   247,   169,   248,   173,   174,  -114,
     203,   194,   251,   195,   310,   311,   402,    17,   170,   213,
     184,    20,   180,   320,   175,   185,   181,   205,   152,   182,
     197,   215,   209,   216,   201,   380,    27,   290,    29,   381,
      31,   187,   291,    34,    35,    36,   204,   387,   206,    39,
     167,   213,   213,    40,    41,    42,   344,   345,   346,   347,
     348,   349,   198,   153,   158,     2,     3,     4,   151,   247,
     159,   248,     7,   158,     2,     3,     4,   151,   319,   159,
     195,     7,   303,   236,   237,   393,   200,   307,   238,   314,
     394,   312,   240,   241,   395,   202,   321,   240,   241,   213,
     242,   326,   353,   354,   325,   234,   235,   240,   241,   207,
     242,   331,   332,   323,   243,   244,   245,   399,   400,   177,
     208,   210,   213,   213,   243,   244,   245,   434,   333,   152,
     437,   335,   213,   310,   217,   213,   218,   192,   152,   193,
     438,    31,   439,   219,   253,   213,    27,   213,    29,   382,
      31,   363,   220,   383,    40,    41,    42,   359,   360,   361,
     362,   440,   456,    40,    41,    42,   213,   213,    16,    17,
     239,   366,   178,   161,   161,   161,   161,   161,   161,  -243,
     179,   231,   232,   233,   161,   221,   222,   223,   224,   385,
     386,   340,   341,   342,   343,  -244,    35,   288,   161,   -33,
     161,    39,   -29,   378,   350,   351,   352,   397,   369,   297,
     371,   -30,   372,   355,   356,   357,   358,   -31,   256,   298,
     300,   299,   304,   309,   315,   213,   313,   367,   368,   318,
     375,   374,   379,   388,   389,   392,   433,   396,   401,   410,
     328,   294,   419,   422,   423,   427,   250,   428,   425,   435,
     442,   436,   443,   444,   469,    44,   446,   466,   364,   473,
     398,   447,   408,   424,   413,   306,   373,   334,   336,   338,
     403,   365,   337,     0,   161,   339,   412,   420,   409,     0,
       0,     0,   251,   197,   415,   416,   417,   418,   421,   429,
     430,     0,     0,     0,     0,     0,   161,     0,   161,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   426,
       0,     0,   448,     0,     0,     0,   431,     0,     0,     0,
       0,     0,     0,   441,     0,   464,   465,   452,   453,   454,
     455,     0,   457,     0,   449,   450,     0,     0,     0,     0,
     197,   474,   474,   458,   459,     0,   467,   308,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,     0,     0,     0,   468,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
       0,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   100,     4,     5,   101,
       6,     0,     7,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
      11,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,     0,     0,     0,     0,     0,   257,   258,   259,
       0,     0,   101,   384,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   260,   103,   104,
     261,   262,   263,   264,   109,   265,   266,   112,   267,   114,
     115,   268,   269,   270,   271,   120,   121,   122,   123,   124,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   137,   284,   139,   140,   141,   285,   286,   287,
     257,   258,   259,     0,     0,   404,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   257,   258,   259,     0,     0,     0,     0,
     260,   103,   104,   261,   262,   263,   264,   109,   265,   266,
     112,   267,   114,   115,   268,   269,   270,   271,   120,   121,
     122,   123,   124,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   137,   284,   405,   140,   141,
     285,   286,   287,   260,   103,   104,   261,   262,   263,   264,
     109,   265,   266,   112,   267,   114,   115,   268,   269,   270,
     271,   120,   121,   122,   123,   124,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   137,   284,
     139,   140,   141,   285,   286,   287,   257,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,   103,   104,   261,
     262,   263,   264,   109,   265,   266,   112,   267,   114,   115,
     268,   269,   270,   271,   120,   121,   122,   123,   124,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   137,   284,   139,   140,   141,   285,   286,   287,     1,
       2,     3,     4,     5,     0,     6,     0,     7,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,    16,    17,    18,    19,     0,    20,    21,     0,
      22,     0,     0,    23,    24,    25,    26,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,     0,    39,     0,     0,     0,    40,
      41,    42,     1,     2,     3,     4,     5,     0,     6,     0,
       7,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,     0,     0,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,    17,    18,    19,     0,
      20,    21,     0,     0,     0,     0,    23,   152,    25,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     0,    39,     0,
       0,     0,    40,    41,    42,     1,     2,     3,     4,   151,
       0,     6,     0,     7,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,     0,     0,     0,     0,     1,     2,     3,
       4,   151,     0,     6,     0,     7,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     9,    10,
     152,     0,     0,    11,    12,     0,     0,     0,    27,     0,
      29,     0,    31,    13,    14,    34,     0,    36,     0,   -18,
       0,     0,     0,     0,     0,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    29,     0,    31,     0,     0,    34,     0,    36,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
       1,     2,     3,     4,   151,     0,     6,   322,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,     0,     0,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    14,     0,     0,
       0,     0,   150,     2,     3,     4,   151,     0,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     9,    10,   152,     0,     0,    11,    12,
       0,     0,     0,    27,     0,    29,     0,    31,    13,    14,
      34,     0,    36,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,   152,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    29,     0,    31,
       0,     0,    34,     0,    36,     0,     0,     0,     0,     0,
       0,     0,    40,    41,    42,   158,     2,     3,     4,   151,
       0,   159,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,     0,     0,     0,     0,     1,     2,     3,
       4,   151,     0,     6,     0,     7,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     9,    10,
     152,     0,     0,    11,    12,     0,     0,     0,    27,     0,
      29,     0,    31,    13,    14,    34,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    29,     0,    31,     0,     0,    34,     0,    36,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
       1,     2,     3,     4,     5,     0,     6,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,     0,     0,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    29,     0,    31,     0,     0,
      34,     0,    36,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42
};

static const yytype_int16 yycheck[] =
{
       6,    21,    33,    27,    45,    27,    14,   379,    18,    19,
      91,    92,     7,     9,    10,    11,    12,    13,    14,    35,
       7,    22,    28,    39,    20,    22,    32,     9,    22,    14,
      16,    17,    18,    19,     9,     8,   370,    14,    34,    15,
      36,    55,    14,     8,     3,     4,    12,    51,     7,    15,
      15,     8,    66,     3,     4,     5,     6,     7,    15,     9,
      45,    11,    72,    73,   436,    73,    97,    26,    45,    45,
      45,   405,    10,    45,    24,    25,     8,    15,    65,    29,
      30,    54,    45,    15,    14,    71,    72,    60,    51,    39,
      40,   111,     9,     3,    11,     3,    13,   107,   108,     9,
     131,   125,    97,   125,   185,   186,    12,    57,     3,    15,
      92,    61,   113,   194,   110,     3,   113,   133,    68,   113,
     126,    42,   138,    44,   130,    71,    76,    10,    78,    75,
      80,     9,    15,    83,    84,    85,   132,    10,   134,    89,
      14,    15,    15,    93,    94,    95,   225,   226,   227,   228,
     229,   230,     9,   159,     3,     4,     5,     6,     7,    11,
       9,    13,    11,     3,     4,     5,     6,     7,   192,     9,
     192,    11,   178,    26,    27,    10,     9,   183,    31,   189,
      15,   187,    29,    30,    10,     7,   196,    29,    30,    15,
      32,   201,   234,   235,   200,    24,    25,    29,    30,     9,
      32,   207,   208,   198,    46,    47,    48,    10,    10,     7,
       9,     0,    15,    15,    46,    47,    48,    10,   213,    68,
      10,   216,    15,   304,    41,    15,    37,    76,    68,    78,
      10,    80,    10,    38,     8,    15,    76,    15,    78,    71,
      80,   247,    36,    75,    93,    94,    95,   242,   243,   244,
     245,    10,    10,    93,    94,    95,    15,    15,    56,    57,
      28,   256,    60,     9,    10,    11,    12,    13,    14,    45,
      68,    33,    34,    35,    20,    20,    21,    22,    23,   310,
     311,   221,   222,   223,   224,    45,    84,     3,    34,    45,
      36,    89,    45,   303,   231,   232,   233,   328,   293,    46,
     295,    45,   297,   236,   237,   238,   239,    45,    45,    15,
       3,    86,     3,     9,     3,    15,    73,    51,     3,    74,
      74,     9,    14,     4,    74,     3,   407,     9,    45,     3,
      66,     7,    75,     3,    73,     7,   367,     3,    73,     4,
      63,    14,     4,     4,    45,     0,    10,    10,   248,   471,
     329,   432,   371,   391,   377,   183,   298,   215,   217,   219,
     367,   255,   218,    -1,   110,   220,   376,   387,   374,    -1,
      -1,    -1,   367,   379,   380,   381,   382,   383,   388,   399,
     400,    -1,    -1,    -1,    -1,    -1,   132,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,   433,    -1,    -1,    -1,   401,    -1,    -1,    -1,
      -1,    -1,    -1,   419,    -1,   446,   447,   437,   438,   439,
     440,    -1,   442,    -1,   434,   435,    -1,    -1,    -1,    -1,
     436,   472,   473,   443,   444,    -1,   456,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   466,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,     8,   309,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       3,     4,     5,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     3,
       4,     5,     6,     7,    -1,     9,    -1,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    56,    57,    58,    59,    -1,    61,    62,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    -1,    -1,    -1,    93,
      94,    95,     3,     4,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    -1,
      -1,    -1,    93,    94,    95,     3,     4,     5,     6,     7,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    24,    25,
      68,    -1,    -1,    29,    30,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    39,    40,    83,    -1,    85,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    24,    25,    68,    -1,    -1,    29,    30,
      -1,    -1,    -1,    76,    -1,    78,    -1,    80,    39,    40,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,     3,     4,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    24,    25,
      68,    -1,    -1,    29,    30,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    39,    40,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
       3,     4,     5,     6,     7,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    11,    14,    24,
      25,    29,    30,    39,    40,    53,    56,    57,    58,    59,
      61,    62,    64,    67,    68,    69,    70,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    89,
      93,    94,    95,    98,    99,   100,   101,   103,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   117,
     118,   119,   120,   121,   125,   126,   129,   130,   131,   133,
     137,   140,   143,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   169,   170,   174,   176,    51,     3,     4,
       5,     8,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    99,   102,   171,   172,   173,
       3,     7,    68,   147,   177,    12,   148,   175,     3,     9,
     161,   163,   161,   161,   161,   161,   161,    14,   104,     3,
       3,   144,   145,   104,   104,   161,   103,     7,    60,    68,
     107,   130,   133,     9,    92,     3,   132,     9,     3,     4,
       7,    26,    76,    78,   164,   166,   146,   147,     9,   167,
       9,   147,     7,   106,   161,   144,   161,     9,     9,   144,
       0,   101,   104,    15,   104,    42,    44,    41,    37,    38,
      36,    20,    21,    22,    23,    16,    17,    18,    19,    71,
      72,    33,    34,    35,    24,    25,    26,    27,    31,    28,
      29,    30,    32,    46,    47,    48,   167,    11,    13,   167,
     106,   148,   178,     8,     8,    15,    45,     3,     4,     5,
      53,    56,    57,    58,    59,    61,    62,    64,    67,    68,
      69,    70,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    89,    93,    94,    95,     3,    10,
      10,    15,    12,    15,     7,    65,   134,    46,    15,    86,
       3,   141,   142,   147,     3,   116,   143,   147,   163,     9,
     167,   167,   147,    73,   104,     3,   138,   139,    74,   164,
     167,   104,    10,   148,   168,   147,   104,    55,    66,   127,
     128,   147,   147,   148,   151,   148,   152,   153,   154,   155,
     156,   156,   156,   156,   157,   157,   157,   157,   157,   157,
     158,   158,   158,   159,   159,   160,   160,   160,   160,   148,
     148,   148,   148,   147,   102,   172,   148,    51,     3,   148,
     135,   148,   148,   145,     9,    74,     8,    15,   104,    14,
      71,    75,    71,    75,   163,   106,   106,    10,     4,    74,
       8,    15,     3,    10,    15,    10,     9,   106,   128,    10,
      10,    45,    12,   178,     8,    90,   136,   173,   134,   147,
       3,    73,   104,   142,   146,   147,   147,   147,   147,    75,
     103,   104,     3,    73,   139,    73,   148,     7,     3,   103,
     103,   148,   173,   167,    10,     4,    14,    10,    10,    10,
      10,   147,    63,     4,     4,   122,    10,   167,   106,   104,
     104,   146,   103,   103,   103,   103,    10,   103,   104,   104,
       8,    54,    60,   123,   106,   106,    10,   103,   147,    45,
     103,    45,   124,   124,   101
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
#line 123 "src/parser.y"
    { ast_root = create_script_node((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 127 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 4:
#line 129 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 5:
#line 133 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        if ((yyvsp[(1) - (1)].node) != NULL) nodelist_append((yyval.list), (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 6:
#line 138 "src/parser.y"
    { 
        if ((yyvsp[(2) - (2)].node) != NULL) nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
        (yyval.list) = (yyvsp[(1) - (2)].list); 
    ;}
    break;

  case 7:
#line 145 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 147 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 149 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 151 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 153 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 156 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 13:
#line 157 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("class")); ;}
    break;

  case 14:
#line 158 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("default")); ;}
    break;

  case 15:
#line 159 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("function")); ;}
    break;

  case 16:
#line 160 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("if")); ;}
    break;

  case 17:
#line 161 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("else")); ;}
    break;

  case 18:
#line 162 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("return")); ;}
    break;

  case 19:
#line 163 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("var")); ;}
    break;

  case 20:
#line 164 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("let")); ;}
    break;

  case 21:
#line 165 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("const")); ;}
    break;

  case 22:
#line 166 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("while")); ;}
    break;

  case 23:
#line 167 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("do")); ;}
    break;

  case 24:
#line 168 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("for")); ;}
    break;

  case 25:
#line 169 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("switch")); ;}
    break;

  case 26:
#line 170 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("case")); ;}
    break;

  case 27:
#line 171 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("break")); ;}
    break;

  case 28:
#line 172 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("continue")); ;}
    break;

  case 29:
#line 173 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("true")); ;}
    break;

  case 30:
#line 174 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("false")); ;}
    break;

  case 31:
#line 175 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("null")); ;}
    break;

  case 32:
#line 176 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("new")); ;}
    break;

  case 33:
#line 177 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("this")); ;}
    break;

  case 34:
#line 178 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("delete")); ;}
    break;

  case 35:
#line 179 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("in")); ;}
    break;

  case 36:
#line 180 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("instanceof")); ;}
    break;

  case 37:
#line 181 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("typeof")); ;}
    break;

  case 38:
#line 182 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("void")); ;}
    break;

  case 39:
#line 183 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("yield")); ;}
    break;

  case 40:
#line 184 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("await")); ;}
    break;

  case 41:
#line 185 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("export")); ;}
    break;

  case 42:
#line 186 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("import")); ;}
    break;

  case 43:
#line 187 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("super")); ;}
    break;

  case 44:
#line 188 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("extends")); ;}
    break;

  case 45:
#line 189 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("from")); ;}
    break;

  case 46:
#line 190 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("of")); ;}
    break;

  case 47:
#line 191 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("as")); ;}
    break;

  case 48:
#line 192 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("try")); ;}
    break;

  case 49:
#line 193 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("catch")); ;}
    break;

  case 50:
#line 194 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("finally")); ;}
    break;

  case 51:
#line 195 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("throw")); ;}
    break;

  case 52:
#line 196 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("debugger")); ;}
    break;

  case 53:
#line 197 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("with")); ;}
    break;

  case 54:
#line 198 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("static")); ;}
    break;

  case 55:
#line 199 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("enum")); ;}
    break;

  case 56:
#line 206 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 57:
#line 208 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 58:
#line 210 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 59:
#line 212 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:
#line 214 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 61:
#line 216 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 62:
#line 218 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 63:
#line 220 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:
#line 222 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 65:
#line 224 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:
#line 226 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 67:
#line 228 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 68:
#line 230 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 69:
#line 232 "src/parser.y"
    { (yyval.node) = NULL; /* 不实现，但需解析通过 */ ;}
    break;

  case 70:
#line 236 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 71:
#line 237 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 72:
#line 241 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 73:
#line 245 "src/parser.y"
    { (yyval.node) = create_block_statement((yyvsp[(2) - (3)].list)); ;}
    break;

  case 74:
#line 249 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 75:
#line 253 "src/parser.y"
    { (yyval.node) = create_expression_statement((yyvsp[(1) - (2)].node)); ;}
    break;

  case 76:
#line 257 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL); ;}
    break;

  case 77:
#line 259 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 78:
#line 265 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 79:
#line 267 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 80:
#line 269 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 81:
#line 271 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 82:
#line 273 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 83:
#line 277 "src/parser.y"
    { (yyval.node) = create_do_while_statement((yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node)); ;}
    break;

  case 84:
#line 281 "src/parser.y"
    { (yyval.node) = create_while_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 85:
#line 288 "src/parser.y"
    { (yyval.node) = create_for_statement((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node)); ;}
    break;

  case 86:
#line 293 "src/parser.y"
    { (yyval.node) = create_for_in_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 87:
#line 295 "src/parser.y"
    { (yyval.node) = create_for_in_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 88:
#line 300 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), false); ;}
    break;

  case 89:
#line 302 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), false); ;}
    break;

  case 90:
#line 304 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(4) - (8)].node), (yyvsp[(6) - (8)].node), (yyvsp[(8) - (8)].node), true); ;}
    break;

  case 91:
#line 309 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 92:
#line 311 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 93:
#line 313 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 94:
#line 319 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 95:
#line 323 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 96:
#line 327 "src/parser.y"
    { (yyval.node) = create_return_statement((yyvsp[(2) - (3)].node)); ;}
    break;

  case 97:
#line 331 "src/parser.y"
    { (yyval.node) = NULL; /* 暂不实现 */ ;}
    break;

  case 98:
#line 335 "src/parser.y"
    { (yyval.node) = create_switch_statement((yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].list)); ;}
    break;

  case 99:
#line 338 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 100:
#line 339 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 101:
#line 343 "src/parser.y"
    { (yyval.node) = create_switch_case((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list)); ;}
    break;

  case 102:
#line 345 "src/parser.y"
    { (yyval.node) = create_switch_case(NULL, (yyvsp[(3) - (3)].list)); ;}
    break;

  case 103:
#line 348 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 104:
#line 349 "src/parser.y"
    { if ((yyvsp[(2) - (2)].node)) nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 105:
#line 353 "src/parser.y"
    { (yyval.node) = create_throw_statement((yyvsp[(2) - (3)].node)); ;}
    break;

  case 106:
#line 357 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL); ;}
    break;

  case 107:
#line 359 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 108:
#line 361 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 109:
#line 365 "src/parser.y"
    { (yyval.node) = create_catch_clause(create_identifier_node((yyvsp[(3) - (5)].str_val)), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 110:
#line 369 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 111:
#line 373 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 112:
#line 379 "src/parser.y"
    { (yyval.node) = create_function_declaration(create_identifier_node((yyvsp[(2) - (4)].str_val)), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 113:
#line 383 "src/parser.y"
    { (yyval.node) = create_function_expression((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 114:
#line 386 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 115:
#line 387 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 116:
#line 391 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (3)].str_val)), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 117:
#line 393 "src/parser.y"
    { (yyval.node) = create_class_declaration(create_identifier_node((yyvsp[(2) - (5)].str_val)), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 118:
#line 397 "src/parser.y"
    { (yyval.node) = create_class_body((yyvsp[(2) - (3)].list)); ;}
    break;

  case 119:
#line 400 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 120:
#line 401 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 121:
#line 405 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.node) = create_method_definition((yyvsp[(1) - (3)].node), func_value, false); 
    ;}
    break;

  case 122:
#line 410 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (4)].node), func_value, true); 
    ;}
    break;

  case 123:
#line 419 "src/parser.y"
    { (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(2) - (3)].str_val)), NULL); ;}
    break;

  case 124:
#line 421 "src/parser.y"
    { (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), (yyvsp[(3) - (7)].list)); ;}
    break;

  case 125:
#line 423 "src/parser.y"
    { 
        NodeList *specs = nodelist_create();
        ASTNode *local = create_identifier_node((yyvsp[(2) - (5)].str_val));
        ASTNode *spec = create_import_specifier(NULL, local, true, false);
        nodelist_append(specs, spec);
        (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(4) - (5)].str_val)), specs); 
    ;}
    break;

  case 126:
#line 431 "src/parser.y"
    {
        NodeList *specs = nodelist_create();
        ASTNode *local = create_identifier_node((yyvsp[(4) - (7)].str_val));
        ASTNode *spec = create_import_specifier(NULL, local, false, true);
        nodelist_append(specs, spec);
        (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), specs);
    ;}
    break;

  case 127:
#line 440 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 128:
#line 441 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 129:
#line 445 "src/parser.y"
    { (yyval.node) = create_import_specifier(create_identifier_node((yyvsp[(1) - (1)].str_val)), create_identifier_node((yyvsp[(1) - (1)].str_val)), false, false); ;}
    break;

  case 130:
#line 447 "src/parser.y"
    { (yyval.node) = create_import_specifier(create_identifier_node((yyvsp[(1) - (3)].str_val)), create_identifier_node((yyvsp[(3) - (3)].str_val)), false, false); ;}
    break;

  case 131:
#line 451 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 132:
#line 453 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 133:
#line 455 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 134:
#line 457 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(3) - (4)].node), NULL, NULL, true); ;}
    break;

  case 135:
#line 459 "src/parser.y"
    { (yyval.node) = create_export_declaration(NULL, (yyvsp[(3) - (5)].list), NULL, false); ;}
    break;

  case 136:
#line 461 "src/parser.y"
    { (yyval.node) = create_export_declaration(NULL, (yyvsp[(3) - (7)].list), create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), false); ;}
    break;

  case 137:
#line 464 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 138:
#line 465 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 139:
#line 469 "src/parser.y"
    { (yyval.node) = create_export_specifier(create_identifier_node((yyvsp[(1) - (1)].str_val)), create_identifier_node((yyvsp[(1) - (1)].str_val))); ;}
    break;

  case 140:
#line 471 "src/parser.y"
    { (yyval.node) = create_export_specifier(create_identifier_node((yyvsp[(1) - (3)].str_val)), create_identifier_node((yyvsp[(3) - (3)].str_val))); ;}
    break;

  case 141:
#line 478 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_VAR, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 142:
#line 480 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_LET, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 143:
#line 482 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_CONST, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 144:
#line 486 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 145:
#line 488 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 146:
#line 492 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (1)].str_val)), NULL); ;}
    break;

  case 147:
#line 494 "src/parser.y"
    { (yyval.node) = create_variable_declarator(create_identifier_node((yyvsp[(1) - (3)].str_val)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 148:
#line 497 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 149:
#line 498 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 150:
#line 501 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 151:
#line 503 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_COMMA, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 152:
#line 506 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 153:
#line 507 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 154:
#line 509 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_ASSIGN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 155:
#line 511 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 156:
#line 513 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 157:
#line 515 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 158:
#line 518 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 159:
#line 520 "src/parser.y"
    { (yyval.node) = create_conditional_expression((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 160:
#line 523 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 161:
#line 525 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 162:
#line 528 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 163:
#line 530 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 164:
#line 533 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 165:
#line 535 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 166:
#line 538 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 167:
#line 540 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 168:
#line 543 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 169:
#line 545 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 170:
#line 548 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 171:
#line 550 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 172:
#line 552 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 173:
#line 554 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 174:
#line 556 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 175:
#line 559 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 176:
#line 561 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 177:
#line 563 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 178:
#line 565 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 179:
#line 567 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 180:
#line 569 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_IN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 181:
#line 571 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_INSTANCEOF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 182:
#line 574 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 183:
#line 576 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 184:
#line 578 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_RSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 185:
#line 580 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_URSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 186:
#line 583 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 187:
#line 585 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 188:
#line 587 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 189:
#line 590 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 190:
#line 592 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 191:
#line 594 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 192:
#line 596 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 193:
#line 599 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 194:
#line 601 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_POWER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 195:
#line 604 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 196:
#line 605 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DELETE, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 197:
#line 606 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 198:
#line 607 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_TYPEOF, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 199:
#line 608 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_INC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 200:
#line 609 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DEC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 201:
#line 610 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_PLUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 202:
#line 611 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_MINUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 203:
#line 612 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_BIT_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 204:
#line 613 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 205:
#line 616 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 206:
#line 618 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_INC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 207:
#line 620 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_DEC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 208:
#line 623 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 209:
#line 624 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 210:
#line 627 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 211:
#line 628 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (2)].node), NULL); ;}
    break;

  case 212:
#line 633 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 213:
#line 635 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 214:
#line 637 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].list)); ;}
    break;

  case 215:
#line 639 "src/parser.y"
    { (yyval.node) = create_call_expression(create_super_node(), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 216:
#line 642 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 217:
#line 644 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 218:
#line 646 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), false); ;}
    break;

  case 219:
#line 649 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 220:
#line 650 "src/parser.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 221:
#line 654 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 222:
#line 656 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 223:
#line 659 "src/parser.y"
    { (yyval.node) = create_this_node(); ;}
    break;

  case 224:
#line 660 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 225:
#line 661 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 226:
#line 662 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 227:
#line 663 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_REGEX, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 228:
#line 664 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_TRUE, pool_strdup("true")); ;}
    break;

  case 229:
#line 665 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_FALSE, pool_strdup("false")); ;}
    break;

  case 230:
#line 666 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NULL, pool_strdup("null")); ;}
    break;

  case 231:
#line 667 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 232:
#line 668 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 233:
#line 669 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 234:
#line 670 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 235:
#line 671 "src/parser.y"
    { (yyval.node) = create_super_node(); ;}
    break;

  case 236:
#line 674 "src/parser.y"
    { (yyval.node) = create_object_expression(nodelist_create()); ;}
    break;

  case 237:
#line 675 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 238:
#line 678 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 239:
#line 679 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 240:
#line 680 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 241:
#line 684 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 242:
#line 687 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 243:
#line 688 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 244:
#line 689 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 245:
#line 693 "src/parser.y"
    { (yyval.node) = create_array_expression(nodelist_create()); ;}
    break;

  case 246:
#line 694 "src/parser.y"
    { (yyval.node) = create_array_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 247:
#line 698 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 248:
#line 700 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 249:
#line 701 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 250:
#line 705 "src/parser.y"
    { (yyval.node) = create_arrow_function_expression((yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].node), ((yyvsp[(5) - (5)].node)->type != NODE_BLOCK_STATEMENT)); ;}
    break;

  case 251:
#line 707 "src/parser.y"
    {
        NodeList* params = nodelist_create();
        nodelist_append(params, create_identifier_node((yyvsp[(1) - (3)].str_val)));
        (yyval.node) = create_arrow_function_expression(params, (yyvsp[(3) - (3)].node), ((yyvsp[(3) - (3)].node)->type != NODE_BLOCK_STATEMENT));
    ;}
    break;

  case 252:
#line 716 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 253:
#line 718 "src/parser.y"
    { 
        (yyval.list) = nodelist_create(); 
        nodelist_append((yyval.list), create_identifier_node((yyvsp[(1) - (1)].str_val))); 
    ;}
    break;

  case 254:
#line 723 "src/parser.y"
    { 
        nodelist_append((yyvsp[(1) - (3)].list), create_identifier_node((yyvsp[(3) - (3)].str_val))); 
        (yyval.list) = (yyvsp[(1) - (3)].list); 
    ;}
    break;

  case 255:
#line 729 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 256:
#line 730 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3556 "build/parser.tab.c"
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


/* 辅助函数区 (移除 ASI 包装器) */

/* 注意: 'yylex' 现在直接由 lexer.re 提供。*/
/* yyerror 在 main.c 中定义 */
