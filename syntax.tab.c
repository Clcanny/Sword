/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "syntax.y" /* yacc.c:339  */

    #include "syntax_tree.h"
    #include "SDTAction.h"
    #include "symbol_table.h"
    #include "DebugMacro.h"
    #include "Pointer.h"

    #define GROUP_1 100
    #define GROUP_2 200
    #define GROUP_3 300
    #define GROUP_4 400
    #define GROUP_5 500
    #define GROUP_6 600
    #define GROUP_7 700
    #define GROUP_8 800
    #define GROUP_9 900
    #define GROUP_10 1000

    int has_error = 0;
    void yyerror(const char *msg);
    void yyerror_lineno(const char *msg, int lineno);

#line 89 "syntax.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntax.tab.h".  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DEFER = 258,
    REFER = 259,
    SINGLEOR = 260,
    DATA = 261,
    PLACEHOLDER = 262,
    LOWERID = 263,
    UPPERID = 264,
    FUNC = 265,
    DEDUCT = 266,
    LET = 267,
    ASSIGNOP = 268,
    RELOP = 269,
    AND = 270,
    OR = 271,
    NOT = 272,
    PLUS = 273,
    MINUS = 274,
    STAR = 275,
    DIV = 276,
    BUILDINTYPE = 277,
    STRUCT = 278,
    INT = 279,
    FLOAT = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    RETURN = 284,
    SEMI = 285,
    COMMA = 286,
    DOT = 287,
    LP = 288,
    RP = 289,
    LB = 290,
    RB = 291,
    LC = 292,
    RC = 293,
    LOWER_THAN_ELSE = 294,
    LOWER_THAN_DEDUCT = 295,
    LOWER_THAN_SEMI = 296,
    LOWER_THAN_ASSIGNOP = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "syntax.y" /* yacc.c:355  */

    int type_int;
    void *type_node;

#line 177 "syntax.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "syntax.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   425

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,   102,   103,   108,   109,   111,   112,   113,
     114,   115,   116,   117,   120,   126,   130,   133,   147,   148,
     151,   152,   155,   158,   162,   163,   166,   167,   168,   173,
     179,   184,   187,   190,   191,   194,   197,   198,   201,   204,
     207,   208,   209,   212,   216,   219,   220,   224,   229,   232,
     235,   240,   241,   243,   244,   246,   247,   252,   254,   257,
     258,   261,   262,   266,   270,   274,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   286,   288,   290,   291,   293,
     295,   296,   297,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFER", "REFER", "SINGLEOR", "DATA",
  "PLACEHOLDER", "LOWERID", "UPPERID", "FUNC", "DEDUCT", "LET", "ASSIGNOP",
  "RELOP", "AND", "OR", "NOT", "PLUS", "MINUS", "STAR", "DIV",
  "BUILDINTYPE", "STRUCT", "INT", "FLOAT", "IF", "ELSE", "WHILE", "RETURN",
  "SEMI", "COMMA", "DOT", "LP", "RP", "LB", "RB", "LC", "RC",
  "LOWER_THAN_ELSE", "LOWER_THAN_DEDUCT", "LOWER_THAN_SEMI",
  "LOWER_THAN_ASSIGNOP", "$accept", "Program", "DSList", "Stmt", "CompSt",
  "FuncParamType", "FuncType", "FuncDec", "VarList", "ParamDec",
  "FuncBody", "FuncCall", "Args", "ArrayType", "ReferType", "ADTDef",
  "ADTHeader", "ADTParamList", "ADTParam", "ConstructorDecList",
  "ConstructorDec", "ConstructorId", "ConstructorUseTypeList", "TypeId",
  "ADTType", "SpecifierList", "PatternMatching",
  "PatternMatchingParamList", "Specifier", "VarDef", "DecList", "Dec",
  "VarDec", "VarUse", "Exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

