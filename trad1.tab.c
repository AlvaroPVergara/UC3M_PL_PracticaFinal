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
char *concat_ptr;
int identif_count;

// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
        char *code2 ; 
        int isbool ; // 1 if is bool, 0 if aricmetic
} t_attr ;

#define YYSTYPE t_attr


#line 106 "trad1.tab.c"

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
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

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
       0,    96,    96,   101,   102,   105,   113,   114,   124,   126,
     128,   134,   135,   138,   139,   135,   143,   144,   153,   154,
     161,   164,   161,   170,   171,   172,   172,   174,   174,   176,
     179,   180,   180,   182,   182,   184,   187,   188,   188,   190,
     190,   192,   195,   196,   196,   198,   198,   200,   204,   206,
     215,   217,   218,   219,   220,   225,   228,   225,   234,   235,
     240,   241,   242,   247,   251,   251,   280,   282,   290,   297,
     310,   310,   315,   316,   315,   320,   321,   322,   321,   327,
     329,   327,   334,   338,   339,   348,   357,   367,   371,   389,
     407,   425,   443,   461,   479,   497,   517,   535,   553,   571,
     591,   592,   594,   598,   600,   603,   604,   609,   617,   618,
     621,   626,   627,   636,   637
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
  "recSentenciaFor", "$@12", "$@13", "sentencia", "declaraciones", "$@14",
  "$@15", "restDeclaraciones", "restVar", "asignacion", "@16",
  "identifRec", "asignacionMultipleRec", "sentenciaWhile", "$@17",
  "sentenciaIF", "$@18", "$@19", "restoIF", "$@20", "$@21", "sentenciaFOR",
  "$@22", "$@23", "declaracionFor", "printRec", "expresionBool",
  "expresionAric", "expresion", "termino", "operando", "varIdentf",
  "isVector", "funcionLlamada", "funcionArgsLlamada", "recArgFunctLlamada", YY_NULLPTR
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

