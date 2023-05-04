/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "trad1.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para code
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;

char *code_generated;
char *act_function;

// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
} t_attr ;

#define YYSTYPE t_attr


#line 102 "trad1.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    NUMBER = 258,
    IDENTIF = 259,
    INTEGER = 260,
    STRING = 261,
    MAIN = 262,
    WHILE = 263,
    FOR = 264,
    IF = 265,
    ELSE = 266,
    PUTS = 267,
    PRINTF = 268,
    AND = 269,
    OR = 270,
    LEQ = 271,
    GEQ = 272,
    EQ = 273,
    NEQ = 274,
    RETURN = 275,
    UNARY_SIGN = 276
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

#define YYUNDEFTOK  2
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    26,    24,    30,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
      22,    21,    23,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    97,    98,   101,   109,   110,   120,   122,
     124,   130,   131,   134,   135,   131,   139,   140,   149,   150,
     157,   160,   157,   166,   167,   168,   168,   170,   170,   174,
     175,   175,   177,   177,   180,   181,   181,   183,   183,   188,
     189,   191,   200,   202,   203,   204,   205,   210,   219,   220,
     225,   226,   227,   232,   242,   242,   247,   248,   247,   252,
     253,   254,   253,   259,   260,   259,   265,   269,   270,   280,
     281,   283,   285,   287,   289,   291,   293,   295,   299,   301,
     303,   305,   309,   310,   312,   314,   316,   320,   322,   324,
     326,   328,   330,   332,   334,   338,   339,   341,   345,   346,
     348,   349,   353,   361,   362,   365,   370,   371,   380,   381
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENTIF", "INTEGER", "STRING",
  "MAIN", "WHILE", "FOR", "IF", "ELSE", "PUTS", "PRINTF", "AND", "OR",
  "LEQ", "GEQ", "EQ", "NEQ", "RETURN", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "UNARY_SIGN", "';'", "','", "'['", "']'", "'('", "')'",
  "'{'", "'}'", "$accept", "axioma", "declaracionesGlob",
  "declaracionesGlobRec", "restDeclaracionesGlob", "restGlobVar",
  "funcionesDef", "$@1", "$@2", "$@3", "funcionArgs", "recArgFunct",
  "mainDef", "$@4", "$@5", "recSentenciaFin", "$@6", "$@7",
  "recSentenciaNoFin", "$@8", "$@9", "recSentenciaCond", "$@10", "$@11",
  "sentencia", "declaraciones", "restDeclaraciones", "restVar",
  "asignacion", "sentenciaWhile", "$@12", "sentenciaIF", "$@13", "$@14",
  "restoIF", "$@15", "$@16", "sentenciaFOR", "$@17", "$@18",
  "declaracionFor", "printRec", "expresionBool", "expresionAric",
  "termino", "operando", "varIdentf", "isVector", "funcionLlamada",
  "funcionArgsLlamada", "recArgFunctLlamada", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    61,    60,    62,    43,    45,    42,    47,   276,    59,
      44,    91,    93,    40,    41,   123,   125
};
# endif

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    18,    30,    31,    64,     3,  -172,    61,   101,     1,
     108,   110,    84,   112,    82,  -172,  -172,  -172,    87,   119,
    -172,   123,    96,   114,  -172,     3,   104,   120,   109,   111,
      84,   152,  -172,   112,  -172,  -172,  -172,  -172,   125,  -172,
       7,     7,  -172,     0,   154,   127,   128,   129,   135,   137,
       4,  -172,  -172,  -172,   143,   144,  -172,  -172,  -172,   145,
    -172,     4,   157,    91,     4,   170,     4,   173,   174,  -172,
       0,     6,     6,     4,   258,  -172,  -172,  -172,  -172,  -172,
       7,  -172,  -172,  -172,  -172,   210,   155,     4,     4,   185,
     187,   168,  -172,   199,   202,   182,   204,   209,  -172,  -172,
     196,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,   211,    31,  -172,     4,  -172,  -172,   322,
     322,   216,   254,  -172,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   230,    91,     4,   231,
     233,     4,  -172,   115,    35,    39,    39,   360,   360,    39,
      39,    -1,    -1,  -172,  -172,  -172,   251,  -172,  -172,  -172,
      91,   348,   336,   140,   140,   372,   372,   140,   140,    21,
      21,  -172,  -172,  -172,  -172,   274,  -172,  -172,   227,     4,
    -172,  -172,   187,   116,   263,   116,     4,   234,   290,     7,
    -172,     4,  -172,  -172,  -172,   104,   235,  -172,   227,   241,
     242,  -172,   306,   116,   244,   275,  -172,  -172,  -172,   251,
    -172,  -172,  -172,   259,  -172,  -172,   116,   116,  -172,  -172,
    -172,   116,  -172,  -172,  -172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,    11,     0,     8,     1,     0,     0,     3,
       0,     0,     6,    16,     0,     2,     4,     9,     0,     0,
       5,     0,     0,     0,    10,     8,   103,    18,     0,     0,
       6,     0,   102,    16,    17,    12,    20,     7,     0,    19,
       0,     0,   104,   103,     0,     0,     0,     0,     0,     0,
       0,    23,    13,    27,     0,     0,    43,    44,    45,     0,
      21,   106,     0,    50,     0,     0,     0,     0,     0,    99,
     103,     0,     0,     0,     0,    82,    95,    98,   101,    14,
       0,    39,    40,    46,    22,   108,     0,     0,     0,     0,
      48,     0,    69,     0,     0,     0,     0,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    11,    28,   106,   107,   105,    53,
      51,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,   100,    87,    88,    92,    94,    90,    89,    91,
      93,    83,    84,    85,    86,    24,     0,    15,   109,    52,
      50,    70,    71,    75,    77,    73,    72,    74,    76,    78,
      79,    80,    81,    54,    66,     0,    56,    42,    67,     0,
      26,    32,    48,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    34,    55,    35,   103,     0,    57,    67,     0,
      30,    33,     0,     0,     0,    59,    68,    41,    29,     0,
      37,    36,    63,     0,    58,    31,     0,     0,    60,    38,
      64,     0,    65,    61,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   286,  -172,   272,   285,   197,  -172,  -172,  -172,
     293,  -172,  -172,  -172,  -172,   -36,  -172,  -172,   118,  -172,
    -172,  -171,  -172,  -172,   -38,  -172,   136,  -124,   150,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,   153,   -28,   -32,   -43,    -4,   321,   -39,   -40,   240,
    -172
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    20,    12,     8,    40,    79,   114,
      22,    34,    15,    41,    84,    52,   156,    80,   180,   209,
     189,   193,   203,   216,   194,    54,   123,    90,    55,    56,
     183,    57,   185,   205,   214,   221,   224,    58,   217,   222,
      94,   187,    91,    85,    75,    76,    77,    32,    78,    86,
     117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    59,    53,    53,    62,    60,     1,    69,    70,    69,
      70,    43,    44,   174,   197,    45,    46,    47,    74,    48,
      49,    92,     5,    92,    10,   111,   112,    50,    71,    72,
       6,    31,   211,    61,    11,     7,   182,    73,    95,    73,
      59,   100,    53,    51,   115,   219,   220,   134,   135,   101,
     223,   103,   104,   105,   106,   119,   120,   107,   108,   109,
     110,   111,   112,   109,   110,   111,   112,    98,    99,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,     9,    13,    92,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    14,   178,
     175,    17,    88,    18,    19,    23,    59,    21,   181,    24,
      43,    44,    89,    25,    45,    46,    47,    26,    48,    49,
      28,   103,   104,   105,   106,    31,   191,   107,   108,   109,
     110,   111,   112,    59,    35,    59,    36,   188,    29,    59,
      33,    53,   192,   201,   198,    38,    62,    42,    63,   202,
      64,    65,    66,    59,   132,   133,   134,   135,    67,    59,
      68,   181,    81,    82,    83,    93,    59,    59,    87,    96,
      97,    59,   124,   125,   126,   127,   128,   129,   121,   118,
     130,   131,   132,   133,   134,   135,   124,   125,   126,   127,
     128,   129,   136,   137,   130,   131,   132,   133,   134,   135,
     101,   102,   103,   104,   105,   106,   139,   122,   107,   108,
     109,   110,   111,   112,   101,   102,   103,   104,   105,   106,
     142,   138,   107,   108,   109,   110,   111,   112,   140,   141,
     116,   101,   102,   103,   104,   105,   106,   155,   159,   107,
     108,   109,   110,   111,   112,    43,    44,   186,   160,    45,
      46,    47,   177,    48,    49,   173,   176,   195,   199,   204,
     207,   179,   101,   102,   103,   104,   105,   106,   208,   212,
     107,   108,   109,   110,   111,   112,   213,   113,   124,   125,
     126,   127,   128,   129,   218,    16,   130,   131,   132,   133,
     134,   135,    37,   184,   101,   102,   103,   104,   105,   106,
      30,   157,   107,   108,   109,   110,   111,   112,   190,   200,
     101,   102,   103,   104,   105,   106,    39,   215,   107,   108,
     109,   110,   111,   112,   196,   210,   101,   102,   103,   104,
     105,   106,    27,     0,   107,   108,   109,   110,   111,   112,
     124,   206,   126,   127,   128,   129,   158,     0,   130,   131,
     132,   133,   134,   135,   126,   127,   128,   129,     0,     0,
     130,   131,   132,   133,   134,   135,   103,   104,     0,     0,
       0,     0,   107,   108,   109,   110,   111,   112,   126,   127,
       0,     0,     0,     0,   130,   131,   132,   133,   134,   135
};

