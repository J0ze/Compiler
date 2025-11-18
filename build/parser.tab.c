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




/* Copy the first part of user declarations.  */
#line 3 "src/parser.y"

#include <stdio.h>
#include <string.h>
#include "common.h" 
#include "pool.h"

extern ParserState *scanner;
extern ASTNode *ast_root;

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
#line 20 "src/parser.y"
{
    char *str_val;
    struct ASTNode *node;
    NodeList *list;
}
/* Line 193 of yacc.c.  */
#line 314 "build/parser.tab.c"
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
#line 339 "build/parser.tab.c"

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
#define YYFINAL  262
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4510

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  355
/* YYNRULES -- Number of states.  */
#define YYNSTATES  742

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

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
      95,    96,    97,    98,    99,   100
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
     139,   141,   143,   145,   147,   149,   151,   153,   155,   157,
     159,   161,   163,   165,   167,   169,   171,   174,   177,   178,
     180,   182,   186,   190,   193,   196,   202,   210,   212,   214,
     216,   218,   220,   228,   234,   244,   252,   260,   268,   276,
     284,   292,   301,   310,   313,   316,   319,   320,   322,   324,
     327,   331,   334,   338,   342,   348,   356,   357,   360,   365,
     369,   370,   373,   377,   381,   385,   390,   396,   399,   402,
     407,   413,   419,   426,   432,   437,   443,   449,   456,   462,
     463,   465,   469,   475,   479,   480,   483,   487,   492,   497,
     503,   506,   511,   515,   521,   527,   534,   541,   549,   553,
     556,   561,   564,   568,   576,   582,   590,   592,   596,   598,
     602,   605,   608,   611,   616,   622,   630,   632,   636,   638,
     642,   645,   648,   651,   653,   657,   659,   663,   665,   667,
     669,   672,   676,   681,   683,   687,   689,   693,   696,   699,
     703,   708,   710,   714,   717,   719,   721,   725,   728,   730,
     734,   735,   737,   739,   743,   745,   747,   751,   755,   759,
     763,   766,   768,   772,   774,   780,   782,   786,   788,   792,
     794,   798,   800,   804,   806,   810,   812,   816,   820,   824,
     828,   830,   834,   838,   842,   846,   850,   854,   856,   860,
     864,   868,   870,   874,   878,   880,   884,   888,   892,   894,
     898,   900,   903,   906,   909,   912,   915,   918,   921,   924,
     927,   930,   932,   935,   938,   940,   942,   944,   947,   950,
     953,   957,   960,   965,   969,   973,   977,   981,   983,   988,
     992,   996,  1000,  1004,  1007,  1011,  1013,  1017,  1020,  1022,
    1024,  1026,  1028,  1030,  1032,  1034,  1036,  1040,  1042,  1044,
    1046,  1048,  1051,  1055,  1060,  1062,  1065,  1069,  1074,  1077,
    1081,  1083,  1087,  1091,  1096,  1102,  1109,  1114,  1116,  1118,
    1120,  1123,  1127,  1132,  1134,  1137,  1141,  1146,  1149,  1155,
    1159,  1166,  1171,  1172,  1174,  1176
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     102,     0,    -1,   103,    -1,    -1,   104,    -1,   105,    -1,
     104,   105,    -1,   109,    -1,   138,    -1,   141,    -1,   148,
      -1,   145,    -1,     3,    -1,   107,    -1,    57,    -1,    61,
      -1,    69,    -1,    70,    -1,    64,    -1,    75,    -1,    82,
      -1,    95,    -1,    58,    -1,    84,    -1,    63,    -1,    68,
      -1,    77,    -1,    55,    -1,    54,    -1,    59,    -1,    97,
      -1,    98,    -1,    99,    -1,    74,    -1,    78,    -1,    62,
      -1,    72,    -1,    73,    -1,    81,    -1,    83,    -1,    86,
      -1,    88,    -1,    65,    -1,    71,    -1,    76,    -1,    66,
      -1,    93,    -1,    94,    -1,    96,    -1,    80,    -1,    56,
      -1,    67,    -1,    79,    -1,    60,    -1,    85,    -1,    87,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,     3,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,    95,
      -1,    93,    -1,    94,    -1,    96,    -1,    86,    -1,    88,
      -1,   113,    -1,   114,    -1,   116,    -1,   127,    -1,   115,
      -1,   117,    -1,   125,    -1,   126,    -1,   129,    -1,   134,
      -1,   133,    -1,   111,    -1,   137,    -1,   128,    -1,   112,
      -1,     1,    15,    -1,     1,     9,    -1,    -1,    15,    -1,
      15,    -1,   108,    46,   109,    -1,     8,   103,     9,    -1,
     151,   110,    -1,   163,   110,    -1,    70,    10,   163,    11,
     109,    -1,    70,    10,   163,    11,   109,    64,   109,    -1,
     118,    -1,   119,    -1,   120,    -1,   121,    -1,   122,    -1,
      63,   109,    84,    10,   163,    11,   110,    -1,    84,    10,
     163,    11,   109,    -1,    68,    10,   124,    15,   162,    15,
     162,    11,   109,    -1,    68,    10,   179,    72,   163,    11,
     109,    -1,    68,    10,   151,    72,   163,    11,   109,    -1,
      68,    10,   123,    72,   163,    11,   109,    -1,    68,    10,
     179,    94,   163,    11,   109,    -1,    68,    10,   151,    94,
     163,    11,   109,    -1,    68,    10,   123,    94,   163,    11,
     109,    -1,    68,    88,    10,   179,    94,   163,    11,   109,
      -1,    68,    88,    10,   123,    94,   163,    11,   109,    -1,
      82,   154,    -1,    95,   154,    -1,    58,   154,    -1,    -1,
     151,    -1,   163,    -1,    54,   110,    -1,    54,   108,   110,
      -1,    59,   110,    -1,    59,   108,   110,    -1,    75,   162,
     110,    -1,    85,    10,   163,    11,   109,    -1,    77,    10,
     163,    11,     8,   130,     9,    -1,    -1,   130,   131,    -1,
      55,   163,    46,   132,    -1,    61,    46,   132,    -1,    -1,
     132,   105,    -1,    79,   163,   110,    -1,    80,   113,   135,
      -1,    80,   113,   136,    -1,    80,   113,   135,   136,    -1,
      56,    10,   154,    11,   113,    -1,    67,   113,    -1,    60,
     110,    -1,    69,   108,   183,   113,    -1,    69,    27,   108,
     183,   113,    -1,    92,    69,   108,   183,   113,    -1,    92,
      69,    27,   108,   183,   113,    -1,   108,    69,   108,   183,
     113,    -1,    69,   140,   183,   113,    -1,    69,    27,   140,
     183,   113,    -1,    92,    69,   140,   183,   113,    -1,    92,
      69,    27,   140,   183,   113,    -1,   108,    69,   140,   183,
     113,    -1,    -1,   108,    -1,    57,   108,   142,    -1,    57,
     108,    66,   164,   142,    -1,     8,   143,     9,    -1,    -1,
     143,   144,    -1,   189,   183,   113,    -1,    91,   189,   183,
     113,    -1,    27,   189,   183,   113,    -1,    91,    27,   189,
     183,   113,    -1,   189,    15,    -1,   189,    47,   164,    15,
      -1,    91,   189,    15,    -1,    91,   189,    47,   164,    15,
      -1,    89,   189,    10,    11,   113,    -1,    90,   189,    10,
     154,    11,   113,    -1,    91,    89,   189,    10,    11,   113,
      -1,    91,    90,   189,    10,   154,    11,   113,    -1,     7,
     183,   113,    -1,     7,    15,    -1,     7,    47,   164,    15,
      -1,    91,   113,    -1,    71,     4,   110,    -1,    71,     8,
     146,     9,    93,     4,   110,    -1,    71,   108,    93,     4,
     110,    -1,    71,    27,    96,   108,    93,     4,   110,    -1,
     147,    -1,   146,    16,   147,    -1,   106,    -1,   106,    96,
     108,    -1,    65,   114,    -1,    65,   138,    -1,    65,   141,
      -1,    65,    61,   163,   110,    -1,    65,     8,   149,     9,
     110,    -1,    65,     8,   149,     9,    93,     4,   110,    -1,
     150,    -1,   149,    16,   150,    -1,   106,    -1,   106,    96,
     106,    -1,    82,   152,    -1,    95,   152,    -1,    58,   152,
      -1,   153,    -1,   152,    16,   153,    -1,   154,    -1,   154,
      47,   164,    -1,   108,    -1,   155,    -1,   158,    -1,     8,
       9,    -1,     8,   156,     9,    -1,     8,   156,    16,     9,
      -1,   157,    -1,   156,    16,   157,    -1,   161,    -1,   189,
      46,   160,    -1,    53,   108,    -1,    12,    13,    -1,    12,
     159,    13,    -1,    12,   159,    16,    13,    -1,   160,    -1,
     159,    16,   160,    -1,   159,    16,    -1,   161,    -1,   154,
      -1,   154,    47,   164,    -1,    53,   108,    -1,   108,    -1,
     108,    47,   164,    -1,    -1,   163,    -1,   164,    -1,   163,
      16,   164,    -1,   165,    -1,   192,    -1,   179,    47,   164,
      -1,   179,    48,   164,    -1,   179,    49,   164,    -1,   179,
      33,   164,    -1,    86,   164,    -1,    86,    -1,    86,    27,
     164,    -1,   166,    -1,   166,    45,   164,    46,   164,    -1,
     167,    -1,   166,    43,   167,    -1,   168,    -1,   167,    42,
     168,    -1,   169,    -1,   168,    38,   169,    -1,   170,    -1,
     169,    39,   170,    -1,   171,    -1,   170,    37,   171,    -1,
     172,    -1,   171,    21,   172,    -1,   171,    22,   172,    -1,
     171,    23,   172,    -1,   171,    24,   172,    -1,   173,    -1,
     172,    17,   173,    -1,   172,    18,   173,    -1,   172,    19,
     173,    -1,   172,    20,   173,    -1,   172,    72,   173,    -1,
     172,    73,   173,    -1,   174,    -1,   173,    34,   174,    -1,
     173,    35,   174,    -1,   173,    36,   174,    -1,   175,    -1,
     174,    25,   175,    -1,   174,    26,   175,    -1,   176,    -1,
     175,    27,   176,    -1,   175,    32,   176,    -1,   175,    28,
     176,    -1,   177,    -1,   177,    29,   176,    -1,   178,    -1,
      62,   177,    -1,    83,   177,    -1,    81,   177,    -1,    30,
     177,    -1,    31,   177,    -1,    25,   177,    -1,    26,   177,
      -1,    41,   177,    -1,    40,   177,    -1,    88,   177,    -1,
     179,    -1,   179,    30,    -1,   179,    31,    -1,   180,    -1,
     181,    -1,   182,    -1,    74,   180,    -1,   182,   183,    -1,
     181,   183,    -1,    74,   180,   183,    -1,    76,   183,    -1,
     181,    12,   163,    13,    -1,   181,    14,   106,    -1,   181,
      14,    89,    -1,   181,    14,    90,    -1,   181,    14,    91,
      -1,   185,    -1,   182,    12,   163,    13,    -1,   182,    14,
     106,    -1,   182,    14,    89,    -1,   182,    14,    90,    -1,
     182,    14,    91,    -1,    10,    11,    -1,    10,   184,    11,
      -1,   164,    -1,   184,    16,   164,    -1,   184,    16,    -1,
      78,    -1,     3,    -1,     5,    -1,     4,    -1,     6,    -1,
      97,    -1,    98,    -1,    99,    -1,    10,   163,    11,    -1,
     186,    -1,   190,    -1,   139,    -1,    76,    -1,     8,     9,
      -1,     8,   187,     9,    -1,     8,   187,    16,     9,    -1,
     188,    -1,    53,   164,    -1,   187,    16,   188,    -1,   187,
      16,    53,   164,    -1,   187,    16,    -1,   189,    46,   164,
      -1,   106,    -1,   106,    47,   164,    -1,   189,   183,   113,
      -1,    27,   189,   183,   113,    -1,    89,   189,    10,    11,
     113,    -1,    90,   189,    10,   106,    11,   113,    -1,    92,
     189,   183,   113,    -1,   106,    -1,     4,    -1,     5,    -1,
      12,    13,    -1,    12,   191,    13,    -1,    12,   191,    16,
      13,    -1,   164,    -1,    53,   164,    -1,   191,    16,   164,
      -1,   191,    16,    53,   164,    -1,   191,    16,    -1,    10,
     193,    11,    52,   194,    -1,   108,    52,   194,    -1,    92,
      10,   193,    11,    52,   194,    -1,    92,   108,    52,   194,
      -1,    -1,   159,    -1,   113,    -1,   164,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   128,   129,   132,   137,   144,   145,   146,
     147,   148,   151,   152,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   235,   240,   247,   248,
     251,   254,   258,   262,   266,   270,   272,   276,   277,   278,
     279,   280,   283,   287,   291,   295,   297,   299,   303,   305,
     307,   309,   311,   315,   321,   327,   335,   336,   337,   340,
     342,   346,   348,   352,   356,   360,   364,   365,   368,   370,
     374,   375,   378,   382,   384,   386,   390,   394,   397,   402,
     404,   406,   408,   410,   414,   416,   418,   420,   422,   426,
     427,   430,   432,   436,   440,   441,   444,   449,   454,   459,
     464,   466,   468,   470,   472,   478,   486,   492,   500,   505,
     507,   509,   518,   520,   522,   529,   538,   539,   542,   544,
     548,   550,   552,   554,   556,   558,   562,   563,   566,   568,
     574,   576,   578,   582,   584,   588,   590,   594,   596,   598,
     602,   604,   606,   610,   612,   616,   621,   623,   627,   629,
     631,   635,   637,   639,   643,   644,   645,   647,   651,   652,
     656,   657,   660,   661,   665,   666,   667,   669,   671,   673,
     675,   677,   679,   683,   684,   688,   689,   693,   694,   698,
     699,   703,   704,   708,   709,   713,   714,   716,   718,   720,
     724,   725,   727,   729,   731,   733,   735,   739,   740,   742,
     744,   748,   749,   751,   755,   756,   758,   760,   764,   765,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     779,   782,   783,   785,   789,   790,   793,   794,   797,   799,
     801,   803,   805,   807,   809,   811,   813,   817,   818,   820,
     822,   824,   826,   830,   831,   834,   836,   838,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
     853,   856,   857,   858,   861,   862,   864,   865,   867,   870,
     872,   877,   881,   887,   893,   899,   907,   915,   916,   917,
     920,   921,   922,   925,   927,   929,   931,   933,   936,   938,
     944,   946,   955,   956,   959,   960
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "NUMERIC_LITERAL", "REGEX_LITERAL", "PRIVATE_IDENTIFIER", "LBRACE",
  "RBRACE", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "DOT", "SEMICOLON",
  "COMMA", "LT", "GT", "LE", "GE", "EQ", "NE", "STRICT_EQ", "STRICT_NE",
  "PLUS", "MINUS", "MUL", "MOD", "POWER", "INC", "DEC", "DIV",
  "DIV_ASSIGN", "LSHIFT", "RSHIFT", "URSHIFT", "BIT_AND", "BIT_OR",
  "BIT_XOR", "NOT", "BIT_NOT", "LOGICAL_AND", "LOGICAL_OR",
  "NULLISH_COALESCING", "CONDITIONAL", "COLON", "ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "POWER_ASSIGN", "ARROW", "SPREAD", "BREAK",
  "CASE", "CATCH", "CLASS", "CONST", "CONTINUE", "DEBUGGER", "DEFAULT",
  "DELETE", "DO", "ELSE", "EXPORT", "EXTENDS", "FINALLY", "FOR",
  "FUNCTION", "IF", "IMPORT", "IN", "INSTANCEOF", "NEW", "RETURN", "SUPER",
  "SWITCH", "THIS", "THROW", "TRY", "TYPEOF", "VAR", "VOID", "WHILE",
  "WITH", "YIELD", "ENUM", "AWAIT", "GET", "SET", "STATIC", "ASYNC",
  "FROM", "OF", "LET", "AS", "TRUE_LITERAL", "FALSE_LITERAL",
  "NULL_LITERAL", "UPOSTFIX", "$accept", "Script", "statement_list_opt",
  "statement_list", "statement_list_item", "identifier_name",
  "keyword_identifier", "binding_identifier", "statement",
  "optional_semicolon", "empty_statement", "labelled_statement",
  "block_statement", "variable_statement", "expression_statement",
  "if_statement", "iteration_statement", "do_while_statement",
  "while_statement", "for_statement", "for_in_statement",
  "for_of_statement", "for_declaration", "for_init", "break_statement",
  "continue_statement", "return_statement", "with_statement",
  "switch_statement", "switch_case_list", "switch_case",
  "case_statement_list", "throw_statement", "try_statement",
  "catch_clause", "finally_clause", "debugger_statement",
  "function_declaration", "function_expression", "function_name_opt",
  "class_declaration", "class_body", "method_definition_list",
  "method_definition", "import_declaration", "import_specifier_list",
  "import_specifier", "export_declaration", "export_specifier_list",
  "export_specifier", "variable_declaration_list",
  "variable_declaration_list_inner", "variable_declaration",
  "binding_pattern", "object_binding_pattern", "binding_property_list",
  "binding_property", "array_binding_pattern", "binding_element_list",
  "binding_element", "single_name_binding", "expression_opt", "expression",
  "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   112,   113,   114,   115,   116,   116,   117,   117,   117,
     117,   117,   118,   119,   120,   121,   121,   121,   122,   122,
     122,   122,   122,   123,   123,   123,   124,   124,   124,   125,
     125,   126,   126,   127,   128,   129,   130,   130,   131,   131,
     132,   132,   133,   134,   134,   134,   135,   136,   137,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   145,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     155,   155,   155,   156,   156,   157,   157,   157,   158,   158,
     158,   159,   159,   159,   160,   160,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   165,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   171,   171,   171,
     172,   172,   172,   172,   172,   172,   172,   173,   173,   173,
     173,   174,   174,   174,   175,   175,   175,   175,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   178,   178,   178,   179,   179,   180,   180,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   182,   182,   182,
     182,   182,   182,   183,   183,   184,   184,   184,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   186,   186,   186,   187,   187,   187,   187,   187,   188,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   189,
     190,   190,   190,   191,   191,   191,   191,   191,   192,   192,
     192,   192,   193,   193,   194,   194
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     1,
       1,     3,     3,     2,     2,     5,     7,     1,     1,     1,
       1,     1,     7,     5,     9,     7,     7,     7,     7,     7,
       7,     8,     8,     2,     2,     2,     0,     1,     1,     2,
       3,     2,     3,     3,     5,     7,     0,     2,     4,     3,
       0,     2,     3,     3,     3,     4,     5,     2,     2,     4,
       5,     5,     6,     5,     4,     5,     5,     6,     5,     0,
       1,     3,     5,     3,     0,     2,     3,     4,     4,     5,
       2,     4,     3,     5,     5,     6,     6,     7,     3,     2,
       4,     2,     3,     7,     5,     7,     1,     3,     1,     3,
       2,     2,     2,     4,     5,     7,     1,     3,     1,     3,
       2,     2,     2,     1,     3,     1,     3,     1,     1,     1,
       2,     3,     4,     1,     3,     1,     3,     2,     2,     3,
       4,     1,     3,     2,     1,     1,     3,     2,     1,     3,
       0,     1,     1,     3,     1,     1,     3,     3,     3,     3,
       2,     1,     3,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     1,     1,     1,     2,     2,     2,
       3,     2,     4,     3,     3,     3,     3,     1,     4,     3,
       3,     3,     3,     2,     3,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     3,     4,     1,     2,     3,     4,     2,     3,
       1,     3,     3,     4,     5,     6,     4,     1,     1,     1,
       2,     3,     4,     1,     2,     3,     4,     2,     5,     3,
       6,     4,     0,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   309,   311,   310,   312,     0,   352,     0,    90,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    88,
      88,     0,     0,     0,     0,   149,     0,     0,     0,   220,
     320,     0,   308,     0,     0,     0,     0,     0,     0,     0,
     231,    70,    61,    62,    63,    64,    66,    67,    65,    68,
     313,   314,   315,     0,     2,     0,     5,     0,     7,    82,
      85,    71,    72,    75,    73,    76,    97,    98,    99,   100,
     101,    77,    78,    74,    84,    79,    81,    80,    83,     8,
     319,     9,    11,    10,    88,    88,   222,   224,   233,   235,
     237,   239,   241,   243,   245,   250,   257,   261,   264,   268,
     270,   281,   284,   285,   286,   297,   317,   318,   225,    87,
      86,   309,   311,   310,   321,     0,     0,    88,    27,    50,
      14,    22,    88,    88,    15,    35,     0,    18,    42,    45,
      51,    25,    16,    17,    43,    36,    37,    33,   220,   320,
      26,   308,    52,    49,    38,    20,    39,    23,    54,   231,
      55,    41,    56,    57,    58,    59,    46,    47,    21,    48,
     313,   314,   315,     0,   330,    13,     0,   324,     0,     0,
       0,     0,   149,    64,    65,   197,   215,   198,   199,   353,
     211,   214,     0,     0,     0,   340,     0,     0,   343,     0,
       0,    69,     0,     0,   276,   281,   277,   274,   275,   279,
     278,    60,    89,    70,    64,    88,   119,     0,     0,     0,
     197,   192,   193,   195,    88,   121,   138,   271,     0,     0,
       0,     0,     0,     0,     0,   180,   181,   182,   116,     0,
     149,     0,     0,     0,    88,     0,     0,     0,     0,   320,
     287,   286,    88,   221,     0,   291,     0,    88,     0,     0,
     273,   190,   272,     0,     0,     0,   230,   280,   352,   149,
       0,   191,     1,     6,     0,     0,   149,    93,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   282,   283,     0,     0,     0,
       0,     0,     0,   289,     0,     0,   288,    12,   338,   339,
      28,    14,    22,    29,    53,    35,    24,    42,    25,    16,
      17,    43,    33,    19,    44,    26,    34,    52,    49,    38,
      20,    39,    23,    54,    40,    41,    56,    57,    58,    59,
      46,    47,    21,    48,    30,    31,    32,   337,     0,   325,
       0,     0,    12,    16,    40,    41,    61,    62,    64,    21,
       0,    92,     0,   322,   328,     0,     0,   321,     0,    59,
     218,     0,   203,   205,     0,   340,     0,     0,   217,   149,
     150,   149,     0,   149,     0,   213,   316,     0,    56,    57,
      59,   344,   341,   347,   120,   154,     0,   151,   200,     0,
       0,   208,   197,     0,     0,   122,     0,   188,     0,   186,
      88,     0,     0,     0,     0,     0,     0,    65,     0,     0,
     117,   118,   281,     0,     0,     0,     0,     0,     0,   172,
     178,     0,   176,     0,     0,   287,   290,   123,   303,   305,
       0,     0,   132,     0,     0,   133,   134,     0,     0,   232,
       0,   149,     0,     0,     0,    91,   354,   355,   349,     0,
       0,   223,   236,     0,   238,   240,   242,   244,   246,   247,
     248,   249,   251,   252,   253,   254,   255,   256,   258,   259,
     260,   262,   263,   265,   267,   266,   269,   229,   226,   227,
     228,     0,    56,    57,    58,   293,     0,    56,    57,    58,
     299,     0,     0,     0,     0,   331,   323,     0,   326,   329,
     332,   207,   201,     0,     0,   217,   209,   213,   149,   219,
     216,   212,     0,   342,     0,   345,     0,     0,   207,     0,
     194,   196,     0,     0,    88,     0,   183,     0,     0,     0,
       0,   115,   113,   114,     0,     0,   220,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,   139,   144,
       0,     0,     0,     0,     0,    88,   304,   307,     0,     0,
     137,   135,     0,     0,     0,     0,     0,     0,     0,   351,
       0,     0,     0,   292,   298,   333,     0,     0,   336,   327,
     202,   204,   206,   210,   348,   346,     0,   153,     0,    56,
      57,    58,   155,     0,   152,     0,   189,     0,   184,   187,
       0,     0,     0,     0,     0,     0,     0,     0,   115,   113,
     114,     0,     0,   140,   145,    95,   179,     0,   177,     0,
     174,   306,   126,     0,   103,   124,     0,     0,     0,   141,
     146,   143,   148,   234,   334,     0,   169,     0,     0,     0,
       0,     0,     0,    56,    57,   171,     0,   160,     0,     0,
      88,    88,     0,     0,   220,     0,     0,     0,     0,     0,
       0,     0,    88,    88,     0,     0,   350,   142,   147,   335,
       0,   168,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,   156,   102,   185,   107,   110,     0,   106,   109,
     105,   108,     0,     0,    96,   173,   175,   125,     0,     0,
     127,   136,   170,   158,     0,     0,     0,     0,     0,     0,
     157,   161,     0,   112,   111,     0,   130,   164,     0,   159,
       0,     0,   163,   104,   130,     0,   165,   166,     0,     0,
     131,   167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   163,    55,    56,   347,   165,   187,    58,   206,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   418,   419,    71,    72,    73,    74,    75,   674,
     710,   735,    76,    77,   445,   446,    78,    79,    80,   232,
      81,   397,   526,   602,    82,   431,   432,    83,   408,   409,
      84,   211,   212,   176,   177,   371,   372,   178,   179,   180,
     181,   242,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   245,   440,   105,   106,   166,   167,   168,   107,
     189,   108,   183,   458
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -542
static const yytype_int16 yypact[] =
{
    1349,   186,   187,  -542,  -542,  -542,  1448,  3926,  3538,  -542,
    4217,  4217,  4217,  4217,  4217,  4217,     5,   852,   968,     5,
      57,  4217,  1943,   300,    20,   381,    53,  1085,  1040,  4314,
     105,   109,  -542,  4314,   142,  4217,   968,  4217,   171,   197,
    3247,  4217,  -542,  -542,  -542,  1990,  -542,  -542,   968,  -542,
    -542,  -542,  -542,   235,  -542,  1249,  -542,    15,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,    57,   294,  -542,  -542,   226,   209,
     193,   216,   293,   457,   225,   462,   434,   233,  -542,   312,
    -542,   295,  -542,   408,   436,  -542,  -542,  -542,  -542,  -542,
    -542,   302,   310,   328,  -542,  2910,  4314,   714,  -542,  -542,
     852,   968,  1962,   178,  -542,  4217,  1745,  -542,   300,  -542,
    -542,    20,   381,    53,  1085,  -542,  -542,  1040,  3441,    59,
     109,   305,  4314,   142,  4217,   968,  4217,   171,   197,  3344,
    -542,  4023,  2767,  2864,    64,  2428,    88,   158,   397,   177,
     313,   418,   485,   368,    36,  -542,   231,  -542,    61,  2040,
    3635,   852,   788,  2176,  -542,   159,   340,  -542,  -542,   385,
    -542,  -542,    46,   399,  2137,  -542,  4314,   180,  -542,    74,
    4314,  -542,   343,   370,  -542,   480,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,    57,  -542,    48,  2525,   774,
    -542,   403,  -542,   384,    57,  -542,  -542,  -542,   108,   363,
    3007,  4314,  1116,   386,   394,  -542,  -542,  -542,  3732,   443,
     852,   105,   105,  4314,    57,  3007,   372,   389,  1040,  -542,
     105,   390,    57,   499,  4120,  -542,  4314,   294,  1844,    25,
    -542,   403,  -542,  4314,  4314,  4314,  -542,  -542,  1105,  2061,
     432,   403,  -542,  -542,  1943,  4411,   852,  -542,  4314,  -542,
    4217,  4314,  4217,  4217,  4217,  4217,  4217,  4217,  4217,  4217,
    4217,  4217,  4217,  4217,  4217,  4217,  4217,  4217,  4217,  4217,
    4217,  4217,  4217,  4217,  4217,  -542,  -542,  4314,  4314,  4314,
    4314,  4314,  3053,  -542,  4314,  3150,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,   105,  -542,
     506,   509,   478,  2061,   482,   483,   101,   121,   143,   490,
     105,  -542,  4314,  -542,  2234,  4314,   142,   150,  4314,  2910,
     498,   304,  -542,  -542,   146,   207,  4314,   126,  -542,   852,
    -542,  2158,  4314,   852,  4314,  1105,  -542,   494,  2910,  2910,
    2910,  -542,  -542,  3829,  -542,  -542,  4314,  -542,  -542,   852,
     491,  -542,   498,   968,  4314,  -542,   537,   452,   318,  -542,
     294,   852,   105,  2253,   852,   968,   968,   968,   -28,   534,
      71,   499,    55,   927,   105,   105,   142,   142,   210,  -542,
     454,   346,  -542,   852,   552,  -542,  -542,  -542,  -542,  -542,
     241,   289,  -542,   547,   142,   492,  -542,   320,   329,  -542,
     551,   852,   105,   105,  4411,  -542,  -542,  -542,  -542,   105,
     105,  -542,   209,   512,   193,   216,   293,   457,   225,   225,
     225,   225,   462,   462,   462,   462,   462,   462,   434,   434,
     434,   233,   233,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,   303,  -542,  -542,  -542,  -542,   350,  -542,  -542,  -542,
    -542,   142,   553,  3007,   142,  -542,  -542,  4314,  -542,  -542,
    -542,   180,  -542,  2622,  3926,   180,  -542,  3494,   852,  -542,
    -542,  -542,  4411,  -542,  4314,  -542,  2331,   555,  -542,  1105,
    -542,  -542,  4314,  3007,    19,  3007,  -542,   105,   852,   105,
     105,   189,   189,   189,  4314,  4314,  4314,  4314,  4314,  4314,
    4314,   968,   968,   968,   473,   476,   142,   142,  -542,  -542,
    1943,   852,   481,  3007,   484,    57,  -542,  4314,   563,   968,
    -542,  -542,  1943,  1943,   528,   105,   105,   142,   142,  -542,
     142,   142,  4314,  -542,  -542,  -542,   142,   570,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,   252,  -542,  2910,  2910,
    2910,  2719,  -542,   286,  -542,   354,  -542,   578,  -542,  -542,
     105,   356,   362,   571,   364,   410,   419,   421,  -542,  -542,
    -542,  4314,  4314,  -542,  -542,   521,  -542,   583,  -542,   584,
    -542,  -542,  -542,   579,  -542,  -542,  4411,   142,   142,  -542,
    -542,  -542,  -542,  -542,  -542,   142,  -542,  4314,   142,   105,
     581,   585,  2910,  2910,  2910,  -542,   292,  -542,  4314,   142,
      57,    57,  1943,  1943,  4314,  1943,  1943,  1943,  1943,   427,
     429,  1943,    57,    57,    69,   142,  -542,  -542,  -542,  -542,
     574,  -542,   142,   586,   968,   105,   588,   590,  -542,  4314,
     142,   591,  -542,  -542,  -542,  -542,  -542,   592,  -542,  -542,
    -542,  -542,  1943,  1943,  -542,  -542,  -542,  -542,  4314,   561,
    -542,  -542,  -542,  -542,   142,   597,   142,   598,   968,   596,
    -542,  -542,  1943,  -542,  -542,    27,  -542,  -542,   142,  -542,
     142,   601,  -542,  -542,  -542,  1547,  -542,  -542,   142,  1646,
    -542,  -542
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -542,  -542,   613,  -542,   -54,    33,  -542,     0,    42,    90,
    -542,  -542,    -2,     1,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,   194,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -133,  -542,  -542,  -542,   173,  -542,     8,  -542,  -201,
      10,    89,  -542,  -542,  -542,  -542,    56,  -542,  -542,    87,
     398,   -10,   222,    41,  -542,  -542,   114,  -542,  -130,  -338,
    -166,  -541,   208,   525,  -542,  -542,   358,   357,   359,   365,
     355,   245,   223,   253,   254,   234,    39,  -542,   954,   -24,
    -542,   -19,   501,  -542,  -542,  -542,  -542,   267,   468,  -542,
    -542,  -542,   375,  -452
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -340
static const yytype_int16 yytable[] =
{
      57,   263,   579,   373,   240,   613,    57,   175,   201,   241,
     193,   193,   193,   193,   193,   193,   205,   207,   210,   214,
     202,   193,   218,   224,   225,   231,   251,   237,   193,   425,
     228,   226,   249,   227,   202,   193,   210,   193,   261,   164,
     377,   193,   373,   268,   544,   260,  -337,   521,   210,   194,
     196,   197,   198,   199,   200,    57,   395,   386,   453,   213,
     217,   264,   268,   233,   219,   460,   545,   265,   -44,   244,
     594,   244,   202,   734,   250,   -44,   252,   213,   707,   377,
     257,   443,  -337,   362,   266,   295,   296,   392,   297,   213,
     393,   191,   444,   203,    42,    43,    44,   204,    46,    47,
     174,    49,   298,   299,   300,   -44,   -44,   365,   229,   215,
     216,   -56,   607,   240,   396,   244,   -63,   205,   241,   246,
     207,   210,   214,   697,   708,   193,   218,   549,   224,   225,
     709,   -57,   231,   -63,   237,   251,   226,   193,   227,   516,
     -66,   249,   517,   547,   193,   210,   193,   -56,   261,   550,
     248,   193,   453,   -59,   264,   260,   244,   -66,   210,  -200,
     265,  -200,   213,  -200,   217,   548,  -200,   -57,   219,   370,
     175,   378,   380,   260,   267,   269,   592,   383,   425,   521,
     453,   253,   460,   250,   676,   252,   213,   -53,   -53,   -59,
     257,   592,   514,   202,   -53,   109,   -60,  -200,   -60,   213,
     -60,   110,   164,   -60,  -195,  -195,   382,   254,   370,   402,
     -67,   265,   215,   216,   435,   182,  -208,   164,  -208,   241,
    -208,   560,   412,  -208,   -53,   -53,   268,   -67,   383,   -68,
     424,   273,   265,   -60,   -60,   262,   404,   243,   193,   -60,
     363,   247,   280,   281,   282,   283,   -68,   364,    57,   383,
     576,   272,   566,   407,  -208,   274,   -60,   567,   402,   452,
     291,   292,   244,   456,   218,   293,   459,   646,   430,   270,
     193,   271,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   394,   244,   284,   285,   647,
     568,   657,   244,   201,   405,   268,   455,   688,   220,   202,
     268,   -12,   -12,   512,   -34,   -34,   583,   576,   -12,   268,
     513,   -34,   -30,   -30,   429,   295,   296,   534,   297,   -30,
     275,   572,   437,   658,   535,   495,   268,   442,   500,   689,
     573,   294,   298,   299,   300,   268,   243,   373,   -12,   -12,
     247,   -34,   -34,   452,   -60,   562,  -338,    17,    18,   -30,
     -30,   221,   563,   584,   510,   660,   268,   662,   511,   222,
     268,   -60,   268,   663,  -339,   665,   515,   361,   268,   380,
     268,   380,    36,   380,   201,   402,   191,   384,   203,    42,
      43,    44,   223,    46,    47,    48,    49,   164,   182,   528,
     201,   385,   304,   210,   305,   208,   251,   261,   230,   209,
     387,   537,   381,   539,   540,   210,   210,   210,   244,   403,
     301,   666,   302,   193,   558,   559,   268,   -31,   -31,   410,
     667,   404,   668,   564,   -31,   268,   421,   268,   702,   383,
     703,   428,   570,   268,   213,   268,   244,   406,   304,   -65,
     305,   575,   456,   423,   441,   413,   541,   542,   543,   289,
     290,   447,   448,   414,   -31,   -31,   -65,   191,   433,   203,
      42,    43,    44,   204,    46,    47,   174,    49,   276,   277,
     278,   279,   434,   191,   454,   203,    42,    43,    44,   204,
      46,    47,   174,    49,   -32,   -32,   286,   287,   288,   585,
     536,   -32,   588,   472,   473,   474,   475,   476,   477,   491,
     295,   296,   496,   370,   175,   268,   502,   402,   380,   503,
     456,   468,   469,   470,   471,   483,   484,   485,   486,   402,
     -60,   -32,   -32,   188,   -69,   -70,   587,   529,   610,   478,
     479,   480,   -65,   481,   482,   382,   522,   532,   533,   546,
     561,   210,   210,   210,   623,   624,   565,   569,   582,   444,
     218,   626,   574,   395,   586,   256,   606,   621,   407,   210,
     622,   632,   218,   218,   627,   639,   640,   629,   641,   642,
     636,   645,   661,   348,   644,   671,   664,   672,   673,   712,
     675,   683,   618,   619,   620,   684,   430,   714,   717,   655,
     718,   739,   625,   722,   303,   306,   721,   726,   728,   730,
     633,   732,   738,    54,   634,   635,   604,   554,   571,   628,
     350,   351,   609,   360,   608,   530,   420,   591,   462,   464,
     467,   508,   465,   450,   456,   677,   678,   374,     0,   466,
       0,   349,     0,   679,     0,     0,   681,     0,     0,     0,
       0,     0,     0,     0,     0,   630,     0,   692,     0,     0,
       0,     0,   218,   218,     0,   218,   218,   218,   218,   366,
       0,   218,     0,   711,   256,     0,   400,     0,     0,     0,
     713,   740,     0,     0,   210,   740,     0,     0,   720,     0,
       0,     0,     0,     0,     0,   188,     0,     0,     0,     0,
       0,     0,   218,   218,   695,   696,     0,   698,   699,   700,
     701,   391,   727,   704,   729,     0,     0,   201,   210,     0,
       0,     0,   218,   -28,   -28,   715,   736,     0,   737,   202,
     -28,     0,   426,   427,     0,    57,   741,     0,     0,    57,
     605,   436,     0,     0,   723,   724,     0,     0,     0,     0,
     693,   694,   611,   612,   243,   614,   615,   616,   617,   731,
     -28,   -28,   705,   706,   733,     0,     0,     0,     0,   439,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     449,     0,   208,     0,     0,     0,   209,   401,     0,     0,
     457,   201,     0,   461,     0,     0,   463,     0,     0,     0,
     191,     0,   203,    42,    43,    44,   204,    46,    47,   174,
      49,     0,     0,     0,     0,   379,     0,     0,     0,     0,
       0,     0,   487,   488,   489,   490,     0,   171,     0,   669,
     670,     0,     0,     0,     0,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   501,
       0,     0,     0,     0,     0,   201,   350,   351,   360,     0,
     191,   504,   203,    42,    43,    44,   204,    46,    47,   174,
      49,     0,   243,     0,   191,   366,   203,    42,    43,    44,
     204,    46,    47,   174,    49,     0,     0,   505,     0,     0,
     509,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,   391,     0,     0,     0,     0,     0,   519,     0,   520,
       0,     0,     0,   426,     0,     0,   725,     0,   525,     0,
       0,   527,     0,     0,     0,   556,   557,     0,     0,   531,
       2,     3,     4,     5,     0,   184,     0,   190,   191,     8,
     203,    42,    43,    44,   204,    46,    47,   174,    49,     0,
       0,     0,     0,   577,   578,     0,     0,     0,     0,     0,
     580,   581,     0,     0,   195,   195,   195,   195,   195,   195,
       0,   201,     0,     0,     0,   195,   208,     0,     0,   457,
     209,   400,     0,     0,     0,   551,     0,     0,     0,   195,
       0,   195,     0,     0,   603,   195,   172,     0,     0,     0,
       0,    28,     0,    30,     0,    32,     0,     0,     0,   552,
       0,     0,     0,   191,     0,   203,    42,    43,    44,   192,
      46,    47,   553,    49,    50,    51,    52,     0,     0,     0,
       0,     0,   589,     0,     0,     0,     0,     0,   556,   509,
     577,   580,     0,     2,     3,     4,     5,   457,   184,   595,
     190,     0,     8,     0,   191,     0,   203,    42,    43,    44,
     204,    46,    47,   174,    49,     0,   649,   650,   651,   656,
       0,     0,     0,     0,     0,     0,   637,   638,     0,   195,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   234,
       0,     0,   631,   235,     0,     0,     0,   648,   195,     0,
     195,     0,     0,     0,   659,   195,     0,   643,   201,   172,
       0,   637,   236,   208,   238,     0,   239,   209,    32,   201,
     685,   686,   687,     0,     0,     0,   191,     0,   203,    42,
      43,    44,   192,    46,    47,   174,    49,    50,    51,    52,
       0,     0,     0,   411,     0,     0,     0,     0,     0,     0,
     682,     0,     0,     0,     0,     0,     0,   690,   171,     0,
       0,   457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,   680,   203,    42,    43,    44,   204,    46,    47,
     174,    49,   422,   691,     0,     0,   716,     0,     0,     0,
       0,   191,     0,   203,    42,    43,    44,   204,    46,    47,
     174,    49,   191,     0,   203,    42,    43,    44,   204,    46,
      47,   174,    49,     0,   719,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   195,     0,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,    -4,
       1,     0,     2,     3,     4,     5,     0,     6,    -4,     7,
       0,     8,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,    17,    18,    19,    20,
       0,    21,    22,     0,    23,     0,     0,    24,    25,    26,
      27,     0,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -3,
       1,     0,     2,     3,     4,     5,     0,     6,     0,     7,
       0,     8,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,   555,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,    17,    18,    19,    20,
       0,    21,    22,     0,    23,     0,     0,    24,    25,    26,
      27,     0,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     1,
       0,   111,   112,   113,     5,     0,     6,   114,     7,     0,
       8,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,   115,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     1,     0,
       2,     3,     4,     5,     0,     6,  -129,     7,     0,     8,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,  -129,     0,    17,    18,    19,    20,  -129,    21,
      22,     0,    23,     0,     0,    24,    25,    26,    27,     0,
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     1,     0,     2,
       3,     4,     5,     0,     6,  -128,     7,     0,     8,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,  -128,     0,    17,    18,    19,    20,  -128,    21,    22,
       0,    23,     0,     0,    24,    25,    26,    27,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     1,     0,     2,     3,
       4,     5,     0,     6,   -24,     7,     0,     8,     0,     0,
       9,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       0,   -24,   -24,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,    18,    19,    20,     0,    21,    22,     0,
       0,     0,     0,    24,   172,    26,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,   173,    46,    47,
      48,    49,    50,    51,    52,     1,     0,     2,     3,     4,
       5,     0,     6,    -3,     7,     0,     8,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    17,    18,    19,    20,     0,    21,    22,     0,    23,
       0,     0,    24,    25,    26,    27,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     1,     0,     2,     3,     4,     5,
       0,     6,     0,     7,     0,     8,     0,     0,     9,     0,
       0,     0,     0,     0,     0,   201,     0,     0,    10,    11,
       0,   -29,   -29,    12,    13,     0,     0,   202,   -29,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,     0,    16,     0,     0,
     258,    18,    19,    20,     0,    21,    22,     0,   -29,   -29,
       0,    24,   172,    26,     0,     0,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,   173,    46,    47,    48,    49,
      50,    51,    52,   352,   308,   309,     0,     0,   191,   367,
     203,    42,    43,    44,   204,    46,    47,   174,    49,   259,
       0,     0,     0,     0,   201,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,   203,    42,
      43,    44,   204,    46,    47,   174,    49,     0,   451,     0,
       0,     0,     0,   368,   310,   118,   119,   311,   312,   313,
     314,   124,   315,   316,   127,   317,   129,   130,   318,   319,
     320,   321,   135,   136,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   354,   150,   355,   152,
     153,   154,   369,   156,   157,   359,   159,   344,   345,   346,
     307,   308,   309,     0,     0,     0,   114,   191,     0,   203,
      42,    43,    44,   204,    46,    47,   174,    49,     0,     0,
       0,   201,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,     0,     0,     0,   518,   258,     0,     0,     0,
     116,   310,   118,   119,   311,   312,   313,   314,   124,   315,
     316,   127,   317,   129,   130,   318,   319,   320,   321,   135,
     136,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   150,   335,   388,   389,   338,   390,
     340,   341,   342,   343,   344,   345,   346,   307,   308,   309,
       0,     0,     0,   506,   191,   381,   203,    42,    43,    44,
     204,    46,    47,   174,    49,     0,   201,     0,     0,     0,
       0,   115,   191,     0,   203,    42,    43,    44,   204,    46,
      47,   174,    49,     0,     0,     0,     0,     0,     0,     0,
     538,     0,     0,     0,     0,     0,     0,   507,   310,   118,
     119,   311,   312,   313,   314,   124,   315,   316,   127,   317,
     129,   130,   318,   319,   320,   321,   135,   136,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   150,   335,   388,   389,   338,   390,   340,   341,   342,
     343,   344,   345,   346,   307,   308,   309,     0,   596,   191,
     597,   203,    42,    43,    44,   204,    46,    47,   174,    49,
       0,     0,     0,     0,     0,     0,     0,     0,   598,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   310,   118,   119,   311,   312,
     313,   314,   124,   315,   316,   127,   317,   129,   130,   318,
     319,   320,   321,   135,   136,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   150,   335,
     599,   600,   601,   339,   340,   341,   342,   343,   344,   345,
     346,   352,   308,   309,     0,     0,     0,     0,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,     0,   310,   118,   119,   311,   312,   313,   314,   124,
     315,   316,   127,   317,   129,   130,   318,   353,   320,   321,
     135,   136,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   354,   150,   355,   356,   357,   154,
     358,   156,   157,   359,   159,   344,   345,   346,   352,   308,
     309,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,   310,
     118,   119,   311,   312,   313,   314,   124,   315,   316,   127,
     317,   129,   130,   318,   319,   320,   321,   135,   136,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   354,   150,   355,   356,   357,   154,   358,   156,   157,
     359,   159,   344,   345,   346,   352,   308,   309,     0,     0,
       0,   590,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,   310,   118,   119,   311,
     312,   313,   314,   124,   315,   316,   127,   317,   129,   130,
     318,   319,   320,   321,   135,   136,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   354,   150,
     355,   356,   357,   154,   358,   156,   157,   359,   159,   344,
     345,   346,   307,   308,   309,     0,     0,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   652,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,   310,   118,   119,   311,   312,   313,   314,
     124,   315,   316,   127,   317,   129,   130,   318,   319,   320,
     321,   135,   136,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   150,   335,   653,   654,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   -61,
       0,   310,   118,   119,   311,   312,   313,   314,   124,   315,
     316,   127,   317,   129,   130,   318,   319,   320,   321,   135,
     136,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   150,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   307,   308,   309,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   307,   308,   309,   -62,     0,   310,   118,
     119,   311,   312,   313,   314,   124,   315,   316,   127,   317,
     129,   130,   318,   319,   320,   321,   135,   136,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   150,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   310,   118,   119,   311,   312,   313,
     314,   124,   315,   316,   127,   317,   129,   130,   318,   319,
     320,   321,   135,   136,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   150,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,     0,     0,     0,
       0,   310,   118,   119,   311,   312,   313,   314,   124,   315,
     316,   127,   317,   129,   130,   318,   319,   320,   321,   135,
     136,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   150,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   310,   118,   119,
     311,   312,   313,   314,   124,   315,   316,   127,   317,   129,
     130,   318,   319,   320,   321,   135,   136,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     150,   335,   492,   493,   494,   339,   340,   341,   342,   343,
     344,   345,   346,   307,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   310,   118,   119,   311,   312,   313,
     314,   124,   315,   316,   127,   317,   129,   130,   318,   319,
     320,   321,   135,   136,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   150,   335,   497,
     498,   499,   339,   340,   341,   342,   343,   344,   345,   346,
       2,     3,     4,     5,     0,   184,   -69,     7,   -69,     8,
     -69,     0,     0,   -69,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,   255,     0,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,     0,
       0,     0,     0,   -69,   -69,     0,     0,     0,     0,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,   172,     0,     0,     0,
       0,    28,     0,    30,     0,    32,     0,     0,    35,     0,
      37,     0,     0,    40,     0,    41,    42,    43,    44,   173,
      46,    47,   174,    49,    50,    51,    52,     2,     3,     4,
       5,     0,   184,   -40,     7,     0,     8,     0,     0,     0,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,   255,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
     -40,   -40,     0,     0,     0,     0,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,    28,     0,
      30,     0,    32,     0,     0,    35,     0,    37,     0,     0,
      40,     0,    41,    42,    43,    44,   173,    46,    47,   174,
      49,    50,    51,    52,     2,     3,     4,     5,     0,   184,
     -19,     7,     0,     8,     0,     0,     0,   -19,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,     0,     0,     0,     0,   -19,   -19,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
       0,     0,   208,    21,     0,     0,   209,   593,     0,     0,
     172,     0,     0,     0,     0,    28,     0,    30,     0,    32,
       0,     0,    35,     0,    37,     0,     0,    40,     0,    41,
      42,    43,    44,   173,    46,    47,   174,    49,    50,    51,
      52,     2,     3,     4,     5,     0,   184,   171,     7,     0,
       8,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
     191,     0,   203,    42,    43,    44,   204,    46,    47,   174,
      49,   186,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,   172,     0,     0,
       0,     0,    28,     0,    30,     0,    32,     0,     0,    35,
       0,    37,     0,     0,    40,     0,    41,    42,    43,    44,
     173,    46,    47,   174,    49,    50,    51,    52,     2,     3,
       4,     5,     0,   169,     0,     7,     0,   170,   375,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   376,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,   172,     0,     0,     0,     0,    28,
       0,    30,     0,    32,     0,     0,    35,     0,    37,     0,
       0,    40,     0,    41,    42,    43,    44,   173,    46,    47,
     174,    49,    50,    51,    52,     2,     3,     4,     5,     0,
     184,     0,     7,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     415,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,   172,     0,     0,     0,     0,    28,     0,    30,     0,
      32,     0,     0,    35,   416,    37,     0,     0,    40,     0,
      41,    42,    43,    44,   173,    46,    47,   417,    49,    50,
      51,    52,     2,     3,     4,     5,     0,   184,     0,     7,
       0,     8,   523,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   524,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,    28,     0,    30,     0,    32,     0,     0,
      35,     0,    37,     0,     0,    40,     0,    41,    42,    43,
      44,   173,    46,    47,   174,    49,    50,    51,    52,     2,
       3,     4,     5,     0,   169,     0,     7,     0,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,   172,     0,     0,     0,     0,
      28,     0,    30,     0,    32,     0,     0,    35,     0,    37,
       0,     0,    40,     0,    41,    42,    43,    44,   173,    46,
      47,   174,    49,    50,    51,    52,     2,     3,     4,     5,
       0,   184,     0,   190,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,   172,     0,     0,     0,     0,    28,     0,    30,
       0,    32,     0,     0,    35,     0,    37,     0,     0,   191,
       0,    41,    42,    43,    44,   192,    46,    47,   174,    49,
      50,    51,    52,     2,     3,     4,     5,     0,   184,     0,
       7,   438,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,   172,
       0,     0,     0,     0,    28,     0,    30,     0,    32,     0,
       0,    35,     0,    37,     0,     0,    40,     0,    41,    42,
      43,    44,   173,    46,    47,   174,    49,    50,    51,    52,
       2,     3,     4,     5,     0,   184,     0,   190,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,   172,     0,     0,     0,
       0,    28,     0,    30,     0,    32,     0,     0,    35,     0,
      37,     0,     0,   191,     0,    41,    42,    43,    44,   192,
      46,    47,   174,    49,    50,    51,    52,     2,     3,     4,
       5,     0,   184,     0,     7,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,    28,     0,
      30,     0,    32,     0,     0,    35,     0,    37,     0,     0,
      40,     0,    41,    42,    43,    44,   173,    46,    47,   174,
      49,    50,    51,    52,     2,     3,     4,     5,     0,     6,
       0,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,     0,    28,     0,    30,     0,    32,
       0,     0,    35,     0,    37,     0,     0,    40,     0,    41,
      42,    43,    44,   173,    46,    47,   174,    49,    50,    51,
      52
};

static const yytype_int16 yycheck[] =
{
       0,    55,   454,   169,    28,   546,     6,     7,     3,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      15,    21,    22,    23,    23,    25,    36,    27,    28,   230,
      10,    23,    34,    23,    15,    35,    36,    37,    48,     6,
     170,    41,   208,    16,    72,    45,    10,   385,    48,    10,
      11,    12,    13,    14,    15,    55,     8,    11,   259,    18,
      21,    46,    16,    10,    22,   266,    94,    52,     9,    10,
     522,    10,    15,    46,    35,    16,    37,    36,     9,   209,
      41,    56,    46,    47,    69,    30,    31,    13,    33,    48,
      16,    86,    67,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    47,    48,    49,    46,    47,    46,    88,    19,
      20,    10,    93,   137,    66,    10,    52,   117,   137,    10,
     120,   121,   122,   664,    55,   125,   126,    72,   128,   128,
      61,    10,   132,    69,   134,   145,   128,   137,   128,    13,
      52,   143,    16,    72,   144,   145,   146,    46,   158,    94,
       8,   151,   353,    10,    46,   155,    10,    69,   158,     9,
      52,    11,   121,    13,   125,    94,    16,    46,   126,   169,
     170,   171,   172,   173,    84,    85,   514,    69,   379,   517,
     381,    10,   383,   144,   636,   146,   145,     9,    10,    46,
     151,   529,    46,    15,    16,     9,     9,    47,    11,   158,
      13,    15,   169,    16,    15,    16,    47,    10,   208,   209,
      52,    52,   122,   123,   238,     7,     9,   184,    11,   238,
      13,    11,   222,    16,    46,    47,    16,    69,    69,    52,
     230,    38,    52,    46,    47,     0,    47,    29,   238,    52,
       9,    33,    17,    18,    19,    20,    69,    16,   248,    69,
     451,    42,    11,   220,    47,    39,    69,    16,   258,   259,
      27,    28,    10,   265,   264,    32,   266,    15,   235,    43,
     270,    45,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   205,    10,    72,    73,    47,
      11,    15,    10,     3,   214,    16,   264,    15,     8,    15,
      16,     9,    10,     9,     9,    10,    13,   518,    16,    16,
      16,    16,     9,    10,   234,    30,    31,     9,    33,    16,
      37,    11,   242,    47,    16,   302,    16,   247,   305,    47,
      11,    29,    47,    48,    49,    16,   138,   513,    46,    47,
     142,    46,    47,   353,    52,     9,    46,    57,    58,    46,
      47,    61,    16,    13,   366,    11,    16,    11,   368,    69,
      16,    69,    16,    11,    46,    11,   376,     9,    16,   379,
      16,   381,    82,   383,     3,   385,    86,    47,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   364,   190,   399,
       3,    16,    12,   403,    14,     8,   416,   417,    27,    12,
      11,   411,    69,   413,   414,   415,   416,   417,    10,    16,
      12,    11,    14,   423,   426,   427,    16,     9,    10,   221,
      11,    47,    11,   433,    16,    16,   228,    16,    11,    69,
      11,   233,   444,    16,   403,    16,    10,    84,    12,    52,
      14,   451,   454,    10,   246,    69,   415,   416,   417,    25,
      26,   253,   254,    69,    46,    47,    69,    86,    96,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    21,    22,
      23,    24,    93,    86,    52,    88,    89,    90,    91,    92,
      93,    94,    95,    96,     9,    10,    34,    35,    36,   501,
     410,    16,   504,   280,   281,   282,   283,   284,   285,   301,
      30,    31,   304,   513,   514,    16,    10,   517,   518,    10,
     522,   276,   277,   278,   279,   291,   292,   293,   294,   529,
      52,    46,    47,     8,    52,    52,   503,    46,   538,   286,
     287,   288,    52,   289,   290,    47,    52,    10,    96,    15,
      96,   551,   552,   553,   556,   557,     4,    10,    46,    67,
     560,   561,    11,     8,    11,    40,   533,    94,   535,   569,
      94,     8,   572,   573,    93,   577,   578,    93,   580,   581,
      52,    11,     4,   115,   586,    64,    15,     4,     4,    15,
      11,    10,   551,   552,   553,    10,   563,    11,    10,   601,
      10,   734,   560,    11,   103,   104,    15,    46,    11,    11,
     569,    15,    11,     0,   572,   573,   527,   423,   445,   563,
     152,   153,   535,   155,   534,   403,   228,   513,   270,   272,
     275,   364,   273,   258,   636,   637,   638,   169,    -1,   274,
      -1,   116,    -1,   645,    -1,    -1,   648,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   565,    -1,   659,    -1,    -1,
      -1,    -1,   662,   663,    -1,   665,   666,   667,   668,   168,
      -1,   671,    -1,   675,   149,    -1,   208,    -1,    -1,    -1,
     682,   735,    -1,    -1,   684,   739,    -1,    -1,   690,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,   702,   703,   662,   663,    -1,   665,   666,   667,
     668,   186,   714,   671,   716,    -1,    -1,     3,   718,    -1,
      -1,    -1,   722,     9,    10,   684,   728,    -1,   730,    15,
      16,    -1,   231,   232,    -1,   735,   738,    -1,    -1,   739,
     532,   240,    -1,    -1,   702,   703,    -1,    -1,    -1,    -1,
     660,   661,   544,   545,   546,   547,   548,   549,   550,   718,
      46,    47,   672,   673,   722,    -1,    -1,    -1,    -1,   244,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
     255,    -1,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,
     265,     3,    -1,   268,    -1,    -1,   271,    -1,    -1,    -1,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,   297,   298,   299,   300,    -1,    53,    -1,   621,
     622,    -1,    -1,    -1,    -1,    -1,    -1,   369,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,     3,   388,   389,   390,    -1,
      86,   360,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,   664,    -1,    86,   374,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    -1,    -1,   362,    -1,    -1,
     365,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   376,    -1,    -1,    -1,    -1,    -1,   382,    -1,   384,
      -1,    -1,    -1,   412,    -1,    -1,   708,    -1,   393,    -1,
      -1,   396,    -1,    -1,    -1,   424,   425,    -1,    -1,   404,
       3,     4,     5,     6,    -1,     8,    -1,    10,    86,    12,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,   452,   453,    -1,    -1,    -1,    -1,    -1,
     459,   460,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,     3,    -1,    -1,    -1,    21,     8,    -1,    -1,   454,
      12,   513,    -1,    -1,    -1,    58,    -1,    -1,    -1,    35,
      -1,    37,    -1,    -1,   526,    41,    69,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   507,    -1,    -1,    -1,    -1,    -1,   537,   514,
     539,   540,    -1,     3,     4,     5,     6,   522,     8,   524,
      10,    -1,    12,    -1,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    -1,   598,   599,   600,   601,
      -1,    -1,    -1,    -1,    -1,    -1,   575,   576,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,   567,     8,    -1,    -1,    -1,   596,   144,    -1,
     146,    -1,    -1,    -1,   603,   151,    -1,   582,     3,    69,
      -1,   610,    27,     8,    74,    -1,    76,    12,    78,     3,
     652,   653,   654,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
     649,    -1,    -1,    -1,    -1,    -1,    -1,   656,    53,    -1,
      -1,   636,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,   647,    88,    89,    90,    91,    92,    93,    94,
      95,    96,   228,   658,    -1,    -1,   685,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    -1,   689,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   270,    -1,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,     0,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      -1,    62,    63,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       1,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,   423,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      -1,    62,    63,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,    -1,    -1,    68,    69,    70,    71,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    -1,    68,    69,    70,    71,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    -1,    62,    63,    -1,    65,
      -1,    -1,    68,    69,    70,    71,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     1,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    25,    26,
      -1,     9,    10,    30,    31,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    54,    -1,    -1,
      10,    58,    59,    60,    -1,    62,    63,    -1,    46,    47,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     3,     4,     5,    -1,    -1,    86,     9,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    69,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    -1,    27,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       3,     4,     5,    -1,    -1,    -1,     9,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    -1,
      -1,     3,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    27,    10,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     3,     4,     5,
      -1,    -1,    -1,     9,    86,    69,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    -1,     3,    -1,    -1,    -1,
      -1,    27,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     3,     4,     5,    -1,     7,    86,
       9,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     3,     4,     5,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    78,    -1,    -1,    81,    -1,
      83,    -1,    -1,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
      76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,     8,    62,    -1,    -1,    12,    13,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     3,     4,     5,     6,    -1,     8,    53,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,    81,
      -1,    83,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      78,    -1,    -1,    81,    82,    83,    -1,    -1,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,
      81,    -1,    83,    -1,    -1,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    78,    -1,    -1,    81,    -1,    83,
      -1,    -1,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,    -1,
      -1,    81,    -1,    83,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    78,    -1,    -1,    81,    -1,
      83,    -1,    -1,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
      76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     3,     4,     5,     6,    -1,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     8,    10,    12,    15,
      25,    26,    30,    31,    40,    41,    54,    57,    58,    59,
      60,    62,    63,    65,    68,    69,    70,    71,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   102,   103,   104,   105,   108,   109,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   125,   126,   127,   128,   129,   133,   134,   137,   138,
     139,   141,   145,   148,   151,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   185,   186,   190,   192,     9,
      15,     3,     4,     5,     9,    27,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   103,   106,   107,   187,   188,   189,     8,
      12,    53,    69,    92,    95,   108,   154,   155,   158,   159,
     160,   161,   163,   193,     8,    13,    53,   108,   164,   191,
      10,    86,    92,   108,   177,   179,   177,   177,   177,   177,
     177,     3,    15,    88,    92,   108,   110,   108,     8,    12,
     108,   152,   153,   154,   108,   110,   110,   177,   108,   109,
       8,    61,    69,    92,   108,   114,   138,   141,    10,    88,
      27,   108,   140,    10,     4,     8,    27,   108,    74,    76,
     180,   182,   162,   163,    10,   183,    10,   163,     8,   113,
     177,   152,   177,    10,    10,    27,   164,   177,    10,    69,
     108,   152,     0,   105,    46,    52,    69,   110,    16,   110,
      43,    45,    42,    38,    39,    37,    21,    22,    23,    24,
      17,    18,    19,    20,    72,    73,    34,    35,    36,    25,
      26,    27,    28,    32,    29,    30,    31,    33,    47,    48,
      49,    12,    14,   183,    12,    14,   183,     3,     4,     5,
      54,    57,    58,    59,    60,    62,    63,    65,    68,    69,
      70,    71,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   106,   189,   164,
     189,   189,     3,    69,    86,    88,    89,    90,    92,    95,
     189,     9,    47,     9,    16,    46,   183,     9,    53,    92,
     108,   156,   157,   161,   189,    13,    53,   159,   108,    27,
     108,    69,    47,    69,    47,    16,    11,    11,    89,    90,
      92,   164,    13,    16,   110,     8,    66,   142,     9,    53,
     189,    13,   108,    16,    47,   110,    84,   106,   149,   150,
     163,    27,   108,    69,    69,    58,    82,    95,   123,   124,
     151,   163,   179,    10,   108,   140,   183,   183,   163,   110,
     106,   146,   147,    96,    93,   180,   183,   110,    11,   164,
     184,   163,   110,    56,    67,   135,   136,   163,   163,   164,
     193,    27,   108,   140,    52,   109,   113,   164,   194,   108,
     140,   164,   167,   164,   168,   169,   170,   171,   172,   172,
     172,   172,   173,   173,   173,   173,   173,   173,   174,   174,
     174,   175,   175,   176,   176,   176,   176,   164,   164,   164,
     164,   163,    89,    90,    91,   106,   163,    89,    90,    91,
     106,   183,    10,    10,   183,   164,     9,    53,   188,   164,
     113,   108,     9,    16,    46,   108,    13,    16,    27,   164,
     164,   160,    52,    13,    53,   164,   143,   164,   108,    46,
     153,   164,    10,    96,     9,    16,   110,   108,    27,   108,
     108,   154,   154,   154,    72,    94,    15,    72,    94,    72,
      94,    58,    82,    95,   123,   179,   183,   183,   113,   113,
      11,    96,     9,    16,   108,     4,    11,    16,    11,    10,
     113,   136,    11,    11,    11,   108,   140,   183,   183,   194,
     183,   183,    46,    13,    13,   113,    11,   106,   113,   164,
       9,   157,   160,    13,   194,   164,     7,     9,    27,    89,
      90,    91,   144,   189,   142,   163,   106,    93,   110,   150,
     108,   163,   163,   162,   163,   163,   163,   163,   154,   154,
     154,    94,    94,   113,   113,   109,   108,    93,   147,    93,
     110,   164,     8,   154,   109,   109,    52,   183,   183,   113,
     113,   113,   113,   164,   113,    11,    15,    47,   183,   189,
     189,   189,    27,    89,    90,   113,   189,    15,    47,   183,
      11,     4,    11,    11,    15,    11,    11,    11,    11,   163,
     163,    64,     4,     4,   130,    11,   194,   113,   113,   113,
     164,   113,   183,    10,    10,   189,   189,   189,    15,    47,
     183,   164,   113,   110,   110,   109,   109,   162,   109,   109,
     109,   109,    11,    11,   109,   110,   110,     9,    55,    61,
     131,   113,    15,   113,    11,   154,   183,    10,    10,   164,
     113,    15,    11,   109,   109,   163,    46,   113,    11,   113,
      11,   154,    15,   109,    46,   132,   113,   113,    11,   132,
     105,   113
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
#line 125 "src/parser.y"
    { ast_root = create_script_node((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 128 "src/parser.y"
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
#line 144 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 145 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 146 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 147 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 148 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 151 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 13:
#line 152 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 155 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("class")); ;}
    break;

  case 15:
#line 156 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("default")); ;}
    break;

  case 16:
#line 157 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("function")); ;}
    break;

  case 17:
#line 158 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("if")); ;}
    break;

  case 18:
#line 159 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("else")); ;}
    break;

  case 19:
#line 160 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("return")); ;}
    break;

  case 20:
#line 161 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("var")); ;}
    break;

  case 21:
#line 162 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("let")); ;}
    break;

  case 22:
#line 163 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("const")); ;}
    break;

  case 23:
#line 164 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("while")); ;}
    break;

  case 24:
#line 165 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("do")); ;}
    break;

  case 25:
#line 166 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("for")); ;}
    break;

  case 26:
#line 167 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("switch")); ;}
    break;

  case 27:
#line 168 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("case")); ;}
    break;

  case 28:
#line 169 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("break")); ;}
    break;

  case 29:
#line 170 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("continue")); ;}
    break;

  case 30:
#line 171 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("true")); ;}
    break;

  case 31:
#line 172 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("false")); ;}
    break;

  case 32:
#line 173 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("null")); ;}
    break;

  case 33:
#line 174 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("new")); ;}
    break;

  case 34:
#line 175 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("this")); ;}
    break;

  case 35:
#line 176 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("delete")); ;}
    break;

  case 36:
#line 177 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("in")); ;}
    break;

  case 37:
#line 178 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("instanceof")); ;}
    break;

  case 38:
#line 179 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("typeof")); ;}
    break;

  case 39:
#line 180 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("void")); ;}
    break;

  case 40:
#line 181 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("yield")); ;}
    break;

  case 41:
#line 182 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("await")); ;}
    break;

  case 42:
#line 183 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("export")); ;}
    break;

  case 43:
#line 184 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("import")); ;}
    break;

  case 44:
#line 185 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("super")); ;}
    break;

  case 45:
#line 186 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("extends")); ;}
    break;

  case 46:
#line 187 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("from")); ;}
    break;

  case 47:
#line 188 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("of")); ;}
    break;

  case 48:
#line 189 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("as")); ;}
    break;

  case 49:
#line 190 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("try")); ;}
    break;

  case 50:
#line 191 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("catch")); ;}
    break;

  case 51:
#line 192 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("finally")); ;}
    break;

  case 52:
#line 193 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("throw")); ;}
    break;

  case 53:
#line 194 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("debugger")); ;}
    break;

  case 54:
#line 195 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("with")); ;}
    break;

  case 55:
#line 196 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("enum")); ;}
    break;

  case 56:
#line 197 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("get")); ;}
    break;

  case 57:
#line 198 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("set")); ;}
    break;

  case 58:
#line 199 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("static")); ;}
    break;

  case 59:
#line 200 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("async")); ;}
    break;

  case 60:
#line 203 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 61:
#line 204 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("get")); ;}
    break;

  case 62:
#line 205 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("set")); ;}
    break;

  case 63:
#line 206 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("static")); ;}
    break;

  case 64:
#line 207 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("async")); ;}
    break;

  case 65:
#line 208 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("let")); ;}
    break;

  case 66:
#line 209 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("from")); ;}
    break;

  case 67:
#line 210 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("of")); ;}
    break;

  case 68:
#line 211 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("as")); ;}
    break;

  case 69:
#line 212 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("yield")); ;}
    break;

  case 70:
#line 213 "src/parser.y"
    { (yyval.node) = create_identifier_node(pool_strdup("await")); ;}
    break;

  case 71:
#line 218 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 72:
#line 219 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 73:
#line 220 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 74:
#line 221 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 75:
#line 222 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 76:
#line 223 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 77:
#line 224 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 78:
#line 225 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 79:
#line 226 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 80:
#line 227 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 81:
#line 228 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 82:
#line 229 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 83:
#line 230 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 84:
#line 231 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 85:
#line 232 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 86:
#line 236 "src/parser.y"
    { 
        (yyval.node) = create_unknown_node(); 
        yyerrok; 
    ;}
    break;

  case 87:
#line 241 "src/parser.y"
    { 
        (yyval.node) = create_unknown_node(); 
        yyerrok; 
    ;}
    break;

  case 88:
#line 247 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 89:
#line 248 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 90:
#line 251 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 91:
#line 255 "src/parser.y"
    { (yyval.node) = create_labelled_statement((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:
#line 259 "src/parser.y"
    { (yyval.node) = create_block_statement((yyvsp[(2) - (3)].list)); ;}
    break;

  case 93:
#line 263 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 94:
#line 267 "src/parser.y"
    { (yyval.node) = create_expression_statement((yyvsp[(1) - (2)].node)); ;}
    break;

  case 95:
#line 271 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL); ;}
    break;

  case 96:
#line 273 "src/parser.y"
    { (yyval.node) = create_if_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 97:
#line 276 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 98:
#line 277 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 99:
#line 278 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 100:
#line 279 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 101:
#line 280 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 102:
#line 284 "src/parser.y"
    { (yyval.node) = create_do_while_statement((yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node)); ;}
    break;

  case 103:
#line 288 "src/parser.y"
    { (yyval.node) = create_while_statement((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 104:
#line 292 "src/parser.y"
    { (yyval.node) = create_for_statement((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node)); ;}
    break;

  case 105:
#line 296 "src/parser.y"
    { (yyval.node) = create_for_in_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 106:
#line 298 "src/parser.y"
    { (yyval.node) = create_for_in_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 107:
#line 300 "src/parser.y"
    { (yyval.node) = create_for_in_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 108:
#line 304 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), false); ;}
    break;

  case 109:
#line 306 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), false); ;}
    break;

  case 110:
#line 308 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), false); ;}
    break;

  case 111:
#line 310 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(4) - (8)].node), (yyvsp[(6) - (8)].node), (yyvsp[(8) - (8)].node), true); ;}
    break;

  case 112:
#line 312 "src/parser.y"
    { (yyval.node) = create_for_of_statement((yyvsp[(4) - (8)].node), (yyvsp[(6) - (8)].node), (yyvsp[(8) - (8)].node), true); ;}
    break;

  case 113:
#line 316 "src/parser.y"
    { 
        NodeList *l = nodelist_create(); 
        nodelist_append(l, create_variable_declarator((yyvsp[(2) - (2)].node), NULL));
        (yyval.node) = create_declaration_list(DECL_VAR, l); 
    ;}
    break;

  case 114:
#line 322 "src/parser.y"
    { 
        NodeList *l = nodelist_create(); 
        nodelist_append(l, create_variable_declarator((yyvsp[(2) - (2)].node), NULL));
        (yyval.node) = create_declaration_list(DECL_LET, l); 
    ;}
    break;

  case 115:
#line 328 "src/parser.y"
    { 
        NodeList *l = nodelist_create(); 
        nodelist_append(l, create_variable_declarator((yyvsp[(2) - (2)].node), NULL));
        (yyval.node) = create_declaration_list(DECL_CONST, l); 
    ;}
    break;

  case 116:
#line 335 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 117:
#line 336 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:
#line 337 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 119:
#line 341 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 120:
#line 343 "src/parser.y"
    { (yyval.node) = create_break_statement(); ;}
    break;

  case 121:
#line 347 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 122:
#line 349 "src/parser.y"
    { (yyval.node) = create_continue_statement(); ;}
    break;

  case 123:
#line 353 "src/parser.y"
    { (yyval.node) = create_return_statement((yyvsp[(2) - (3)].node)); ;}
    break;

  case 124:
#line 357 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 125:
#line 361 "src/parser.y"
    { (yyval.node) = create_switch_statement((yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].list)); ;}
    break;

  case 126:
#line 364 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 127:
#line 365 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 128:
#line 369 "src/parser.y"
    { (yyval.node) = create_switch_case((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list)); ;}
    break;

  case 129:
#line 371 "src/parser.y"
    { (yyval.node) = create_switch_case(NULL, (yyvsp[(3) - (3)].list)); ;}
    break;

  case 130:
#line 374 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 131:
#line 375 "src/parser.y"
    { if ((yyvsp[(2) - (2)].node)) nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 132:
#line 379 "src/parser.y"
    { (yyval.node) = create_throw_statement((yyvsp[(2) - (3)].node)); ;}
    break;

  case 133:
#line 383 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL); ;}
    break;

  case 134:
#line 385 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 135:
#line 387 "src/parser.y"
    { (yyval.node) = create_try_statement((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 136:
#line 391 "src/parser.y"
    { (yyval.node) = create_catch_clause((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 137:
#line 394 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 138:
#line 397 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 139:
#line 403 "src/parser.y"
    { (yyval.node) = create_function_declaration((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 140:
#line 405 "src/parser.y"
    { (yyval.node) = create_function_declaration((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 141:
#line 407 "src/parser.y"
    { (yyval.node) = create_function_declaration((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 142:
#line 409 "src/parser.y"
    { (yyval.node) = create_function_declaration((yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].list), (yyvsp[(6) - (6)].node)); ;}
    break;

  case 143:
#line 411 "src/parser.y"
    { (yyval.node) = create_function_declaration((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 144:
#line 415 "src/parser.y"
    { (yyval.node) = create_function_expression((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 145:
#line 417 "src/parser.y"
    { (yyval.node) = create_function_expression((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 146:
#line 419 "src/parser.y"
    { (yyval.node) = create_function_expression((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 147:
#line 421 "src/parser.y"
    { (yyval.node) = create_function_expression((yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].list), (yyvsp[(6) - (6)].node)); ;}
    break;

  case 148:
#line 423 "src/parser.y"
    { (yyval.node) = create_function_expression((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 149:
#line 426 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 150:
#line 427 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 151:
#line 431 "src/parser.y"
    { (yyval.node) = create_class_declaration((yyvsp[(2) - (3)].node), NULL, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 152:
#line 433 "src/parser.y"
    { (yyval.node) = create_class_declaration((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 153:
#line 437 "src/parser.y"
    { (yyval.node) = create_class_body((yyvsp[(2) - (3)].list)); ;}
    break;

  case 154:
#line 440 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 155:
#line 441 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 156:
#line 445 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.node) = create_method_definition((yyvsp[(1) - (3)].node), func_value, false); 
    ;}
    break;

  case 157:
#line 450 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (4)].node), func_value, true); 
    ;}
    break;

  case 158:
#line 455 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (4)].node), func_value, false); 
    ;}
    break;

  case 159:
#line 460 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node));
        (yyval.node) = create_method_definition((yyvsp[(3) - (5)].node), func_value, true); 
    ;}
    break;

  case 160:
#line 465 "src/parser.y"
    { (yyval.node) = create_method_definition((yyvsp[(1) - (2)].node), NULL, false); ;}
    break;

  case 161:
#line 467 "src/parser.y"
    { (yyval.node) = create_method_definition((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), false); ;}
    break;

  case 162:
#line 469 "src/parser.y"
    { (yyval.node) = create_method_definition((yyvsp[(2) - (3)].node), NULL, true); ;}
    break;

  case 163:
#line 471 "src/parser.y"
    { (yyval.node) = create_method_definition((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), true); ;}
    break;

  case 164:
#line 473 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, nodelist_create(), (yyvsp[(5) - (5)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (5)].node), func_value, false); 
        (yyval.node)->data.method_def.kind = KIND_GET;
    ;}
    break;

  case 165:
#line 479 "src/parser.y"
    {
        NodeList* params = nodelist_create();
        nodelist_append(params, (yyvsp[(4) - (6)].node)); 
        ASTNode* func_value = create_function_expression(NULL, params, (yyvsp[(6) - (6)].node));
        (yyval.node) = create_method_definition((yyvsp[(2) - (6)].node), func_value, false); 
        (yyval.node)->data.method_def.kind = KIND_SET;
    ;}
    break;

  case 166:
#line 487 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, nodelist_create(), (yyvsp[(6) - (6)].node));
        (yyval.node) = create_method_definition((yyvsp[(3) - (6)].node), func_value, true); 
        (yyval.node)->data.method_def.kind = KIND_GET;
    ;}
    break;

  case 167:
#line 493 "src/parser.y"
    {
        NodeList* params = nodelist_create();
        nodelist_append(params, (yyvsp[(5) - (7)].node));
        ASTNode* func_value = create_function_expression(NULL, params, (yyvsp[(7) - (7)].node));
        (yyval.node) = create_method_definition((yyvsp[(3) - (7)].node), func_value, true); 
        (yyval.node)->data.method_def.kind = KIND_SET;
    ;}
    break;

  case 168:
#line 501 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.node) = create_method_definition(create_identifier_node((yyvsp[(1) - (3)].str_val)), func_value, false);
    ;}
    break;

  case 169:
#line 506 "src/parser.y"
    { (yyval.node) = create_method_definition(create_identifier_node((yyvsp[(1) - (2)].str_val)), NULL, false); ;}
    break;

  case 170:
#line 508 "src/parser.y"
    { (yyval.node) = create_method_definition(create_identifier_node((yyvsp[(1) - (4)].str_val)), (yyvsp[(3) - (4)].node), false); ;}
    break;

  case 171:
#line 510 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, nodelist_create(), (yyvsp[(2) - (2)].node));
        (yyval.node) = create_method_definition(create_identifier_node("static_block"), func_value, true);
    ;}
    break;

  case 172:
#line 519 "src/parser.y"
    { (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(2) - (3)].str_val)), NULL); ;}
    break;

  case 173:
#line 521 "src/parser.y"
    { (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), (yyvsp[(3) - (7)].list)); ;}
    break;

  case 174:
#line 523 "src/parser.y"
    { 
        NodeList *specs = nodelist_create();
        ASTNode *spec = create_import_specifier(NULL, (yyvsp[(2) - (5)].node), true, false);
        nodelist_append(specs, spec);
        (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(4) - (5)].str_val)), specs); 
    ;}
    break;

  case 175:
#line 530 "src/parser.y"
    {
        NodeList *specs = nodelist_create();
        ASTNode *spec = create_import_specifier(NULL, (yyvsp[(4) - (7)].node), false, true);
        nodelist_append(specs, spec);
        (yyval.node) = create_import_declaration(create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), specs);
    ;}
    break;

  case 176:
#line 538 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 177:
#line 539 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 178:
#line 543 "src/parser.y"
    { (yyval.node) = create_import_specifier((yyvsp[(1) - (1)].node), (yyvsp[(1) - (1)].node), false, false); ;}
    break;

  case 179:
#line 545 "src/parser.y"
    { (yyval.node) = create_import_specifier((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), false, false); ;}
    break;

  case 180:
#line 549 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 181:
#line 551 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 182:
#line 553 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(2) - (2)].node), NULL, NULL, false); ;}
    break;

  case 183:
#line 555 "src/parser.y"
    { (yyval.node) = create_export_declaration((yyvsp[(3) - (4)].node), NULL, NULL, true); ;}
    break;

  case 184:
#line 557 "src/parser.y"
    { (yyval.node) = create_export_declaration(NULL, (yyvsp[(3) - (5)].list), NULL, false); ;}
    break;

  case 185:
#line 559 "src/parser.y"
    { (yyval.node) = create_export_declaration(NULL, (yyvsp[(3) - (7)].list), create_literal_node(LITERAL_STRING, (yyvsp[(6) - (7)].str_val)), false); ;}
    break;

  case 186:
#line 562 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 187:
#line 563 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 188:
#line 567 "src/parser.y"
    { (yyval.node) = create_export_specifier((yyvsp[(1) - (1)].node), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 189:
#line 569 "src/parser.y"
    { (yyval.node) = create_export_specifier((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 190:
#line 575 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_VAR, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 191:
#line 577 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_LET, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 192:
#line 579 "src/parser.y"
    { (yyval.node) = create_declaration_list(DECL_CONST, (yyvsp[(2) - (2)].list)); ;}
    break;

  case 193:
#line 583 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 194:
#line 585 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 195:
#line 589 "src/parser.y"
    { (yyval.node) = create_variable_declarator((yyvsp[(1) - (1)].node), NULL); ;}
    break;

  case 196:
#line 591 "src/parser.y"
    { (yyval.node) = create_variable_declarator((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 197:
#line 595 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 198:
#line 597 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 199:
#line 599 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 200:
#line 603 "src/parser.y"
    { (yyval.node) = create_object_pattern(nodelist_create()); ;}
    break;

  case 201:
#line 605 "src/parser.y"
    { (yyval.node) = create_object_pattern((yyvsp[(2) - (3)].list)); ;}
    break;

  case 202:
#line 607 "src/parser.y"
    { (yyval.node) = create_object_pattern((yyvsp[(2) - (4)].list)); ;}
    break;

  case 203:
#line 611 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 204:
#line 613 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 205:
#line 617 "src/parser.y"
    {
        (yyval.node) = create_property((yyvsp[(1) - (1)].node), (yyvsp[(1) - (1)].node));
        (yyval.node)->data.property.shorthand = true;
    ;}
    break;

  case 206:
#line 622 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 207:
#line 624 "src/parser.y"
    { (yyval.node) = create_rest_element((yyvsp[(2) - (2)].node)); ;}
    break;

  case 208:
#line 628 "src/parser.y"
    { (yyval.node) = create_array_pattern(nodelist_create()); ;}
    break;

  case 209:
#line 630 "src/parser.y"
    { (yyval.node) = create_array_pattern((yyvsp[(2) - (3)].list)); ;}
    break;

  case 210:
#line 632 "src/parser.y"
    { (yyval.node) = create_array_pattern((yyvsp[(2) - (4)].list)); ;}
    break;

  case 211:
#line 636 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 212:
#line 638 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 213:
#line 640 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 214:
#line 643 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 215:
#line 644 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 216:
#line 646 "src/parser.y"
    { (yyval.node) = create_assignment_pattern((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 217:
#line 648 "src/parser.y"
    { (yyval.node) = create_rest_element((yyvsp[(2) - (2)].node)); ;}
    break;

  case 218:
#line 651 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 219:
#line 653 "src/parser.y"
    { (yyval.node) = create_assignment_pattern((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 220:
#line 656 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 221:
#line 657 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 222:
#line 660 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 223:
#line 662 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_COMMA, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 224:
#line 665 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 225:
#line 666 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 226:
#line 668 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_ASSIGN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 227:
#line 670 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 228:
#line 672 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 229:
#line 674 "src/parser.y"
    { (yyval.node) = create_assignment_expr(OP_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 230:
#line 676 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 231:
#line 678 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, NULL, true); ;}
    break;

  case 232:
#line 680 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(3) - (3)].node), true); ;}
    break;

  case 233:
#line 683 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 234:
#line 685 "src/parser.y"
    { (yyval.node) = create_conditional_expression((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 235:
#line 688 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 236:
#line 690 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 237:
#line 693 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 238:
#line 695 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 239:
#line 698 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 240:
#line 700 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 241:
#line 703 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 242:
#line 705 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 243:
#line 708 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 244:
#line 710 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_BIT_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 245:
#line 713 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 246:
#line 715 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 247:
#line 717 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 248:
#line 719 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 249:
#line 721 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_STRICT_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 250:
#line 724 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 251:
#line 726 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 252:
#line 728 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 253:
#line 730 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 254:
#line 732 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 255:
#line 734 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_IN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 256:
#line 736 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_INSTANCEOF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 257:
#line 739 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 258:
#line 741 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_LSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 259:
#line 743 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_RSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 260:
#line 745 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_URSHIFT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 261:
#line 748 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 262:
#line 750 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 263:
#line 752 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 264:
#line 755 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 265:
#line 757 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 266:
#line 759 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 267:
#line 761 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 268:
#line 764 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 269:
#line 766 "src/parser.y"
    { (yyval.node) = create_binary_expr(OP_POWER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 270:
#line 769 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 271:
#line 770 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DELETE, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 272:
#line 771 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 273:
#line 772 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_TYPEOF, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 274:
#line 773 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_INC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 275:
#line 774 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_DEC, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 276:
#line 775 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_PLUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 277:
#line 776 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_UNARY_MINUS, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 278:
#line 777 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_BIT_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 279:
#line 778 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_NOT, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 280:
#line 779 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_VOID, (yyvsp[(2) - (2)].node), true); ;}
    break;

  case 281:
#line 782 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 282:
#line 784 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_INC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 283:
#line 786 "src/parser.y"
    { (yyval.node) = create_unary_expr(OP_POST_DEC, (yyvsp[(1) - (2)].node), false); ;}
    break;

  case 284:
#line 789 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 285:
#line 790 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 286:
#line 793 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 287:
#line 794 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (2)].node), NULL); ;}
    break;

  case 288:
#line 798 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 289:
#line 800 "src/parser.y"
    { (yyval.node) = create_call_expression((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 290:
#line 802 "src/parser.y"
    { (yyval.node) = create_new_expression((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].list)); ;}
    break;

  case 291:
#line 804 "src/parser.y"
    { (yyval.node) = create_call_expression(create_super_node(), (yyvsp[(2) - (2)].list)); ;}
    break;

  case 292:
#line 806 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 293:
#line 808 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), false); ;}
    break;

  case 294:
#line 810 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node(pool_strdup("get")), false); ;}
    break;

  case 295:
#line 812 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node(pool_strdup("set")), false); ;}
    break;

  case 296:
#line 814 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node(pool_strdup("static")), false); ;}
    break;

  case 297:
#line 817 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 298:
#line 819 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), true); ;}
    break;

  case 299:
#line 821 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), false); ;}
    break;

  case 300:
#line 823 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node(pool_strdup("get")), false); ;}
    break;

  case 301:
#line 825 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node(pool_strdup("set")), false); ;}
    break;

  case 302:
#line 827 "src/parser.y"
    { (yyval.node) = create_member_access((yyvsp[(1) - (3)].node), create_identifier_node(pool_strdup("static")), false); ;}
    break;

  case 303:
#line 830 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 304:
#line 831 "src/parser.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 305:
#line 835 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 306:
#line 837 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 307:
#line 838 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 308:
#line 841 "src/parser.y"
    { (yyval.node) = create_this_node(); ;}
    break;

  case 309:
#line 842 "src/parser.y"
    { (yyval.node) = create_identifier_node((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 310:
#line 843 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 311:
#line 844 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 312:
#line 845 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_REGEX, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 313:
#line 846 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_TRUE, pool_strdup("true")); ;}
    break;

  case 314:
#line 847 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_FALSE, pool_strdup("false")); ;}
    break;

  case 315:
#line 848 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NULL, pool_strdup("null")); ;}
    break;

  case 316:
#line 849 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 317:
#line 850 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 318:
#line 851 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 319:
#line 852 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 320:
#line 853 "src/parser.y"
    { (yyval.node) = create_super_node(); ;}
    break;

  case 321:
#line 856 "src/parser.y"
    { (yyval.node) = create_object_expression(nodelist_create()); ;}
    break;

  case 322:
#line 857 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 323:
#line 858 "src/parser.y"
    { (yyval.node) = create_object_expression((yyvsp[(2) - (4)].list)); ;}
    break;

  case 324:
#line 861 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 325:
#line 863 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), create_spread_element((yyvsp[(2) - (2)].node))); ;}
    break;

  case 326:
#line 864 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 327:
#line 866 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (4)].list), create_spread_element((yyvsp[(4) - (4)].node))); (yyval.list) = (yyvsp[(1) - (4)].list); ;}
    break;

  case 328:
#line 867 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 329:
#line 871 "src/parser.y"
    { (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 330:
#line 873 "src/parser.y"
    {
        (yyval.node) = create_property((yyvsp[(1) - (1)].node), (yyvsp[(1) - (1)].node));
        (yyval.node)->data.property.shorthand = true;
    ;}
    break;

  case 331:
#line 878 "src/parser.y"
    {
        (yyval.node) = create_property((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); 
    ;}
    break;

  case 332:
#line 882 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
        (yyval.node) = create_property((yyvsp[(1) - (3)].node), func_value);
        (yyval.node)->data.property.kind = KIND_METHOD;
    ;}
    break;

  case 333:
#line 888 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_property((yyvsp[(2) - (4)].node), func_value);
        (yyval.node)->data.property.kind = KIND_METHOD;
    ;}
    break;

  case 334:
#line 894 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, nodelist_create(), (yyvsp[(5) - (5)].node));
        (yyval.node) = create_property((yyvsp[(2) - (5)].node), func_value);
        (yyval.node)->data.property.kind = KIND_GET;
    ;}
    break;

  case 335:
#line 900 "src/parser.y"
    {
        NodeList* params = nodelist_create();
        nodelist_append(params, (yyvsp[(4) - (6)].node));
        ASTNode* func_value = create_function_expression(NULL, params, (yyvsp[(6) - (6)].node));
        (yyval.node) = create_property((yyvsp[(2) - (6)].node), func_value);
        (yyval.node)->data.property.kind = KIND_SET;
    ;}
    break;

  case 336:
#line 908 "src/parser.y"
    {
        ASTNode* func_value = create_function_expression(NULL, (yyvsp[(3) - (4)].list), (yyvsp[(4) - (4)].node));
        (yyval.node) = create_property((yyvsp[(2) - (4)].node), func_value);
        (yyval.node)->data.property.kind = KIND_METHOD;
    ;}
    break;

  case 337:
#line 915 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 338:
#line 916 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_STRING, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 339:
#line 917 "src/parser.y"
    { (yyval.node) = create_literal_node(LITERAL_NUMBER, (yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 340:
#line 920 "src/parser.y"
    { (yyval.node) = create_array_expression(nodelist_create()); ;}
    break;

  case 341:
#line 921 "src/parser.y"
    { (yyval.node) = create_array_expression((yyvsp[(2) - (3)].list)); ;}
    break;

  case 342:
#line 922 "src/parser.y"
    { (yyval.node) = create_array_expression((yyvsp[(2) - (4)].list)); ;}
    break;

  case 343:
#line 926 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 344:
#line 928 "src/parser.y"
    { (yyval.list) = nodelist_create(); nodelist_append((yyval.list), create_spread_element((yyvsp[(2) - (2)].node))); ;}
    break;

  case 345:
#line 930 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 346:
#line 932 "src/parser.y"
    { nodelist_append((yyvsp[(1) - (4)].list), create_spread_element((yyvsp[(4) - (4)].node))); (yyval.list) = (yyvsp[(1) - (4)].list); ;}
    break;

  case 347:
#line 933 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 348:
#line 937 "src/parser.y"
    { (yyval.node) = create_arrow_function_expression((yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].node), ((yyvsp[(5) - (5)].node)->type != NODE_BLOCK_STATEMENT)); ;}
    break;

  case 349:
#line 939 "src/parser.y"
    {
        NodeList* params = nodelist_create();
        nodelist_append(params, (yyvsp[(1) - (3)].node));
        (yyval.node) = create_arrow_function_expression(params, (yyvsp[(3) - (3)].node), ((yyvsp[(3) - (3)].node)->type != NODE_BLOCK_STATEMENT));
    ;}
    break;

  case 350:
#line 945 "src/parser.y"
    { (yyval.node) = create_arrow_function_expression((yyvsp[(3) - (6)].list), (yyvsp[(6) - (6)].node), ((yyvsp[(6) - (6)].node)->type != NODE_BLOCK_STATEMENT)); ;}
    break;

  case 351:
#line 947 "src/parser.y"
    {
        NodeList* params = nodelist_create();
        nodelist_append(params, (yyvsp[(2) - (4)].node));
        (yyval.node) = create_arrow_function_expression(params, (yyvsp[(4) - (4)].node), ((yyvsp[(4) - (4)].node)->type != NODE_BLOCK_STATEMENT));
    ;}
    break;

  case 352:
#line 955 "src/parser.y"
    { (yyval.list) = nodelist_create(); ;}
    break;

  case 353:
#line 956 "src/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 354:
#line 959 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 355:
#line 960 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4892 "build/parser.tab.c"
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


#line 962 "src/parser.y"