#define YYPACT_NINF (-191)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,    38,    49,    70,    53,     0,  -191,    45,    76,    20,
      81,    86,    56,    85,    61,  -191,  -191,  -191,    65,    95,
    -191,    97,    71,    72,  -191,     0,    73,    77,    74,    78,
      56,   105,  -191,    85,  -191,  -191,  -191,  -191,    79,  -191,
      83,    83,  -191,    42,   108,    84,    87,    89,    91,    92,
      11,  -191,  -191,  -191,  -191,    98,  -191,  -191,  -191,    99,
    -191,   110,    11,    11,  -191,     9,    11,   111,    11,   112,
     120,  -191,    48,    13,    13,    11,   100,   229,  -191,  -191,
    -191,  -191,  -191,    83,  -191,  -191,  -191,   101,   102,   106,
      96,   116,    11,   135,   117,   114,   229,   138,   123,   121,
     122,   128,  -191,  -191,   125,   124,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,    11,    70,  -191,
    -191,   143,    11,  -191,  -191,    11,  -191,   130,   162,   139,
     134,     9,    11,   145,   147,    11,  -191,  -191,    14,   255,
     243,    40,    40,   267,   267,    40,    40,   -17,   -17,  -191,
    -191,  -191,    11,  -191,  -191,   195,  -191,     9,  -191,  -191,
    -191,   149,  -191,  -191,   212,    11,  -191,  -191,  -191,  -191,
      11,   117,   141,   141,   170,   141,    11,   151,   152,    83,
    -191,  -191,    11,  -191,  -191,  -191,  -191,  -191,    -2,   154,
    -191,   212,   161,   158,  -191,   166,  -191,   141,   148,   191,
    -191,  -191,  -191,    14,  -191,  -191,  -191,   164,  -191,  -191,
     141,   188,  -191,  -191,    11,  -191,  -191,  -191,  -191,   141,
     174,  -191,   188,  -191,  -191,  -191,  -191,   188,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,    11,     0,     8,     1,     0,     0,     3,
       0,     0,     6,    16,     0,     2,     4,     9,     0,     0,
       5,     0,     0,     0,    10,     8,   108,    18,     0,     0,
       6,     0,   107,    16,    17,    12,    20,     7,     0,    19,
       0,     0,   109,    66,     0,     0,     0,     0,     0,     0,
       0,    23,    13,    27,    29,     0,    51,    52,    53,     0,
      21,     0,     0,   111,    64,    60,     0,     0,     0,     0,
       0,   104,   108,     0,     0,     0,     0,    86,    87,   100,
     103,   106,    14,     0,    48,    54,    22,    66,     0,   113,
       0,     0,     0,     0,    58,     0,    85,     0,     0,     0,
       0,     0,   101,   102,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    28,
      67,     0,   111,   112,   110,     0,    61,     0,     0,     0,
       0,    60,     0,     0,     0,     0,   105,    24,     0,    88,
      89,    93,    95,    91,    90,    92,    94,    96,    97,    98,
      99,    15,     0,   114,    65,    68,    62,    60,    55,    70,
      82,     0,    72,    50,    83,     0,    26,    33,    35,    63,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    59,     0,    36,    56,    37,    41,    71,    66,     0,
      73,    83,     0,    31,    34,     0,    57,     0,     0,    75,
      84,    49,    30,     0,    39,    38,    79,     0,    74,    32,
       0,     0,    76,    40,     0,    42,    80,    43,    47,     0,
       0,    81,     0,    77,    45,    44,    78,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,   196,  -191,   176,   179,   115,  -191,  -191,  -191,
     182,  -191,  -191,  -191,  -191,   -35,  -191,  -191,     4,  -191,
    -191,  -134,  -191,  -191,  -190,  -191,  -191,   -38,   -36,  -191,
    -191,    52,  -119,    58,  -191,   129,    80,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,    50,
     -61,   -42,   -55,  -191,    -5,   219,  -191,   -40,   127,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    20,    12,     8,    40,    82,   118,
      22,    34,    15,    41,    86,    52,   138,    83,   166,   203,
     179,   184,   197,   210,   216,   222,   227,   185,   186,   172,
     196,   129,    94,    55,    91,    64,   154,    56,   173,    57,
     175,   199,   208,   219,   226,    58,   211,   221,    98,   177,
      95,    89,    77,    78,    79,    80,    32,    81,    90,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    59,    53,    53,    54,    54,    60,    99,    76,   116,
     117,    96,   160,    96,    71,    72,    71,    72,    43,    44,
      88,    10,    45,    46,    47,     1,    48,    49,    61,    62,
      92,    11,   225,   104,   165,    73,    74,   228,   171,   187,
      93,   190,     5,    59,    75,    53,    75,    54,   119,     6,
     126,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   205,   114,   115,   116,   117,   102,   103,
     155,   161,    61,    62,     7,    63,   213,    96,    13,    31,
     164,    63,     9,    14,    17,   223,    19,    43,    44,    18,
      21,    45,    46,    47,    23,    48,    49,    24,    59,    25,
     167,    26,   168,    50,    31,    28,    29,    33,    38,    35,
     169,    42,    65,    36,    87,   155,    97,    66,   100,    51,
      67,   191,    68,   178,    69,    70,   101,    84,    85,   105,
     124,    61,    59,    59,   121,    59,   122,   125,   127,    59,
     195,    53,   131,    54,   194,    43,    44,   128,   130,    45,
      46,    47,   132,    48,    49,   133,   134,    59,   135,   136,
     137,   182,   156,    59,   152,   167,   157,   168,   158,   159,
      59,    59,   220,   217,   188,   218,   163,   183,   174,    59,
     162,   193,    59,   206,   217,   192,   218,    59,   198,   217,
     201,   218,    43,    44,   202,   204,    45,    46,    47,   212,
      48,    49,   207,   224,    30,    16,    37,   209,   214,   106,
     107,   108,   109,   110,   111,    39,   120,   112,   113,   114,
     115,   116,   117,   181,   215,   170,   106,   107,   108,   109,
     110,   111,   189,   151,   112,   113,   114,   115,   116,   117,
      27,   200,   176,   106,   107,   108,   109,   110,   111,   153,
     180,   112,   113,   114,   115,   116,   117,   106,     0,   108,
     109,   110,   111,     0,     0,   112,   113,   114,   115,   116,
     117,   108,   109,   110,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   108,   109,     0,     0,     0,     0,   112,
     113,   114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
      40,    41,    40,    41,    40,    41,    41,    68,    50,    26,
      27,    66,   131,    68,     3,     4,     3,     4,     4,     5,
      62,    21,     8,     9,    10,     5,    12,    13,    30,    31,
      21,    31,   222,    75,    20,    24,    25,   227,   157,   173,
      31,   175,     4,    83,    33,    83,    33,    83,    83,     0,
      92,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   197,    24,    25,    26,    27,    73,    74,
     125,   132,    30,    31,     4,    33,   210,   132,    33,    31,
     135,    33,    29,     7,     3,   219,    30,     4,     5,     3,
       5,     8,     9,    10,    33,    12,    13,    32,   138,     4,
     138,     4,   138,    20,    31,    34,    34,    30,     3,    35,
     152,    32,     4,    35,     4,   170,     5,    33,     6,    36,
      33,   176,    33,   165,    33,    33,     6,    29,    29,    29,
      34,    30,   172,   173,    32,   175,    30,    21,     3,   179,
     182,   179,     4,   179,   179,     4,     5,    30,    34,     8,
       9,    10,    29,    12,    13,    34,    34,   197,    30,    34,
      36,    20,    32,   203,    21,   203,     4,   203,    29,    35,
     210,   211,   214,   211,     4,   211,    29,    36,    29,   219,
      35,    29,   222,    35,   222,    34,   222,   227,    34,   227,
      29,   227,     4,     5,    36,    29,     8,     9,    10,    35,
      12,    13,    11,    29,    25,     9,    30,   203,    20,    14,
      15,    16,    17,    18,    19,    33,    87,    22,    23,    24,
      25,    26,    27,   171,    36,    30,    14,    15,    16,    17,
      18,    19,   174,   118,    22,    23,    24,    25,    26,    27,
      21,   191,    30,    14,    15,    16,    17,    18,    19,   122,
     170,    22,    23,    24,    25,    26,    27,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    26,
      27,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    26,    27,    16,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    38,    39,    40,     4,     0,     4,    43,    29,
      21,    31,    42,    33,     7,    49,    39,     3,     3,    30,
      41,     5,    47,    33,    32,     4,     4,    92,    34,    34,
      42,    31,    93,    30,    48,    35,    35,    41,     3,    47,
      44,    50,    32,     4,     5,     8,     9,    10,    12,    13,
      20,    36,    52,    64,    65,    70,    74,    76,    82,    94,
      52,    30,    31,    33,    72,     4,    33,    33,    33,    33,
      33,     3,     4,    24,    25,    33,    88,    89,    90,    91,
      92,    94,    45,    54,    29,    29,    51,     4,    88,    88,
      95,    71,    21,    31,    69,    87,    89,     5,    85,    87,
       6,     6,    91,    91,    88,    29,    14,    15,    16,    17,
      18,    19,    22,    23,    24,    25,    26,    27,    46,    52,
      72,    32,    30,    96,    34,    21,    88,     3,    30,    68,
      34,     4,    29,    34,    34,    30,    34,    36,    53,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    43,    21,    95,    73,    89,    32,     4,    29,    35,
      69,    87,    35,    29,    89,    20,    55,    64,    65,    88,
      30,    69,    66,    75,    29,    77,    30,    86,    88,    57,
      73,    68,    20,    36,    58,    64,    65,    58,     4,    70,
      58,    89,    34,    29,    52,    88,    67,    59,    34,    78,
      86,    29,    36,    56,    29,    58,    35,    11,    79,    55,
      60,    83,    35,    58,    20,    36,    61,    64,    65,    80,
      88,    84,    62,    58,    29,    61,    81,    63,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    41,    41,    42,    42,
      42,    43,    44,    45,    46,    43,    47,    47,    48,    48,
      50,    51,    49,    52,    52,    53,    52,    54,    52,    52,
      55,    56,    55,    57,    55,    55,    58,    59,    58,    60,
      58,    58,    61,    62,    61,    63,    61,    61,    64,    64,
      64,    64,    64,    64,    64,    66,    67,    65,    68,    68,
      69,    69,    69,    70,    71,    70,    72,    72,    73,    73,
      75,    74,    77,    78,    76,    79,    80,    81,    79,    83,
      84,    82,    85,    86,    86,    87,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    91,    91,    91,    91,    92,    93,    93,
      94,    95,    95,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     4,     0,     4,     0,     2,
       3,     0,     0,     0,     0,    10,     0,     3,     0,     2,
       0,     0,     7,     1,     4,     0,     5,     0,     3,     1,
       4,     0,     5,     0,     3,     1,     1,     0,     3,     0,
       5,     1,     1,     0,     3,     0,     5,     1,     2,     8,
       5,     1,     1,     1,     2,     0,     0,     8,     0,     4,
       0,     2,     3,     6,     0,     5,     0,     3,     1,     3,
       0,     7,     0,     0,     9,     0,     0,     0,     5,     0,
       0,    12,     3,     0,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     1,     1,     3,     1,     2,     0,     3,
       4,     0,     2,     0,     2
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
#line 96 "trad1.y"
                                                        { ; }
