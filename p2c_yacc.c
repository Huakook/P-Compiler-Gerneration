
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "p2c_yacc.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "p2c.h"
	#include "p2c_tree.h"


/* Line 189 of yacc.c  */
#line 82 "p2c_yacc.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROG = 258,
     PROC = 259,
     BG = 260,
     END = 261,
     INT = 262,
     BOOL = 263,
     TRUE = 264,
     LP = 265,
     RP = 266,
     LSP = 267,
     RSP = 268,
     FALSE = 269,
     CC = 270,
     STRING = 271,
     DOT = 272,
     SEMI = 273,
     VAR = 274,
     ARRAY = 275,
     OF = 276,
     DOTDOT = 277,
     IF = 278,
     THEN = 279,
     READ = 280,
     WRITE = 281,
     WHILE = 282,
     DO = 283,
     ELSE = 284,
     ASSIGN = 285,
     COMMA = 286,
     COLON = 287,
     ID = 288,
     NUM = 289,
     AND = 290,
     OR = 291,
     NOT = 292,
     GE = 293,
     LE = 294,
     GT = 295,
     LT = 296,
     NE = 297,
     EQ = 298,
     MINUS = 299,
     ADD = 300,
     TIMES = 301,
     DIV = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "p2c_yacc.y"
 pSTM* sm; //statement
        pEXP* ex; //expression
        int   nu; //number
		char* sr; //string
      