#define YYPACT_NINF -131

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-131)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     123,   -21,    -5,    16,  -131,  -131,     0,    12,   201,   201,
    -131,  -131,  -131,    14,    19,   201,  -131,    10,   123,    58,
    -131,   123,  -131,  -131,    31,  -131,  -131,  -131,  -131,    50,
      76,    55,  -131,  -131,     2,    61,  -131,   310,   201,   168,
      86,    47,    87,    62,    17,    21,   201,   201,   331,  -131,
      89,    63,    75,     2,   226,    74,  -131,  -131,  -131,  -131,
      87,    47,  -131,   201,  -131,    77,   100,  -131,   201,   201,
     201,   201,   201,   201,   201,   201,  -131,    90,    68,   248,
      39,   257,  -131,  -131,    86,    82,    85,     5,  -131,    70,
     201,   279,   288,  -131,    47,   105,    47,  -131,  -131,  -131,
     115,   403,    92,   153,   217,   113,   201,   361,   149,   385,
     377,    21,    21,    17,    17,  -131,    94,  -131,   102,   352,
    -131,  -131,  -131,  -131,    47,  -131,    47,    70,    70,   104,
     123,   123,    88,    47,  -131,    87,  -131,   403,  -131,    95,
    -131,  -131,  -131,  -131,   361,   191,  -131,   191,  -131,  -131,
    -131,   121,   114,  -131,    88,   115,  -131,  -131,  -131,  -131,
     113,   123,  -131,  -131,  -131
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,    64,    43,     0,    52,     0,     0,
      51,    81,    82,     0,     0,     0,    13,     0,     4,     0,
       2,     4,     8,    55,     0,    83,    76,    53,    54,     0,
       0,     0,    56,    58,     0,     0,    80,     0,     0,     0,
      34,     0,     0,     0,    69,    74,     0,     0,     0,    52,
       0,     0,    21,     0,     0,     0,     1,     3,    23,     7,
       0,    46,    63,     0,    57,    59,    61,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,    35,    32,    34,     0,     0,    16,    39,    50,
       0,     0,     0,     9,     0,     0,     0,    22,    75,    14,
      37,    42,     0,    46,     0,     0,     0,    65,    66,    67,
      68,    70,    71,    72,    73,    79,     0,    24,     0,    28,
      78,    30,    77,    33,     0,    17,     0,    50,    50,     0,
       0,     0,    19,     0,    20,     0,    31,    42,    38,    42,
      44,    45,    29,    60,    62,     0,    25,     0,    15,    49,
      48,     0,    10,    12,    18,    37,    41,    40,    27,    26,
       0,     0,    36,    47,    11
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,   -10,  -125,   119,    18,  -131,  -131,    54,  -131,
    -131,  -131,  -130,  -131,  -131,  -131,  -131,    71,   -36,    -9,
      23,   112,  -116,   156,  -131,    80,  -131,   -44,   -15,  -131,
      56,  -131,   -50,  -131,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    86,    23,    24,    51,    52,
      25,    26,   118,    27,    28,    29,    30,    83,   137,   136,
     100,   101,   138,    31,    32,   102,    33,   129,    34,    35,
      64,    65,    66,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    45,    53,    97,    84,   152,   153,    48,    55,    54,
      62,    57,    38,     1,     2,   158,   126,   159,     4,     5,
       6,   156,    49,   157,    80,     5,    87,     8,    39,     9,
      79,    81,    10,    41,    11,    12,   164,    63,    91,    92,
      63,    74,    75,    17,    50,    42,   103,    46,    84,    77,
      78,    85,    47,    77,    78,   104,     5,     6,    56,    49,
     107,   108,   109,   110,   111,   112,   113,   114,    18,    10,
     119,     1,    43,   121,    63,   116,     4,   127,   128,   132,
      59,    53,    81,   149,   150,     8,   139,     9,   103,    60,
      61,    67,    11,    12,    82,    90,    88,    95,   144,    85,
      94,    17,   117,    82,     5,     6,    96,    49,   105,    80,
     163,    87,    99,   106,   115,   124,   133,    10,   154,   125,
     135,    62,   139,    63,   139,   145,     1,     2,   140,     3,
      63,     4,     5,     6,   160,     7,   146,   119,   151,   119,
       8,   161,     9,    58,   148,    10,   162,    11,    12,    13,
     134,    14,    15,    16,    89,   123,    17,    85,   155,    40,
      18,   143,     5,     6,     0,    49,     0,    72,    73,    74,
      75,     1,     2,     0,     0,    10,     4,     5,     6,     0,
      49,    77,    78,   141,     0,     8,     0,     9,    63,     0,
      10,     0,    11,    12,     1,    43,     0,     0,   116,     4,
       0,    17,     0,     0,     1,    43,     0,     0,     8,     4,
       9,     0,     0,     0,     0,    11,    12,     0,     8,     0,
       9,     0,     0,     0,    17,    11,    12,     0,     0,     0,
      68,    69,    70,    71,    17,    72,    73,    74,    75,    68,
      69,    70,    71,     0,    72,    73,    74,    75,     0,    77,
      78,     0,     0,   142,     0,     0,     0,     0,    77,    78,
      98,    68,    69,    70,    71,     0,    72,    73,    74,    75,
      68,    69,    70,    71,     0,    72,    73,    74,    75,     0,
      77,    78,   120,     0,     0,     0,     0,     0,     0,    77,
      78,   122,    68,    69,    70,    71,     0,    72,    73,    74,
      75,    68,    69,    70,    71,     0,    72,    73,    74,    75,
       0,    77,    78,   130,     0,     0,     0,     0,     0,     0,
      77,    78,   131,    68,    69,    70,    71,     0,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,    77,    78,    68,    69,    70,    71,     0,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,    77,    78,    68,    69,    70,    71,     0,
      72,    73,    74,    75,    68,    69,    70,    71,     0,    72,
      73,    74,    75,   147,    77,    78,     0,     0,     0,     0,
       0,    69,    70,    77,    78,    72,    73,    74,    75,    69,
       0,     0,     0,    72,    73,    74,    75,    85,     0,    77,
      78,    82,     5,     6,     0,    49,     0,    77,    78,     0,
       0,     0,     0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
       8,     9,    17,    53,    40,   130,   131,    15,    18,    17,
       8,    21,    33,     3,     4,   145,    11,   147,     8,     9,
      10,   137,    12,   139,    39,     9,    41,    17,    33,    19,
      38,    39,    22,    33,    24,    25,   161,    35,    46,    47,
      35,    20,    21,    33,    34,    33,    61,    33,    84,    32,
      33,     4,    33,    32,    33,    63,     9,    10,     0,    12,
      68,    69,    70,    71,    72,    73,    74,    75,    37,    22,
      78,     3,     4,    34,    35,     7,     8,     7,     8,    94,
      30,    96,    90,   127,   128,    17,   101,    19,   103,    13,
      35,    30,    24,    25,     8,    33,     9,    34,   106,     4,
      11,    33,    34,     8,     9,    10,    31,    12,    31,   124,
     160,   126,    38,    13,    24,    33,    11,    22,   133,    34,
       5,     8,   137,    35,   139,    31,     3,     4,    36,     6,
      35,     8,     9,    10,    13,    12,    34,   145,    34,   147,
      17,    27,    19,    24,   126,    22,   155,    24,    25,    26,
      96,    28,    29,    30,    42,    84,    33,     4,   135,     3,
      37,   105,     9,    10,    -1,    12,    -1,    18,    19,    20,
      21,     3,     4,    -1,    -1,    22,     8,     9,    10,    -1,
      12,    32,    33,   103,    -1,    17,    -1,    19,    35,    -1,
      22,    -1,    24,    25,     3,     4,    -1,    -1,     7,     8,
      -1,    33,    -1,    -1,     3,     4,    -1,    -1,    17,     8,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    17,    -1,
      19,    -1,    -1,    -1,    33,    24,    25,    -1,    -1,    -1,
      13,    14,    15,    16,    33,    18,    19,    20,    21,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    32,    33,
      34,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    14,    15,    32,    33,    18,    19,    20,    21,    14,
      -1,    -1,    -1,    18,    19,    20,    21,     4,    -1,    32,
      33,     8,     9,    10,    -1,    12,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     8,     9,    10,    12,    17,    19,
      22,    24,    25,    26,    28,    29,    30,    33,    37,    44,
      45,    46,    47,    49,    50,    53,    54,    56,    57,    58,
      59,    66,    67,    69,    71,    72,    76,    77,    33,    33,
      66,    33,    33,     4,    77,    77,    33,    33,    77,    12,
      34,    51,    52,    71,    77,    45,     0,    45,    47,    30,
      13,    35,     8,    35,    73,    74,    75,    30,    13,    14,
      15,    16,    18,    19,    20,    21,    30,    32,    33,    77,
      71,    77,     8,    60,    61,     4,    48,    71,     9,    64,
      33,    77,    77,    30,    11,    34,    31,    75,    34,    38,
      63,    64,    68,    71,    77,    31,    13,    77,    77,    77,
      77,    77,    77,    77,    77,    24,     7,    34,    55,    77,
      34,    34,    34,    60,    33,    34,    11,     7,     8,    70,
      34,    34,    71,    11,    51,     5,    62,    61,    65,    71,
      36,    68,    36,    73,    77,    31,    34,    31,    48,    70,
      70,    34,    46,    46,    71,    63,    65,    65,    55,    55,
      13,    27,    62,    75,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    47,    48,    48,    49,    50,    50,
      51,    51,    52,    53,    54,    54,    55,    55,    55,    56,
      57,    58,    59,    60,    60,    61,    62,    62,    63,    64,
      65,    65,    65,    66,    67,    68,    68,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     2,     2,     1,     3,
       5,     7,     5,     1,     3,     3,     1,     4,     5,     4,
       3,     1,     2,     2,     3,     4,     3,     3,     1,     4,
       4,     4,     3,     2,     0,     1,     3,     0,     2,     1,
       2,     2,     0,     1,     4,     2,     0,     7,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       3,     1,     3,     1,     1,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     2,     3,     1,     4,     4,     3,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
     '$$ = $1'.

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
#line 78 "syntax.y" /* yacc.c:1646  */
    {
        (yyval.type_node) = new_parent_node("Program", GROUP_1 + 1, 1, (yyvsp[0].type_node));
    #ifdef syntax_debug_print
        print_child_node((yyval.type_node), 0);
    #endif
        initActionTable();
        initSymbolTableStack();
        traversalTreePerformAction((yyval.type_node));
    #ifdef pointer_debug
    	printPointerLog();
    #endif
        cleanActionTable();
    #ifdef st_debug_print
        printGlobalSymbolTable();
    #endif
        /* clean_up_syntax_tree($$); */
        /* cleanUpSymbolTable(); */
    }