static const yytype_int16 yycheck[] =
{
      40,    41,    40,    41,    43,    41,     5,     3,     4,     3,
       4,     4,     5,   137,   185,     8,     9,    10,    50,    12,
      13,    64,     4,    66,    21,    26,    27,    20,    24,    25,
       0,    31,   203,    33,    31,     4,   160,    33,    66,    33,
      80,    73,    80,    36,    80,   216,   217,    26,    27,    14,
     221,    16,    17,    18,    19,    87,    88,    22,    23,    24,
      25,    26,    27,    24,    25,    26,    27,    71,    72,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    29,    33,   138,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     7,   141,
     138,     3,    21,     3,    30,    33,   156,     5,   156,    32,
       4,     5,    31,     4,     8,     9,    10,     4,    12,    13,
      34,    16,    17,    18,    19,    31,    20,    22,    23,    24,
      25,    26,    27,   183,    35,   185,    35,   179,    34,   189,
      30,   189,    36,   189,   186,     3,   195,    32,     4,   191,
      33,    33,    33,   203,    24,    25,    26,    27,    33,   209,
      33,   209,    29,    29,    29,     5,   216,   217,    21,     6,
       6,   221,    14,    15,    16,    17,    18,    19,     3,    34,
      22,    23,    24,    25,    26,    27,    14,    15,    16,    17,
      18,    19,    34,     4,    22,    23,    24,    25,    26,    27,
      14,    15,    16,    17,    18,    19,    34,    30,    22,    23,
      24,    25,    26,    27,    14,    15,    16,    17,    18,    19,
      34,    29,    22,    23,    24,    25,    26,    27,    34,    30,
      30,    14,    15,    16,    17,    18,    19,    36,    32,    22,
      23,    24,    25,    26,    27,     4,     5,    30,     4,     8,
       9,    10,    29,    12,    13,    35,    35,     4,    34,    34,
      29,    20,    14,    15,    16,    17,    18,    19,    36,    35,
      22,    23,    24,    25,    26,    27,    11,    29,    14,    15,
      16,    17,    18,    19,    35,     9,    22,    23,    24,    25,
      26,    27,    30,    29,    14,    15,    16,    17,    18,    19,
      25,   114,    22,    23,    24,    25,    26,    27,   182,    29,
      14,    15,    16,    17,    18,    19,    33,   209,    22,    23,
      24,    25,    26,    27,   184,    29,    14,    15,    16,    17,
      18,    19,    21,    -1,    22,    23,    24,    25,    26,    27,
      14,   198,    16,    17,    18,    19,   116,    -1,    22,    23,
      24,    25,    26,    27,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    26,    27,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    38,    39,    40,     4,     0,     4,    43,    29,
      21,    31,    42,    33,     7,    49,    39,     3,     3,    30,
      41,     5,    47,    33,    32,     4,     4,    83,    34,    34,
      42,    31,    84,    30,    48,    35,    35,    41,     3,    47,
      44,    50,    32,     4,     5,     8,     9,    10,    12,    13,
      20,    36,    52,    61,    62,    65,    66,    68,    74,    85,
      52,    33,    84,     4,    33,    33,    33,    33,    33,     3,
       4,    24,    25,    33,    80,    81,    82,    83,    85,    45,
      54,    29,    29,    29,    51,    80,    86,    21,    21,    31,
      64,    79,    81,     5,    77,    79,     6,     6,    82,    82,
      80,    14,    15,    16,    17,    18,    19,    22,    23,    24,
      25,    26,    27,    29,    46,    52,    30,    87,    34,    80,
      80,     3,    30,    63,    14,    15,    16,    17,    18,    19,
      22,    23,    24,    25,    26,    27,    34,     4,    29,    34,
      34,    30,    34,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    36,    53,    43,    86,    32,
       4,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    35,    64,    79,    35,    29,    80,    20,
      55,    61,    64,    67,    29,    69,    30,    78,    80,    57,
      63,    20,    36,    58,    61,     4,    65,    58,    80,    34,
      29,    52,    80,    59,    34,    70,    78,    29,    36,    56,
      29,    58,    35,    11,    71,    55,    60,    75,    35,    58,
      58,    72,    76,    58,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    41,    41,    42,    42,
      42,    43,    44,    45,    46,    43,    47,    47,    48,    48,
      50,    51,    49,    52,    52,    53,    52,    54,    52,    55,
      56,    55,    57,    55,    58,    59,    58,    60,    58,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    63,    63,
      64,    64,    64,    65,    67,    66,    69,    70,    68,    71,
      72,    73,    71,    75,    76,    74,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    83,    84,    84,    85,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     4,     0,     4,     0,     2,
       3,     0,     0,     0,     0,    10,     0,     3,     0,     2,
       0,     0,     7,     1,     4,     0,     5,     0,     3,     4,
       0,     5,     0,     3,     1,     0,     3,     0,     5,     2,
       2,     8,     5,     1,     1,     1,     2,     4,     0,     4,
       0,     2,     3,     4,     0,     7,     0,     0,     9,     0,
       0,     0,     5,     0,     0,    12,     3,     0,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     1,     1,
       3,     1,     2,     0,     3,     4,     0,     2,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 92 "trad1.y"
                                                        { ; }
#line 1532 "trad1.tab.c"
    break;

  case 3:
#line 97 "trad1.y"
                                                                                { ; }
#line 1538 "trad1.tab.c"
    break;

  case 4:
#line 98 "trad1.y"
                                                                                { ; }
#line 1544 "trad1.tab.c"
    break;

  case 5:
#line 101 "trad1.y"
                                                                            { if (yyvsp[-1].code==NULL){
                                                                                    printf("(setq %s %d)%s\n", yyvsp[-2].code, yyvsp[-1].value, yyvsp[0].code);
                                                                                } else{
                                                                                    printf("(setq %s %s)%s\n", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                                }
                                                                            }
#line 1555 "trad1.tab.c"
    break;

  case 6:
#line 109 "trad1.y"
                                                                            { yyval.code = ""; }
#line 1561 "trad1.tab.c"
    break;

  case 7:
#line 110 "trad1.y"
                                                                            { if (yyvsp[-1].code==NULL){
                                                                                    sprintf(temp, " (setq %s %d)%s", yyvsp[-2].code, yyvsp[-1].value, yyvsp[0].code);
                                                                                    yyval.code = gen_code(temp);
                                                                                } else {
                                                                                    sprintf(temp, " (setq %s %s)%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                                    yyval.code = gen_code(temp);
                                                                                }
                                                                            }
#line 1574 "trad1.tab.c"
    break;

  case 8:
#line 120 "trad1.y"
                                { yyval.value = 0; 
                                    yyval.code = NULL;}
#line 1581 "trad1.tab.c"
    break;

  case 9:
#line 122 "trad1.y"
                                { yyval.value = yyvsp[0].value; 
                                    yyval.code = NULL;}
#line 1588 "trad1.tab.c"
    break;

  case 10:
#line 124 "trad1.y"
                                { sprintf(temp, "(make-array %d)", yyvsp[-1].value);
								    yyval.code = gen_code(temp); }
#line 1595 "trad1.tab.c"
    break;

  case 11:
#line 130 "trad1.y"
                                                    { ; }
#line 1601 "trad1.tab.c"
    break;

  case 12:
#line 131 "trad1.y"
                                                    { printf("(defun %s (%s)\n", yyvsp[-4].code, yyvsp[-2].code); 
                                                        act_function = yyvsp[-4].code;
                                                    }
#line 1609 "trad1.tab.c"
    break;

  case 13:
#line 134 "trad1.y"
                                                    { ; }
#line 1615 "trad1.tab.c"
    break;

  case 14:
#line 135 "trad1.y"
                                                    { act_function = NULL; }
#line 1621 "trad1.tab.c"
    break;

  case 15:
#line 136 "trad1.y"
                                                    { ; }
#line 1627 "trad1.tab.c"
    break;

  case 16:
#line 139 "trad1.y"
                                            { yyval.code = ""; }
#line 1633 "trad1.tab.c"
    break;

  case 17:
#line 140 "trad1.y"
                                             {    if( yyvsp[0].code == NULL)    {
                                                    sprintf(temp, "%s",  yyvsp[-1].code);
                                                } else{
                                                    sprintf(temp, "%s %s", yyvsp[-1].code, yyvsp[0].code);
                                                }
                                                yyval.code = gen_code(temp);
                                            }
#line 1645 "trad1.tab.c"
    break;

  case 18:
#line 149 "trad1.y"
                                    { yyval.code = NULL; }
#line 1651 "trad1.tab.c"
    break;

  case 19:
#line 150 "trad1.y"
                                                        { yyval.code = yyvsp[0].code; }
#line 1657 "trad1.tab.c"
    break;

  case 20:
#line 157 "trad1.y"
                                    { printf("(defun main ()\n");
                                        act_function = "main"; 
                                    }
#line 1665 "trad1.tab.c"
    break;

  case 21:
#line 160 "trad1.y"
                                       { ; }
#line 1671 "trad1.tab.c"
    break;

  case 22:
#line 161 "trad1.y"
                                    { ; }
#line 1677 "trad1.tab.c"
    break;

  case 23:
#line 166 "trad1.y"
                                                      { printf(")\n"); }
#line 1683 "trad1.tab.c"
    break;

  case 24:
#line 167 "trad1.y"
                                                       { printf("%s\n)\n", yyvsp[-2].code); }
#line 1689 "trad1.tab.c"
    break;

  case 25:
#line 168 "trad1.y"
                                                       { printf("(return-from %s %s)", act_function, yyvsp[-1].code); }
#line 1695 "trad1.tab.c"
    break;

  case 26:
#line 169 "trad1.y"
                                                   { ; }
#line 1701 "trad1.tab.c"
    break;

  case 27:
#line 170 "trad1.y"
                                                   { if (yyvsp[0].code) { printf("%s\n", yyvsp[0].code); }}
#line 1707 "trad1.tab.c"
    break;

  case 28:
#line 171 "trad1.y"
                                                   { ; }
#line 1713 "trad1.tab.c"
    break;

  case 29:
#line 174 "trad1.y"
                                                       { printf("%s\n)\n", yyvsp[-2].code); }
#line 1719 "trad1.tab.c"
    break;

  case 30:
#line 175 "trad1.y"
                                                       { printf("(return-from %s %s)", act_function, yyvsp[-1].code); }
#line 1725 "trad1.tab.c"
    break;

  case 31:
#line 176 "trad1.y"
                                                   { ; }
#line 1731 "trad1.tab.c"
    break;

  case 32:
#line 177 "trad1.y"
                                                   { if (yyvsp[0].code) { printf("%s\n", yyvsp[0].code); }}
#line 1737 "trad1.tab.c"
    break;

  case 33:
#line 178 "trad1.y"
                                                   { ; }
#line 1743 "trad1.tab.c"
    break;

  case 34:
#line 180 "trad1.y"
                                                   {printf(")\n"); }
#line 1749 "trad1.tab.c"
    break;

  case 35:
#line 181 "trad1.y"
                                                   { if (yyvsp[0].code) { printf("%s\n", yyvsp[0].code); }}
#line 1755 "trad1.tab.c"
    break;

  case 36:
#line 182 "trad1.y"
                                                   { ; }
#line 1761 "trad1.tab.c"
    break;

  case 37:
#line 183 "trad1.y"
                                                       { printf("(return-from %s %s)", act_function, yyvsp[-1].code); }
#line 1767 "trad1.tab.c"
    break;

  case 38:
#line 184 "trad1.y"
                                                   { ; }
#line 1773 "trad1.tab.c"
    break;

  case 39:
#line 188 "trad1.y"
                                                                { yyval.code = yyvsp[-1].code; }
#line 1779 "trad1.tab.c"
    break;

  case 40:
#line 189 "trad1.y"
                                                                { yyval.code = yyvsp[-1].code; }
#line 1785 "trad1.tab.c"
    break;

  case 41:
#line 191 "trad1.y"
                                                                    { if (yyvsp[-2].code) {
                                                                    sprintf (temp, "(print %s) %s", yyvsp[-3].code, yyvsp[-2].code);
                                                                 } else {
                                                                    sprintf (temp, "(print %s)", yyvsp[-3].code);
                                                                 }
                                                                yyval.code = gen_code (temp) ; 
                                                                }
#line 1797 "trad1.tab.c"
    break;

  case 42:
#line 200 "trad1.y"
                                                                { sprintf(temp, "(print \"%s\")",yyvsp[-1].code);
                                                                    yyval.code = gen_code (temp) ; }
#line 1804 "trad1.tab.c"
    break;

  case 43:
#line 202 "trad1.y"
                                                                { yyval.code = NULL; }
#line 1810 "trad1.tab.c"
    break;

  case 44:
#line 203 "trad1.y"
                                                                { yyval.code = NULL; }
#line 1816 "trad1.tab.c"
    break;

  case 45:
#line 204 "trad1.y"
                                                                { yyval.code = NULL; }
#line 1822 "trad1.tab.c"
    break;

  case 46:
#line 205 "trad1.y"
                                                                { yyval.code = yyvsp[-1].code; }
#line 1828 "trad1.tab.c"
    break;

  case 47:
#line 210 "trad1.y"
                                                            { if (yyvsp[-1].value==0){
                                                                    sprintf(temp,"(setq %s %s)%s\n", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                } else{
                                                                    sprintf(temp,"(setq %s %s)%s\n", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                } 
                                                                yyval.code = gen_code(temp);
                                                            }
#line 1840 "trad1.tab.c"
    break;

  case 48:
#line 219 "trad1.y"
                                                                    { yyval.code = ""; }
#line 1846 "trad1.tab.c"
    break;

  case 49:
#line 220 "trad1.y"
                                                                { sprintf(temp, " (setq %s %s)%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                  yyval.code = gen_code(temp);
                                                                }
#line 1854 "trad1.tab.c"
    break;

  case 50:
#line 225 "trad1.y"
                                { yyval.code = "0";}
#line 1860 "trad1.tab.c"
    break;

  case 51:
#line 226 "trad1.y"
                                    { yyval.code = yyvsp[0].code;}
#line 1866 "trad1.tab.c"
    break;

  case 52:
#line 227 "trad1.y"
                                { sprintf(temp, "(make-array %d)", yyvsp[-1].value);
								    yyval.code = gen_code(temp); }
#line 1873 "trad1.tab.c"
    break;

  case 53:
#line 232 "trad1.y"
                                                {  if (yyvsp[-2].code == NULL){
                                                sprintf (temp, "(setq %s %s)", yyvsp[-3].code, yyvsp[0].code) ; 
                                            } else{
                                                sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-3].code, yyvsp[-2].code, yyvsp[0].code) ;
                                            }
                                            yyval.code = gen_code (temp) ; }
#line 1884 "trad1.tab.c"
    break;

  case 54:
#line 242 "trad1.y"
                                                   {  printf("(loop while %s do \n", yyvsp[-2].code); }
#line 1890 "trad1.tab.c"
    break;

  case 55:
#line 243 "trad1.y"
                                                        { ; }
#line 1896 "trad1.tab.c"
    break;

  case 56:
#line 247 "trad1.y"
                                               {  printf("(if %s\n(progn ", yyvsp[-2].code); }
#line 1902 "trad1.tab.c"
    break;

  case 57:
#line 248 "trad1.y"
                                                    { ; }
#line 1908 "trad1.tab.c"
    break;

  case 58:
#line 249 "trad1.y"
                                                { ; }
#line 1914 "trad1.tab.c"
    break;

  case 59:
#line 252 "trad1.y"
                                { printf(")\n"); }
#line 1920 "trad1.tab.c"
    break;

  case 60:
#line 253 "trad1.y"
                                { printf("(progn "); }
#line 1926 "trad1.tab.c"
    break;

  case 61:
#line 254 "trad1.y"
                                { ; }
#line 1932 "trad1.tab.c"
    break;

  case 62:
#line 255 "trad1.y"
                                { printf(")\n"); }
#line 1938 "trad1.tab.c"
    break;

  case 63:
#line 259 "trad1.y"
                                                                                 {printf("(loop while %s do \n", yyvsp[-4].code);}
#line 1944 "trad1.tab.c"
    break;

  case 64:
#line 260 "trad1.y"
                                                                                        { ; }
#line 1950 "trad1.tab.c"
    break;

  case 65:
#line 261 "trad1.y"
                                                                                    {printf("%s\n)\n",yyvsp[-5].code);}
#line 1956 "trad1.tab.c"
    break;

  case 66:
#line 265 "trad1.y"
                                            {  sprintf(temp,"(setq %s %s)%s\n", yyvsp[-1].code, yyvsp[0].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp); }
#line 1963 "trad1.tab.c"
    break;

  case 67:
#line 269 "trad1.y"
                                        { yyval.code = NULL; }
#line 1969 "trad1.tab.c"
    break;

  case 68:
#line 270 "trad1.y"
                                            { if (yyvsp[0].code)
                                                sprintf (temp, "(print %s) %s", yyvsp[-1].code, yyvsp[0].code);
                                          else
                                                sprintf (temp, "(print %s)", yyvsp[-1].code); 
                                           yyval.code = gen_code (temp) ; }
#line 1979 "trad1.tab.c"
    break;

  case 69:
#line 280 "trad1.y"
                                           { yyval = yyvsp[0] ; }
#line 1985 "trad1.tab.c"
    break;

  case 70:
#line 281 "trad1.y"
                                               { sprintf(temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 1992 "trad1.tab.c"
    break;

  case 71:
#line 283 "trad1.y"
                                              { sprintf(temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 1999 "trad1.tab.c"
    break;

  case 72:
#line 285 "trad1.y"
                                               { sprintf(temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2006 "trad1.tab.c"
    break;

  case 73:
#line 287 "trad1.y"
                                              { sprintf(temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2013 "trad1.tab.c"
    break;

  case 74:
#line 289 "trad1.y"
                                               { sprintf(temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2020 "trad1.tab.c"
    break;

  case 75:
#line 291 "trad1.y"
                                               { sprintf(temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2027 "trad1.tab.c"
    break;

  case 76:
#line 293 "trad1.y"
                                               { sprintf(temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2034 "trad1.tab.c"
    break;

  case 77:
#line 295 "trad1.y"
                                               { sprintf(temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2041 "trad1.tab.c"
    break;

  case 78:
#line 299 "trad1.y"
                                                 { sprintf (temp, "(/= 0 (+ %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2048 "trad1.tab.c"
    break;

  case 79:
#line 301 "trad1.y"
                                                 { sprintf (temp, "(/= 0 (- %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2055 "trad1.tab.c"
    break;

  case 80:
#line 303 "trad1.y"
                                                 { sprintf (temp, "(/= 0 (* %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2062 "trad1.tab.c"
    break;

  case 81:
#line 305 "trad1.y"
                                                 { sprintf (temp, "(/= 0 (/ %s %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2069 "trad1.tab.c"
    break;

  case 82:
#line 309 "trad1.y"
                                           { yyval = yyvsp[0] ; }
#line 2075 "trad1.tab.c"
    break;

  case 83:
#line 310 "trad1.y"
                                                 { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2082 "trad1.tab.c"
    break;

  case 84:
#line 312 "trad1.y"
                                                 { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2089 "trad1.tab.c"
    break;

  case 85:
#line 314 "trad1.y"
                                                 { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2096 "trad1.tab.c"
    break;

  case 86:
#line 316 "trad1.y"
                                                 { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2103 "trad1.tab.c"
    break;

  case 87:
#line 320 "trad1.y"
                                               { sprintf(temp, "(if (and %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2110 "trad1.tab.c"
    break;

  case 88:
#line 322 "trad1.y"
                                               { sprintf(temp, "(if (or %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2117 "trad1.tab.c"
    break;

  case 89:
#line 324 "trad1.y"
                                               { sprintf(temp, "(if (/= %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2124 "trad1.tab.c"
    break;

  case 90:
#line 326 "trad1.y"
                                               { sprintf(temp, "(if (= %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2131 "trad1.tab.c"
    break;

  case 91:
#line 328 "trad1.y"
                                               { sprintf(temp, "(if (< %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2138 "trad1.tab.c"
    break;

  case 92:
#line 330 "trad1.y"
                                               { sprintf(temp, "(if (<= %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2145 "trad1.tab.c"
    break;

  case 93:
#line 332 "trad1.y"
                                               { sprintf(temp, "(if (> %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2152 "trad1.tab.c"
    break;

  case 94:
#line 334 "trad1.y"
                                               { sprintf(temp, "(if (>= %s %s) 1 0)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 2159 "trad1.tab.c"
    break;

  case 95:
#line 338 "trad1.y"
                                                   { yyval = yyvsp[0] ; }
#line 2165 "trad1.tab.c"
    break;

  case 96:
#line 339 "trad1.y"
                                                   { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2172 "trad1.tab.c"
    break;

  case 97:
#line 341 "trad1.y"
                                                   { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2179 "trad1.tab.c"
    break;

  case 98:
#line 345 "trad1.y"
                                         { yyval.code = yyvsp[0].code ; }
#line 2185 "trad1.tab.c"
    break;

  case 99:
#line 346 "trad1.y"
                                         { sprintf (temp, "%d", yyvsp[0].value) ;
                                           yyval.code = gen_code (temp) ; }
#line 2192 "trad1.tab.c"
    break;

  case 100:
#line 348 "trad1.y"
                                          { yyval = yyvsp[-1] ; }
#line 2198 "trad1.tab.c"
    break;

  case 101:
#line 349 "trad1.y"
                                         { yyval.code = yyvsp[0].code;}
#line 2204 "trad1.tab.c"
    break;

  case 102:
#line 353 "trad1.y"
                                           {if (yyvsp[0].code == NULL){
                                                    sprintf (temp, "%s", yyvsp[-1].code);
                                                } else {
                                                    sprintf (temp, "(aref %s %s)", yyvsp[-1].code, yyvsp[0].code);
                                                }
                                                yyval.code = gen_code (temp); }
#line 2215 "trad1.tab.c"
    break;

  case 103:
#line 361 "trad1.y"
                                               { yyval.code = NULL; }
#line 2221 "trad1.tab.c"
    break;

  case 104:
#line 362 "trad1.y"
                                               { sprintf(temp, "%d", yyvsp[-1].value); yyval.code = gen_code(temp);}
#line 2227 "trad1.tab.c"
    break;

  case 105:
#line 365 "trad1.y"
                                                        { sprintf(temp,"(%s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                                            yyval.code = gen_code(temp);
                                                        }
#line 2235 "trad1.tab.c"
    break;

  case 106:
#line 370 "trad1.y"
                                                        { yyval.code = ""; }
#line 2241 "trad1.tab.c"
    break;

  case 107:
#line 371 "trad1.y"
                                                           {   if( yyvsp[0].code == NULL)    {
                                                                sprintf(temp, "(%s)",  yyvsp[-1].code);
                                                            } else{
                                                                sprintf(temp, "(%s) %s", yyvsp[-1].code, yyvsp[0].code);
                                                            }
                                                            yyval.code = gen_code(temp);
                                                        }
#line 2253 "trad1.tab.c"
    break;

  case 108:
#line 380 "trad1.y"
                                           { yyval.code = NULL; }
#line 2259 "trad1.tab.c"
    break;

  case 109:
#line 381 "trad1.y"
                                                                { yyval.code = yyvsp[0].code; }
#line 2265 "trad1.tab.c"
    break;


#line 2269 "trad1.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 385 "trad1.y"
                            // SECCION 4    Codigo en C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No memoria left for additional %d bytes\n", nbytes) ;
        fprintf (stderr, "%ld bytes reserved in %d calls\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "while",       WHILE,
    "for",         FOR,
    "if",          IF,
    "else",        ELSE,
    "&&",          AND,
    "||",          OR,
    "<=",          LEQ,
    ">=",          GEQ,
    "==",          EQ,
    "!=",          NEQ,
    "return",      RETURN,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] = "!<=>|%/&+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == '\r' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // busca c en operadores expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