/* Line 214 of yacc.c  */
#line 173 "p2c_yacc.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 185 "p2c_yacc.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    14,    19,    20,    24,    25,
      30,    34,    35,    37,    39,    46,    50,    52,    54,    58,
      59,    64,    66,    71,    75,    76,    78,    80,    82,    84,
      86,    88,    92,    94,   100,   104,   105,   107,   113,   118,
     120,   124,   125,   127,   129,   131,   136,   143,   148,   150,
     154,   158,   162,   163,   166,   170,   171,   173,   175,   179,
     182,   184,   186,   188,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   207,   209,   211,   213,   215,   217,   219,
     221,   223
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,     3,    33,    18,    50,    17,    -1,    -1,
      51,    59,    61,    -1,    19,    53,    18,    52,    -1,    -1,
      53,    18,    52,    -1,    -1,    33,    54,    32,    55,    -1,
      31,    33,    54,    -1,    -1,    58,    -1,    56,    -1,    20,
      12,    57,    13,    21,    58,    -1,    34,    22,    34,    -1,
       7,    -1,     8,    -1,    60,    18,    59,    -1,    -1,     4,
      33,    18,    50,    -1,    62,    -1,     5,    64,    63,     6,
      -1,    18,    64,    63,    -1,    -1,    65,    -1,    74,    -1,
      66,    -1,    67,    -1,    68,    -1,    71,    -1,    88,    30,
      77,    -1,    33,    -1,    25,    10,    70,    69,    11,    -1,
      31,    70,    69,    -1,    -1,    88,    -1,    26,    10,    72,
      73,    11,    -1,    26,    10,    16,    11,    -1,    77,    -1,
      31,    72,    73,    -1,    -1,    62,    -1,    75,    -1,    76,
      -1,    23,    77,    24,    64,    -1,    23,    77,    24,    64,
      29,    64,    -1,    27,    77,    28,    64,    -1,    78,    -1,
      78,    84,    78,    -1,    85,    80,    79,    -1,    86,    80,
      79,    -1,    -1,    82,    81,    -1,    87,    82,    81,    -1,
      -1,    88,    -1,    83,    -1,    10,    77,    11,    -1,    37,
      82,    -1,    34,    -1,    15,    -1,     9,    -1,    14,    -1,
      43,    -1,    42,    -1,    41,    -1,    40,    -1,    39,    -1,
      38,    -1,    45,    -1,    44,    -1,    -1,    45,    -1,    44,
      -1,    36,    -1,    46,    -1,    47,    -1,    35,    -1,    33,
      -1,    89,    -1,    33,    12,    77,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    87,    95,   104,   112,   116,   124,   128,
     140,   148,   152,   155,   160,   169,   179,   183,   191,   200,
     205,   217,   225,   234,   242,   247,   251,   257,   261,   265,
     269,   275,   284,   295,   304,   312,   317,   323,   331,   343,
     349,   357,   362,   366,   370,   376,   383,   393,   402,   406,
     416,   427,   436,   441,   450,   459,   465,   470,   475,   481,
     489,   495,   502,   507,   515,   520,   525,   530,   535,   540,
     547,   552,   558,   563,   568,   573,   580,   585,   590,   597,
     603,   609
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROG", "PROC", "BG", "END", "INT",
  "BOOL", "TRUE", "LP", "RP", "LSP", "RSP", "FALSE", "CC", "STRING", "DOT",
  "SEMI", "VAR", "ARRAY", "OF", "DOTDOT", "IF", "THEN", "READ", "WRITE",
  "WHILE", "DO", "ELSE", "ASSIGN", "COMMA", "COLON", "ID", "NUM", "AND",
  "OR", "NOT", "GE", "LE", "GT", "LT", "NE", "EQ", "MINUS", "ADD", "TIMES",
  "DIV", "$accept", "prog", "block", "vardecs", "morevd", "vardec",
  "moreid", "type", "arrtype", "inrange", "simtype", "prodecs", "proc",
  "stmts", "comstmt", "morestm", "stmt", "simstmt", "asstate", "prostate",
  "restate", "moreinvar", "invar", "wristate", "outvalue", "moreoutval",
  "strstmt", "ifstate", "whilest", "express", "simexpre", "addterm",
  "term", "multifac", "factor", "constant", "relatop", "sign", "addoper",
  "multiop", "variable", "indexvar", 0
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    51,    51,    52,    52,    53,
      54,    54,    55,    55,    56,    57,    58,    58,    59,    59,
      60,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    67,    68,    69,    69,    70,    71,    71,    72,
      73,    73,    74,    74,    74,    75,    75,    76,    77,    77,
      78,    79,    79,    80,    81,    81,    82,    82,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     3,     4,     0,     3,     0,     4,
       3,     0,     1,     1,     6,     3,     1,     1,     3,     0,
       4,     1,     4,     3,     0,     1,     1,     1,     1,     1,
       1,     3,     1,     5,     3,     0,     1,     5,     4,     1,
       3,     0,     1,     1,     1,     4,     6,     4,     1,     3,
       3,     3,     0,     2,     3,     0,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     1,     6,     0,     0,    19,    11,
       0,     2,     0,     0,     0,     0,     0,     8,     0,     0,
       4,    21,    19,    11,     0,     5,     0,     6,    72,     0,
       0,    72,    32,    42,    24,    25,    27,    28,    29,    30,
      26,    43,    44,     0,    80,    18,    10,    16,    17,     0,
       9,    13,    12,     8,    20,    71,    70,     0,    48,     0,
       0,    72,     0,    72,     0,     0,    72,     0,     7,     0,
      69,    68,    67,    66,    65,    64,    72,    62,    72,    63,
      61,    79,    60,     0,    52,    55,    57,    56,    35,    36,
       0,    41,    39,     0,     0,    24,    22,    31,     0,     0,
      45,    49,     0,    59,    75,    74,    73,    50,     0,    78,
      76,    77,    53,     0,     0,     0,    38,    72,     0,    47,
      81,    23,     0,     0,     0,    58,    52,    55,    35,    33,
      41,    37,    15,     0,    46,    51,    54,    34,    40,    14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    25,    26,    16,    50,    51,    99,
      52,    13,    14,    20,    33,    65,    34,    35,    36,    37,
      38,   115,    88,    39,    91,   118,    40,    41,    42,    92,
      58,   107,    84,   112,    85,    86,    76,    59,   108,   113,
      43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int8 yypact[] =
{
      11,   -20,    27,     5,   -80,     9,    -1,    16,    33,    17,
      29,   -80,    18,    49,    41,    34,    36,    -1,    51,    19,
     -80,   -80,    33,    17,     2,   -80,    52,     9,   -33,    61,
      62,   -33,    -4,   -80,    55,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,    44,   -80,   -80,   -80,   -80,   -80,    63,
     -80,   -80,   -80,    -1,   -80,   -80,   -80,    53,    23,     6,
      43,    -9,    50,   -33,    19,    73,   -33,    46,   -80,    19,
     -80,   -80,   -80,   -80,   -80,   -80,   -33,   -80,   -33,   -80,
     -80,    69,   -80,     6,    13,   -16,   -80,   -80,    54,   -80,
      71,    56,   -80,    19,    70,    55,   -80,   -80,    64,    75,
      60,   -80,    79,   -80,   -80,   -80,   -80,   -80,     6,   -80,
     -80,   -80,   -80,     6,    43,    80,   -80,   -33,    81,   -80,
     -80,   -80,    59,    74,    19,   -80,    13,   -16,    54,   -80,
      56,   -80,   -80,    10,   -80,   -80,   -80,   -80,   -80,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,    57,   -80,    45,    88,    76,   -80,   -80,   -80,
     -37,    78,   -80,   -80,    84,     7,   -64,   -80,   -80,   -80,
     -80,   -27,   -11,   -80,   -13,   -24,   -80,   -80,   -80,   -25,
      31,   -21,     0,   -18,   -79,   -80,   -80,   -80,   -80,   -80,
     -58,   -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      95,    87,    89,    57,   103,   100,    62,    90,    63,    47,
      48,    55,    56,     3,     1,    77,    78,    47,    48,   109,
      79,    80,    49,     5,    19,    87,   -79,     4,     6,   119,
     110,   111,     9,    11,   127,    55,    56,    12,    94,    81,
      82,    97,    28,    83,    29,    30,    31,    17,    15,   104,
      87,    18,    32,   102,    19,    87,    89,   105,   106,    22,
     134,    70,    71,    72,    73,    74,    75,    23,    24,    27,
      53,    60,    61,    64,    66,    67,    81,    69,    93,    96,
      98,    63,   116,   120,    54,   114,   122,   117,   123,   124,
     125,   129,   131,   132,    10,   133,   139,    21,    68,    46,
      45,   137,   121,   128,   130,   135,   138,   101,   126,   136
};