#line 1520 "trad1.tab.c"
    break;

  case 3:
#line 101 "trad1.y"
                                                                                { ; }
#line 1526 "trad1.tab.c"
    break;

  case 4:
#line 102 "trad1.y"
                                                                                { ; }
#line 1532 "trad1.tab.c"
    break;

  case 5:
#line 105 "trad1.y"
                                                                            { if (yyvsp[-1].code==NULL){
                                                                                    printf("(setq %s %d)%s\n", yyvsp[-2].code, yyvsp[-1].value, yyvsp[0].code);
                                                                                } else{
                                                                                    printf("(setq %s %s)%s\n", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                                }
                                                                            }
#line 1543 "trad1.tab.c"
    break;

  case 6:
#line 113 "trad1.y"
                                                                            { yyval.code = ""; }
#line 1549 "trad1.tab.c"
    break;

  case 7:
#line 114 "trad1.y"
                                                                            { if (yyvsp[-1].code==NULL){
                                                                                    sprintf(temp, " (setq %s %d)%s", yyvsp[-2].code, yyvsp[-1].value, yyvsp[0].code);
                                                                                    yyval.code = gen_code(temp);
                                                                                } else {
                                                                                    sprintf(temp, " (setq %s %s)%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                                    yyval.code = gen_code(temp);
                                                                                }
                                                                            }
#line 1562 "trad1.tab.c"
    break;

  case 8:
#line 124 "trad1.y"
                                { yyval.value = 0; 
                                    yyval.code = NULL;}
#line 1569 "trad1.tab.c"
    break;

  case 9:
#line 126 "trad1.y"
                                { yyval.value = yyvsp[0].value; 
                                    yyval.code = NULL;}
#line 1576 "trad1.tab.c"
    break;

  case 10:
#line 128 "trad1.y"
                                { sprintf(temp, "(make-array %d)", yyvsp[-1].value);
								    yyval.code = gen_code(temp); }
#line 1583 "trad1.tab.c"
    break;

  case 11:
#line 134 "trad1.y"
                                                    { ; }
#line 1589 "trad1.tab.c"
    break;

  case 12:
#line 135 "trad1.y"
                                                    { printf("(defun %s (%s)\n", yyvsp[-4].code, yyvsp[-2].code); 
                                                        act_function = yyvsp[-4].code;
                                                    }
#line 1597 "trad1.tab.c"
    break;

  case 13:
#line 138 "trad1.y"
                                                    { ; }
#line 1603 "trad1.tab.c"
    break;

  case 14:
#line 139 "trad1.y"
                                                    { act_function = NULL; }
#line 1609 "trad1.tab.c"
    break;

  case 15:
#line 140 "trad1.y"
                                                    { ; }
#line 1615 "trad1.tab.c"
    break;

  case 16:
#line 143 "trad1.y"
                                            { yyval.code = ""; }
#line 1621 "trad1.tab.c"
    break;

  case 17:
#line 144 "trad1.y"
                                             {    if( yyvsp[0].code == NULL)    {
                                                    sprintf(temp, "%s",  yyvsp[-1].code);
                                                } else{
                                                    sprintf(temp, "%s %s", yyvsp[-1].code, yyvsp[0].code);
                                                }
                                                yyval.code = gen_code(temp);
                                            }
#line 1633 "trad1.tab.c"
    break;

  case 18:
#line 153 "trad1.y"
                                    { yyval.code = NULL; }
#line 1639 "trad1.tab.c"
    break;

  case 19:
#line 154 "trad1.y"
                                                        { yyval.code = yyvsp[0].code; }
#line 1645 "trad1.tab.c"
    break;

  case 20:
#line 161 "trad1.y"
                                    { printf("(defun main ()\n");
                                        act_function = "main"; 
                                    }
#line 1653 "trad1.tab.c"
    break;

  case 21:
#line 164 "trad1.y"
                                       { ; }
#line 1659 "trad1.tab.c"
    break;

  case 22:
#line 165 "trad1.y"
                                    { ; }
#line 1665 "trad1.tab.c"
    break;

  case 23:
#line 170 "trad1.y"
                                                       { printf(")\n"); }
#line 1671 "trad1.tab.c"
    break;

  case 24:
#line 171 "trad1.y"
                                                           { printf("%s\n)\n", yyvsp[-2].code); }
#line 1677 "trad1.tab.c"
    break;

  case 25:
#line 172 "trad1.y"
                                                           { printf("(return-from %s %s)\n", act_function, yyvsp[-1].code); }
#line 1683 "trad1.tab.c"
    break;

  case 26:
#line 173 "trad1.y"
                                                       { ; }
#line 1689 "trad1.tab.c"
    break;

  case 27:
#line 174 "trad1.y"
                                                       { if (yyvsp[0].code) { printf("%s\n", yyvsp[0].code); }}
#line 1695 "trad1.tab.c"
    break;

  case 28:
#line 175 "trad1.y"
                                                       { ; }
#line 1701 "trad1.tab.c"
    break;

  case 29:
#line 176 "trad1.y"
                                                       { ; }
#line 1707 "trad1.tab.c"
    break;

  case 30:
#line 179 "trad1.y"
                                                       { printf("%s\n)\n", yyvsp[-2].code); }
#line 1713 "trad1.tab.c"
    break;

  case 31:
#line 180 "trad1.y"
                                                       { printf("(return-from %s %s)", act_function, yyvsp[-1].code); }
#line 1719 "trad1.tab.c"
    break;

  case 32:
#line 181 "trad1.y"
                                                   { ; }
#line 1725 "trad1.tab.c"
    break;

  case 33:
#line 182 "trad1.y"
                                                   { if (yyvsp[0].code) { printf("%s\n", yyvsp[0].code); }}
#line 1731 "trad1.tab.c"
    break;

  case 34:
#line 183 "trad1.y"
                                                   { ; }
#line 1737 "trad1.tab.c"
    break;

  case 35:
#line 184 "trad1.y"
                                                   { ; }
#line 1743 "trad1.tab.c"
    break;

  case 36:
#line 187 "trad1.y"
                                                   {printf(")\n"); }
#line 1749 "trad1.tab.c"
    break;

  case 37:
#line 188 "trad1.y"
                                                   { if (yyvsp[0].code) { printf("%s\n", yyvsp[0].code); }}
#line 1755 "trad1.tab.c"
    break;

  case 38:
#line 189 "trad1.y"
                                                   { ; }
#line 1761 "trad1.tab.c"
    break;

  case 39:
#line 190 "trad1.y"
                                                   { printf("(return-from %s %s)", act_function, yyvsp[-1].code); }
#line 1767 "trad1.tab.c"
    break;

  case 40:
#line 191 "trad1.y"
                                                   { ; }
#line 1773 "trad1.tab.c"
    break;

  case 41:
#line 192 "trad1.y"
                                                   { ; }
#line 1779 "trad1.tab.c"
    break;

  case 42:
#line 195 "trad1.y"
                                                   { ; }
#line 1785 "trad1.tab.c"
    break;

  case 43:
#line 196 "trad1.y"
                                                   { if (yyvsp[0].code) { printf("%s\n", yyvsp[0].code); }}
#line 1791 "trad1.tab.c"
    break;

  case 44:
#line 197 "trad1.y"
                                                   { ; }
#line 1797 "trad1.tab.c"
    break;

  case 45:
#line 198 "trad1.y"
                                                   { printf("(return-from %s %s)", act_function, yyvsp[-1].code); }
#line 1803 "trad1.tab.c"
    break;

  case 46:
#line 199 "trad1.y"
                                                   { ; }
#line 1809 "trad1.tab.c"
    break;

  case 47:
#line 200 "trad1.y"
                                                   { ; }
#line 1815 "trad1.tab.c"
    break;

  case 48:
#line 204 "trad1.y"
                                                              { yyval.code = yyvsp[-1].code; }
#line 1821 "trad1.tab.c"
    break;

  case 49:
#line 206 "trad1.y"
                                                                { if (yyvsp[-2].code) {
                                                                    sprintf (temp, "(print %s) %s", yyvsp[-3].code, yyvsp[-2].code);
                                                                 } else {
                                                                    sprintf (temp, "(print %s)", yyvsp[-3].code);
                                                                 }
                                                                yyval.code = gen_code (temp) ; 
                                                                }
#line 1833 "trad1.tab.c"
    break;

  case 50:
#line 215 "trad1.y"
                                                                { sprintf(temp, "(print \"%s\")",yyvsp[-1].code);
                                                                    yyval.code = gen_code (temp) ; }
#line 1840 "trad1.tab.c"
    break;

  case 51:
#line 217 "trad1.y"
                                                                { yyval.code = NULL; }
#line 1846 "trad1.tab.c"
    break;

  case 52:
#line 218 "trad1.y"
                                                                { yyval.code = NULL; }
#line 1852 "trad1.tab.c"
    break;

  case 53:
#line 219 "trad1.y"
                                                                { yyval.code = NULL; }
#line 1858 "trad1.tab.c"
    break;

  case 54:
#line 220 "trad1.y"
                                                                { yyval.code = yyvsp[-1].code; }
#line 1864 "trad1.tab.c"
    break;

  case 55:
#line 225 "trad1.y"
                                                                   { 
                                                                    printf("(let ((%s %s)\n%s", yyvsp[-3].code, yyvsp[-2].code, yyvsp[-1].code);
                                                                 }
#line 1872 "trad1.tab.c"
    break;

  case 56:
#line 228 "trad1.y"
                                                                { ; }
#line 1878 "trad1.tab.c"
    break;

  case 57:
#line 229 "trad1.y"
                                                                { 
                                                                    printf(")\n");
                                                                }
#line 1886 "trad1.tab.c"
    break;

  case 58:
#line 234 "trad1.y"
                                                                    { yyval.code = ""; }
#line 1892 "trad1.tab.c"
    break;

  case 59:
#line 235 "trad1.y"
                                                                { sprintf(temp, " (%s %s)\n%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                  yyval.code = gen_code(temp);
                                                                }
#line 1900 "trad1.tab.c"
    break;

  case 60:
#line 240 "trad1.y"
                                { yyval.code = "0";}
#line 1906 "trad1.tab.c"
    break;

  case 61:
#line 241 "trad1.y"
                                { yyval.code = yyvsp[0].code;}
#line 1912 "trad1.tab.c"
    break;

  case 62:
#line 242 "trad1.y"
                                { sprintf(temp, "(make-array %d)", yyvsp[-1].value);
								    yyval.code = gen_code(temp); }
#line 1919 "trad1.tab.c"
    break;

  case 63:
#line 247 "trad1.y"
                                                            { 
                                                            sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                            yyval.code = gen_code (temp) ; 
                                                        }
#line 1928 "trad1.tab.c"
    break;

  case 64:
#line 251 "trad1.y"
                                                        {identif_count = 1 + yyvsp[0].value;
                                                            concat_ptr = temp;
                                                        if (identif_count == 1){
                                                            concat_ptr += sprintf (concat_ptr, "(setq %s", yyvsp[-1].code); 
                                                        } else {
                                                            concat_ptr += sprintf (concat_ptr, "(setf (values %s %s)", yyvsp[-1].code, yyvsp[0].code); 
                                                        }
                                                            yyval.code = gen_code(temp);
                                                        }
#line 1942 "trad1.tab.c"
    break;

  case 65:
#line 260 "trad1.y"
                                                           {  
                                                            if (yyvsp[0].value == -1){
                                                                // Function
                                                                sprintf (temp, "%s %s)",yyvsp[-2].code, yyvsp[0].code);
                                                            } else {
                                                                // multiple values
                                                                if (yyvsp[0].value != identif_count) {
                                                                    //n values missmatch
                                                                    yyerror("Missmatch on multiple assignation");
                                                                    YYABORT;
                                                                } else if (identif_count >= 2){
                                                                    sprintf(temp, "%s (values %s))", yyvsp[-2].code, yyvsp[0].code);
                                                                } else {
                                                                    sprintf(temp, "%s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                }
                                                            }
                                                            yyval.code = gen_code(temp);
                                                        }
#line 1965 "trad1.tab.c"
    break;

  case 66:
#line 280 "trad1.y"
                                            { yyval.code = "";
                                              yyval.value = 0; }
#line 1972 "trad1.tab.c"
    break;

  case 67:
#line 282 "trad1.y"
                                            {   
                                                sprintf(temp,"%s %s", yyvsp[-1].code, yyvsp[0].code);
                                                yyval.value = yyvsp[0].value + 1;
                                                yyval.code = gen_code(temp);
                                            }
#line 1982 "trad1.tab.c"
    break;

  case 68:
#line 290 "trad1.y"
                                          { yyval.code = yyvsp[0].code;
                                            if (yyvsp[0].value == -1){
                                                yyval.value = -1;
                                            } else { 
                                                yyval.value = 1; }
                                            
                                                        }
#line 1994 "trad1.tab.c"
    break;

  case 69:
#line 297 "trad1.y"
                                                              {   
                                                                if(yyvsp[-2].value == -1 || yyvsp[0].value == -1){
                                                                    yyerror("Detected function on multiple assignation with other assignable values");
                                                                    YYABORT;
                                                                }
                                                                sprintf(temp,"%s %s", yyvsp[-2].code, yyvsp[0].code);
                                                                yyval.value = yyvsp[0].value + 1;
                                                                yyval.code = gen_code(temp);
                                                                }
#line 2008 "trad1.tab.c"
    break;

  case 70:
#line 310 "trad1.y"
                                                   {  printf("(loop while %s do \n", yyvsp[-2].code); }
#line 2014 "trad1.tab.c"
    break;

  case 71:
#line 311 "trad1.y"
                                                        { ; }
#line 2020 "trad1.tab.c"
    break;

  case 72:
#line 315 "trad1.y"
                                               {  printf("(if %s\n(progn ", yyvsp[-2].code); }
#line 2026 "trad1.tab.c"
    break;

  case 73:
#line 316 "trad1.y"
                                                    { ; }
#line 2032 "trad1.tab.c"
    break;

  case 74:
#line 317 "trad1.y"
                                                { ; }
#line 2038 "trad1.tab.c"
    break;

  case 75:
#line 320 "trad1.y"
                                { printf(")\n"); }
#line 2044 "trad1.tab.c"
    break;

  case 76:
#line 321 "trad1.y"
                                { printf("(progn "); }
#line 2050 "trad1.tab.c"
    break;

  case 77:
#line 322 "trad1.y"
                                { ; }
#line 2056 "trad1.tab.c"
    break;

  case 78:
#line 323 "trad1.y"
                                { printf(")\n"); }
#line 2062 "trad1.tab.c"
    break;

  case 79:
#line 327 "trad1.y"
                                                                                    {printf("(let %s",yyvsp[-6].code);
                                                                                     printf("(loop while %s do \n", yyvsp[-4].code);}
#line 2069 "trad1.tab.c"
    break;

  case 80:
#line 329 "trad1.y"
                                                                                    { ; }
#line 2075 "trad1.tab.c"
    break;

  case 81:
#line 330 "trad1.y"
                                                                                    {printf("%s\n)\n)\n",yyvsp[-5].code);}
#line 2081 "trad1.tab.c"
    break;

  case 82:
#line 334 "trad1.y"
                                            {  sprintf(temp,"(%s %s)\n", yyvsp[-1].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp); }
#line 2088 "trad1.tab.c"
    break;

  case 83:
#line 338 "trad1.y"
                                        { yyval.code = NULL; }
#line 2094 "trad1.tab.c"
    break;

  case 84:
#line 339 "trad1.y"
                                        { if (yyvsp[0].code)
                                                sprintf (temp, "(print %s) %s", yyvsp[-1].code, yyvsp[0].code);
                                          else
                                                sprintf (temp, "(print %s)", yyvsp[-1].code); 
                                           yyval.code = gen_code (temp) ; }
#line 2104 "trad1.tab.c"
    break;

  case 85:
#line 348 "trad1.y"
                                { if ( yyvsp[0].isbool == 0){
                                    sprintf(temp, "(/= 0 %s)", yyvsp[0].code);
                                    yyval.code = gen_code(temp);
                                  } else{
                                    yyval.code = yyvsp[0].code;
                                  }
                                }
#line 2116 "trad1.tab.c"
    break;

  case 86:
#line 357 "trad1.y"
                                { if ( yyvsp[0].isbool == 1){
                                    sprintf(temp, "(if %s 1 0)", yyvsp[0].code);
                                    yyval.code = gen_code(temp);
                                  } else{
                                    yyval.code = yyvsp[0].code;
                                  }
                                }
#line 2128 "trad1.tab.c"
    break;

  case 87:
#line 367 "trad1.y"
                                       { yyval.code = yyvsp[0].code ;
                                         yyval.value = yyvsp[0].value ;
                                        // Never translate terms
                                         yyval.isbool = 2; }
#line 2137 "trad1.tab.c"
    break;

  case 88:
#line 371 "trad1.y"
                                       { concat_ptr = temp; 
                                        concat_ptr += sprintf(concat_ptr, "(and ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2160 "trad1.tab.c"
    break;

  case 89:
#line 389 "trad1.y"
                                      { concat_ptr = temp; 
                                        concat_ptr += sprintf(concat_ptr, "(or ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2183 "trad1.tab.c"
    break;

  case 90:
#line 407 "trad1.y"
                                       {concat_ptr = temp;  
                                        concat_ptr += sprintf(concat_ptr, "(/= ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2206 "trad1.tab.c"
    break;

  case 91:
#line 425 "trad1.y"
                                       { concat_ptr = temp;  
                                        concat_ptr += sprintf(concat_ptr, "(== ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2229 "trad1.tab.c"
    break;

  case 92:
#line 443 "trad1.y"
                                       {concat_ptr = temp;   
                                        concat_ptr += sprintf(concat_ptr, "(< ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2252 "trad1.tab.c"
    break;

  case 93:
#line 461 "trad1.y"
                                       { concat_ptr = temp;  
                                        concat_ptr += sprintf(concat_ptr, "(<= ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2275 "trad1.tab.c"
    break;

  case 94:
#line 479 "trad1.y"
                                       {concat_ptr = temp;   
                                        concat_ptr += sprintf(concat_ptr, "(> ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2298 "trad1.tab.c"
    break;

  case 95:
#line 497 "trad1.y"
                                       {concat_ptr = temp;    
                                        concat_ptr += sprintf(concat_ptr, "(>= ");
                                        if (yyvsp[-2].isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 1;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2321 "trad1.tab.c"
    break;

  case 96:
#line 517 "trad1.y"
                                         { concat_ptr = temp;
                                        concat_ptr += sprintf(concat_ptr, "(+ ");
                                        if (yyvsp[-2].isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 0;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2344 "trad1.tab.c"
    break;

  case 97:
#line 535 "trad1.y"
                                         { concat_ptr = temp;
                                        concat_ptr += sprintf(concat_ptr, "(- ");
                                        if (yyvsp[-2].isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 0;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2367 "trad1.tab.c"
    break;

  case 98:
#line 553 "trad1.y"
                                         { concat_ptr = temp;
                                        concat_ptr += sprintf(concat_ptr, "(* ");
                                        if (yyvsp[-2].isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 0;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2390 "trad1.tab.c"
    break;

  case 99:
#line 571 "trad1.y"
                                         {concat_ptr = temp; 
                                        concat_ptr += sprintf(concat_ptr, "(/ ");
                                        if (yyvsp[-2].isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", yyvsp[-2].code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", yyvsp[-2].code);
                                        }
                                        if (yyvsp[0].isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", yyvsp[0].code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", yyvsp[0].code);
                                        }
                                        yyval.isbool = 0;
                                        yyval.code = gen_code (temp) ; 
                                        }
#line 2413 "trad1.tab.c"
    break;

  case 100:
#line 591 "trad1.y"
                                                   { yyval = yyvsp[0] ; }
#line 2419 "trad1.tab.c"
    break;

  case 101:
#line 592 "trad1.y"
                                                   { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2426 "trad1.tab.c"
    break;

  case 102:
#line 594 "trad1.y"
                                                   { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2433 "trad1.tab.c"
    break;

  case 103:
#line 598 "trad1.y"
                                         { yyval.code = yyvsp[0].code ; 
                                            yyval.value = 0;}
#line 2440 "trad1.tab.c"
    break;

  case 104:
#line 600 "trad1.y"
                                         { sprintf (temp, "%d", yyvsp[0].value) ;
                                           yyval.code = gen_code (temp) ; 
                                           yyval.value = 0;}
#line 2448 "trad1.tab.c"
    break;

  case 105:
#line 603 "trad1.y"
                                          { yyval = yyvsp[-1] ; }
#line 2454 "trad1.tab.c"
    break;

  case 106:
#line 604 "trad1.y"
                                         { yyval.code = yyvsp[0].code;
                                            yyval.value = -1;}
#line 2461 "trad1.tab.c"
    break;

  case 107:
#line 609 "trad1.y"
                                           {if (yyvsp[0].code == NULL){
                                                    sprintf (temp, "%s", yyvsp[-1].code);
                                                } else {
                                                    sprintf (temp, "(aref %s %s)", yyvsp[-1].code, yyvsp[0].code);
                                                }
                                                yyval.code = gen_code (temp); }
#line 2472 "trad1.tab.c"
    break;

  case 108:
#line 617 "trad1.y"
                                               { yyval.code = NULL; }
#line 2478 "trad1.tab.c"
    break;

  case 109:
#line 618 "trad1.y"
                                               { sprintf(temp, "%d", yyvsp[-1].value); yyval.code = gen_code(temp);}
#line 2484 "trad1.tab.c"
    break;

  case 110:
#line 621 "trad1.y"
                                                        { sprintf(temp,"(%s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                                            yyval.code = gen_code(temp);
                                                        }
#line 2492 "trad1.tab.c"
    break;

  case 111:
#line 626 "trad1.y"
                                                        { yyval.code = ""; }
#line 2498 "trad1.tab.c"
    break;

  case 112:
#line 627 "trad1.y"
                                                           {   if( yyvsp[0].code == NULL)    {
                                                                sprintf(temp, "%s",  yyvsp[-1].code);
                                                            } else{
                                                                sprintf(temp, "%s %s", yyvsp[-1].code, yyvsp[0].code);
                                                            }
                                                            yyval.code = gen_code(temp);
                                                        }
#line 2510 "trad1.tab.c"
    break;

  case 113:
#line 636 "trad1.y"
                                           { yyval.code = NULL; }
#line 2516 "trad1.tab.c"
    break;

  case 114:
#line 637 "trad1.y"
                                                                { yyval.code = yyvsp[0].code; }
#line 2522 "trad1.tab.c"
    break;


#line 2526 "trad1.tab.c"

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
#line 641 "trad1.y"
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