#line 1565 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 102 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("DSList", GROUP_2 + 1, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1571 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("DSList", GROUP_2 + 2, 0); }
#line 1577 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 1, 1, (yyvsp[-1].type_node)); }
#line 1583 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 109 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 2, 1, (yyvsp[-1].type_node)); }
#line 1589 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 3, 1, (yyvsp[-1].type_node)); }
#line 1595 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 112 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 4, 1, (yyvsp[0].type_node)); }
#line 1601 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 113 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 5, 1, (yyvsp[-1].type_node)); }
#line 1607 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 6, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1613 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 115 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 7, 3, (yyvsp[-4].type_node), (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1619 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 116 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 8, 3, (yyvsp[-4].type_node), (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1625 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 117 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Stmt", GROUP_3 + 9, 0); }
#line 1631 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 120 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Compst", GROUP_3 + 10, 1, (yyvsp[-1].type_node)); }
#line 1637 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 126 "syntax.y" /* yacc.c:1646  */
    { 
        (yyval.type_node) = new_parent_node("FuncType", GROUP_4 + 1, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); 
        (yyval.type_node) = new_parent_node("Specifier", GROUP_8 + 6, 1, (yyval.type_node));
    }
#line 1646 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 130 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = (yyvsp[0].type_node); }
#line 1652 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 133 "syntax.y" /* yacc.c:1646  */
    { 
        if (strcmp(((AST_node *)(((AST_node *)(yyvsp[-1].type_node))->first_child))->str, "FuncType"))
        {
            (yyval.type_node) = new_parent_node("FuncType", GROUP_4 + 2, 1, (yyvsp[-1].type_node));
            (yyval.type_node) = new_parent_node("Specifier", GROUP_8 + 6, 1, (yyval.type_node));
        }
        else 
        {
            (yyval.type_node) = (yyvsp[-1].type_node);
        }
    }