static const yytype_uint8 yycheck[] =
{
      64,    59,    60,    28,    83,    69,    31,    16,    12,     7,
       8,    44,    45,    33,     3,     9,    10,     7,     8,    35,
      14,    15,    20,    18,     5,    83,    30,     0,    19,    93,
      46,    47,    33,    17,   113,    44,    45,     4,    63,    33,
      34,    66,    23,    37,    25,    26,    27,    18,    31,    36,
     108,    33,    33,    78,     5,   113,   114,    44,    45,    18,
     124,    38,    39,    40,    41,    42,    43,    33,    32,    18,
      18,    10,    10,    18,    30,    12,    33,    24,    28,     6,
      34,    12,    11,    13,    27,    31,    22,    31,    13,    29,
      11,    11,    11,    34,     6,    21,   133,    13,    53,    23,
      22,   128,    95,   114,   117,   126,   130,    76,   108,   127
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    33,     0,    18,    19,    50,    51,    33,
      53,    17,     4,    59,    60,    31,    54,    18,    33,     5,
      61,    62,    18,    33,    32,    52,    53,    18,    23,    25,
      26,    27,    33,    62,    64,    65,    66,    67,    68,    71,
      74,    75,    76,    88,    89,    59,    54,     7,     8,    20,
      55,    56,    58,    18,    50,    44,    45,    77,    78,    85,
      10,    10,    77,    12,    18,    63,    30,    12,    52,    24,
      38,    39,    40,    41,    42,    43,    84,     9,    10,    14,
      15,    33,    34,    37,    80,    82,    83,    88,    70,    88,
      16,    72,    77,    28,    77,    64,     6,    77,    34,    57,
      64,    78,    77,    82,    36,    44,    45,    79,    86,    35,
      46,    47,    81,    87,    31,    69,    11,    31,    73,    64,
      13,    63,    22,    13,    29,    11,    80,    82,    70,    11,
      72,    11,    34,    21,    64,    79,    81,    69,    73,    58
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 78 "p2c_yacc.y"
    { program = (yyvsp[(4) - (5)].sm);
			printf("PROG\n");
		  program->stm_id = sPROG;
		  program->exp1 = create_exp();
		  program->exp1->exp_id = eID;
		  strcpy(program->exp1->name, (yyvsp[(2) - (5)].sr));
		  (yyval.sm) = program;
		;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 87 "p2c_yacc.y"
    { program = NULL;
		  (yyval.sm) = program;
		;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 96 "p2c_yacc.y"
    {   (yyval.sm) = create_stm();
		    (yyval.sm)->stm_id = sBLOCK;
		    (yyval.sm)->stm1 = (yyvsp[(1) - (3)].sm);//use $$ to store what returned from vardecs
		    (yyval.sm)->stm2 = (yyvsp[(2) - (3)].sm);//..what returned from prodecs
		    (yyval.sm)->next = (yyvsp[(3) - (3)].sm);//..what returned  from stmts
		;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 105 "p2c_yacc.y"
    { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sVARDECS;
		  (yyval.sm)->stm1 = (yyvsp[(2) - (4)].sm);
		  //printf("vardecs\n") ;
		  (yyval.sm)->next = (yyvsp[(4) - (4)].sm);
		;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 112 "p2c_yacc.y"
    { (yyval.sm) = NULL; 
		;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 117 "p2c_yacc.y"
    { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sMOREVD;
		  (yyval.sm)->stm1 = (yyvsp[(1) - (3)].sm);
		  (yyval.sm)->next = (yyvsp[(3) - (3)].sm);
		  //printf("morevd\n") ;
		;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 124 "p2c_yacc.y"
    { (yyval.sm) = NULL; 
		;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 129 "p2c_yacc.y"
    { (yyval.sm) = create_stm();
		  //printf("vardec\n") ;
		  (yyval.sm)->stm_id = sVARDEC;
		  (yyval.sm)->exp1 = create_exp();
		  (yyval.sm)->exp1->exp_id = eVARDEC;
		  strcpy((yyval.sm)->exp1->name, (yyvsp[(1) - (4)].sr));
		  (yyval.sm)->exp1->exp1 = (yyvsp[(2) - (4)].ex);
		  (yyval.sm)->exp2 = (yyvsp[(4) - (4)].ex); 
		;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 141 "p2c_yacc.y"
    { (yyval.ex) = create_exp();
		  //printf("moreid\n") ;
		  (yyval.ex)->exp_id = eMOREID;
		  strcpy((yyval.ex)->name, (yyvsp[(2) - (3)].sr));
		  (yyval.ex)->next = (yyvsp[(3) - (3)].ex); 
		;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 148 "p2c_yacc.y"
    { (yyval.ex) = NULL; 
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 153 "p2c_yacc.y"
    { (yyval.ex) = (yyvsp[(1) - (1)].ex);
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 156 "p2c_yacc.y"
    { (yyval.ex) = (yyvsp[(1) - (1)].ex);
		;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 161 "p2c_yacc.y"
    { (yyval.ex) = create_exp();
		  //printf("!!!!!!!!!!!!!!!!!!!!!!1\n") ;
		  (yyval.ex)->exp_id = eARRTYPE;
		  (yyval.ex)->exp1 = (yyvsp[(3) - (6)].ex);
		  (yyval.ex)->exp2 = (yyvsp[(6) - (6)].ex);
		;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 170 "p2c_yacc.y"
    { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eINRANGE;
		  (yyval.ex)->val = (yyvsp[(1) - (3)].nu);
		  (yyval.ex)->exp1 = create_exp();
		  (yyval.ex)->exp1->exp_id = eNUM;
		  (yyval.ex)->exp1->val = (yyvsp[(3) - (3)].nu);
		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 180 "p2c_yacc.y"
    { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eINT;
		;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 184 "p2c_yacc.y"
    { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eBOOL;
		;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 192 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		//printf("prodec") ;
		(yyval.sm)->stm_id = sPRODECS ;
		(yyval.sm)->stm1 = (yyvsp[(1) - (3)].sm) ;
		(yyval.sm)->stm2 = (yyvsp[(3) - (3)].sm) ;
		;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 200 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = NULL ;
		;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 206 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm)->stm_id = sPROC ;
		(yyval.sm) -> exp1 = create_exp() ;
		//$$->exp1->exp_id = eMOREID ; 
		(yyval.sm) -> exp1 -> exp_id = eID ; 
		strcpy( (yyval.sm)->exp1->name , (yyvsp[(2) - (4)].sr) ) ; 
		(yyval.sm)->stm1 = (yyvsp[(4) - (4)].sm) ;
		;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 218 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		//$$ = create_stm() ;
		//$$->stm_id = sCOMSTMT ;
		;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 226 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sCOMSTMT ;
		(yyval.sm) -> stm1 = (yyvsp[(2) - (4)].sm) ;
		(yyval.sm) -> stm2 = (yyvsp[(3) - (4)].sm) ;
		;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 235 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sMORESTM ;
		(yyval.sm) -> stm1 = (yyvsp[(2) - (3)].sm) ;
		(yyval.sm) -> stm2 = (yyvsp[(3) - (3)].sm) ;
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 242 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = NULL ;
		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 248 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 252 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 258 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 262 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 266 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 270 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 276 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sASSTATE ;
		(yyval.sm) -> exp1 = (yyvsp[(1) - (3)].ex) ;
		(yyval.sm) -> exp2 = (yyvsp[(3) - (3)].ex) ;
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 285 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		//printf("prostate\n") ;
		(yyval.sm) -> stm_id = sPROSTATE ;
		(yyval.sm) -> exp1 = create_exp() ; 
		(yyval.sm) -> exp1 -> exp_id = eID ;
		strcpy( (yyval.sm) -> exp1 -> name , (yyvsp[(1) - (1)].sr) ) ;
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 296 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sRESTATE ;
		(yyval.sm) -> exp1 = (yyvsp[(3) - (5)].ex) ;
		(yyval.sm) -> exp2 = (yyvsp[(4) - (5)].ex) ;
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 305 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eMOREINVAR ;
		(yyval.ex) -> exp1 = (yyvsp[(2) - (3)].ex) ;
		(yyval.ex) -> exp2 = (yyvsp[(3) - (3)].ex) ;
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 312 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = NULL ; 
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 318 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = (yyvsp[(1) - (1)].ex) ;
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 324 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sWRISTATE ; 
		(yyval.sm) -> exp1 = (yyvsp[(3) - (5)].ex) ; 
		(yyval.sm) -> exp2 = (yyvsp[(4) - (5)].ex) ;
		//printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA") ; 
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 332 "p2c_yacc.y"
    {
		//printf("XxXXXXXXXXXXXXXXXXXXX") ; 
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sWRISTATE ; 
		(yyval.sm) -> exp1 = create_exp() ; 
		(yyval.sm) -> exp1 -> exp_id = eSTRING ; 
		strcpy( (yyval.sm) -> exp1 -> name , (yyvsp[(3) - (4)].sr) ) ;
		//printf("!!!!!!!%s", $$ -> exp1 -> name ) ;  
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 344 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = (yyvsp[(1) - (1)].ex) ;
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 350 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eMOREOUTVAL ;
		(yyval.ex) -> exp1 = (yyvsp[(2) - (3)].ex) ;
		(yyval.ex) -> exp2 = (yyvsp[(3) - (3)].ex) ;
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 357 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = NULL ; 
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 363 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 367 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 371 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = (yyvsp[(1) - (1)].sm) ;
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 377 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sIFSTATE ;
		(yyval.sm) -> exp1 = (yyvsp[(2) - (4)].ex) ;
		(yyval.sm) -> stm1 = (yyvsp[(4) - (4)].sm) ;
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 384 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sIFSTATE ;
		(yyval.sm) -> exp1 = (yyvsp[(2) - (6)].ex) ;
		(yyval.sm) -> stm1 = (yyvsp[(4) - (6)].sm) ;
		(yyval.sm) -> stm2 = (yyvsp[(6) - (6)].sm) ;
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 394 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.sm) = create_stm() ;
		(yyval.sm) -> stm_id = sWHILEST ;
		(yyval.sm) -> exp1 = (yyvsp[(2) - (4)].ex) ;
		(yyval.sm) -> stm1 = (yyvsp[(4) - (4)].sm) ;
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 403 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = (yyvsp[(1) - (1)].ex) ;
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 407 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eEXPRESS ;
		(yyval.ex) -> exp1 = (yyvsp[(1) - (3)].ex) ; 
		(yyval.ex) -> exp2 = (yyvsp[(2) - (3)].ex) ; 
		(yyval.ex) -> next = (yyvsp[(3) - (3)].ex) ; 
		;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 417 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eSIMEXPRE ;
		//$$ -> exp_id = BUG ;
		(yyval.ex) -> exp1 = (yyvsp[(1) - (3)].ex) ;
		(yyval.ex) -> exp2 = (yyvsp[(2) - (3)].ex) ;
		(yyval.ex) -> next = (yyvsp[(3) - (3)].ex) ;
		;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 428 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eADDTERM ;
		(yyval.ex) -> exp1 = (yyvsp[(1) - (3)].ex) ;
		(yyval.ex) -> exp2 = (yyvsp[(2) - (3)].ex) ;
		(yyval.ex) -> next = (yyvsp[(3) - (3)].ex) ;
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 436 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = NULL ;
		;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 442 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eTERM ;
		(yyval.ex) -> exp1 = (yyvsp[(1) - (2)].ex) ;
		(yyval.ex) -> exp2 = (yyvsp[(2) - (2)].ex) ;
		;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 451 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eMULTIFAC ;
		(yyval.ex) -> exp1 = (yyvsp[(1) - (3)].ex) ;
		(yyval.ex) -> exp2 = (yyvsp[(2) - (3)].ex) ;
		(yyval.ex) -> next = (yyvsp[(3) - (3)].ex) ;
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 459 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = NULL ;
		//printf("mulfac ->>> NULLL " ) ;
		;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 466 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = (yyvsp[(1) - (1)].ex) ;
		//printf("factor ->> variable ") ; 
		;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 471 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = (yyvsp[(1) - (1)].ex) ;
		//printf("factor ->> constant") ; 
		;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 476 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eLPRP ;
		(yyval.ex) -> exp1 = (yyvsp[(2) - (3)].ex) ;
		;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 482 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eNOT ;
		(yyval.ex) -> exp1 = (yyvsp[(2) - (2)].ex) ;
		;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 490 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
	    (yyval.ex) -> exp_id = eNUM ;
		itoa( (yyvsp[(1) - (1)].nu) , (yyval.ex) -> name , 10 ) ;
		;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 496 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		//printf("CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC") ; 
	    (yyval.ex) -> exp_id = eCC ;
		strcpy( (yyval.ex) -> name , (yyvsp[(1) - (1)].sr) ) ;
		;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 503 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eTRUE ;
		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 508 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eFALSE ;
		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 516 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eEQ ;
		;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 521 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eNE ;
		;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 526 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eLT ;
		;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 531 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eGT ;
		;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 536 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eLE ;
		;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 541 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eGE ;
		;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 548 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eADD ;
		;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 553 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eMINUS ;
		;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 558 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = NULL ;
		;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 564 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eADD ;
		;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 569 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eMINUS ;
		;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 574 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eOR ;
		;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 581 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eTIMES ;
		;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 586 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eDIV ;
		;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 591 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eAND ;
		;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 598 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eID ;
		strcpy( (yyval.ex) -> name , (yyvsp[(1) - (1)].sr) ) ;
		;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 604 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = (yyvsp[(1) - (1)].ex) ;
		;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 610 "p2c_yacc.y"
    { // ****** Write your own semantic action
		(yyval.ex) = create_exp() ;
		(yyval.ex) -> exp_id = eINDEXVAR ;
		strcpy( (yyval.ex) -> name , (yyvsp[(1) - (4)].sr) ) ; 
		(yyval.ex) -> exp1 = (yyvsp[(3) - (4)].ex) ; 
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2355 "p2c_yacc.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 619 "p2c_yacc.y"


// for version compatibility
int yyerror(char *s)
{
	printf("%s\n",s);
        return 1;
}