#line 1668 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 147 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("FuncDec", GROUP_4 + 3, 2, (yyvsp[-3].type_node), (yyvsp[0].type_node)); }
#line 1674 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 148 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("FuncDec", GROUP_4 + 4, 1, (yyvsp[0].type_node)); }
#line 1680 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 151 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("VarList", GROUP_4 + 5, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1686 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 152 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("VarList", GROUP_4 + 6, 1, (yyvsp[0].type_node)); }
#line 1692 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 155 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ParamDec", GROUP_4 + 7, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1698 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("FuncBody", GROUP_4 + 8, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1704 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 162 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("FuncCall", GROUP_4 + 9, 1, (yyvsp[-2].type_node)); }
#line 1710 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 163 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("FuncCall", GROUP_4 + 10, 2, (yyvsp[-3].type_node), (yyvsp[-1].type_node)); }
#line 1716 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 166 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Args", GROUP_4 + 11, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1722 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 167 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Args", GROUP_4 + 12, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1728 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 168 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Args", GROUP_4 + 13, 0); }
#line 1734 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 173 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ArrayType", GROUP_5 + 1, 2, (yyvsp[-3].type_node), (yyvsp[-1].type_node)); }
#line 1740 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 179 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ReferType", GROUP_6 + 1, 1, (yyvsp[-1].type_node)); }
#line 1746 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 184 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ADTDef", GROUP_7 + 2, 3, (yyvsp[-3].type_node), (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1752 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 187 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ADTHeader", GROUP_7 + 3, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1758 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 190 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ADTParamList", GROUP_7 + 4, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1764 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 191 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ADTParamList", GROUP_7 + 5, 0); }
#line 1770 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 194 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ADTParam", GROUP_7 + 6, 1, (yyvsp[0].type_node)); }
#line 1776 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 197 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ConstructorDecList", GROUP_7 + 7, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1782 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 198 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ConstructorDecList", GROUP_7 + 8, 0); }
#line 1788 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 201 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ConstructorDec", GROUP_7 + 9, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1794 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 204 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ConstructorId", GROUP_7 + 10, 1, (yyvsp[0].type_node)); }
#line 1800 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 207 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ConstructorUseTypeList", GROUP_7 + 11, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1806 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 208 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ConstructorUseTypeList", GROUP_7 + 12, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1812 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 209 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ConstructorUseTypeList", GROUP_7 + 13, 0); }
#line 1818 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 212 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("TypeId", GROUP_7 + 14, 1, (yyvsp[0].type_node)); }
#line 1824 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 216 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("ADTType", GROUP_7 + 15, 2, (yyvsp[-3].type_node), (yyvsp[-1].type_node)); }
#line 1830 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("SpecifierList", GROUP_7 + 16, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1836 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 220 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("SpecifierList", GROUP_7 + 17, 0); }
#line 1842 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 224 "syntax.y" /* yacc.c:1646  */
    { 
        (yyval.type_node) = new_parent_node("PatternMatching", GROUP_7 + 15, 3, (yyvsp[-4].type_node), (yyvsp[-3].type_node), (yyvsp[0].type_node)); 
    }
#line 1850 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 229 "syntax.y" /* yacc.c:1646  */
    { 
        (yyval.type_node) = new_parent_node("PatternMatchingParamList", GROUP_7 + 16, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1858 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 232 "syntax.y" /* yacc.c:1646  */
    { 
        (yyval.type_node) = new_parent_node("PatternMatchingParamList", GROUP_7 + 17, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); 
    }
#line 1866 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 235 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("PatternMatchingParamList", GROUP_7 + 18, 0); }
#line 1872 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 240 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Specifier", GROUP_8 + 1, 1, (yyvsp[0].type_node)); }
#line 1878 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 241 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Specifier", GROUP_8 + 2, 1, (yyvsp[0].type_node)); }
#line 1884 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 243 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Specifier", GROUP_8 + 4, 1, (yyvsp[0].type_node)); }
#line 1890 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 244 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Specifier", GROUP_8 + 5, 1, (yyvsp[0].type_node)); }
#line 1896 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 246 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = (yyvsp[0].type_node); }
#line 1902 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 247 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Specifier", GROUP_8 + 7, 1, (yyvsp[0].type_node)); }
#line 1908 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 252 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("VarDef", GROUP_9 + 1, 2, (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1914 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 254 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("VarDef", GROUP_9 + 2, 1, (yyvsp[0].type_node)); }
#line 1920 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 257 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("DecList", GROUP_9 + 3, 1, (yyvsp[0].type_node)); }
#line 1926 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("DecList", GROUP_9 + 4, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1932 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 261 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Dec", GROUP_9 + 5, 1, (yyvsp[0].type_node)); }
#line 1938 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 262 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Dec", GROUP_9 + 6, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1944 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 266 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("VarDec", GROUP_9 + 7, 1, (yyvsp[0].type_node)); }
#line 1950 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 270 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("VarUse", GROUP_9 + 8, 1, (yyvsp[0].type_node)); }
#line 1956 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 274 "syntax.y" /* yacc.c:1646  */
    {(yyval.type_node) = new_parent_node("Exp", GROUP_10 + 1, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1962 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 276 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 2, 3, (yyvsp[-2].type_node), (yyvsp[-1].type_node), (yyvsp[0].type_node)); }
#line 1968 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 277 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 3, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1974 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 278 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 4, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1980 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 279 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 5, 1, (yyvsp[0].type_node)); }
#line 1986 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 280 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 6, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1992 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 281 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 7, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 1998 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 282 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 8, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 2004 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 283 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 9, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 2010 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 284 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 10, 1, (yyvsp[0].type_node)); }
#line 2016 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 286 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 11, 1, (yyvsp[-1].type_node)); }
#line 2022 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 288 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 12, 1, (yyvsp[0].type_node)); }
#line 2028 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 290 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 13, 2, (yyvsp[-3].type_node), (yyvsp[-1].type_node)); }
#line 2034 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 291 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 14, 2, (yyvsp[-3].type_node), (yyvsp[-1].type_node)); }
#line 2040 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 293 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 15, 2, (yyvsp[-2].type_node), (yyvsp[0].type_node)); }
#line 2046 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 295 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 16, 1, (yyvsp[0].type_node)); }
#line 2052 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 296 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 17, 1, (yyvsp[0].type_node)); }
#line 2058 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 297 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 18, 1, (yyvsp[0].type_node)); }
#line 2064 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 298 "syntax.y" /* yacc.c:1646  */
    { (yyval.type_node) = new_parent_node("Exp", GROUP_10 + 19, 1, (yyvsp[0].type_node)); }
#line 2070 "syntax.tab.c" /* yacc.c:1646  */
    break;


#line 2074 "syntax.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
