/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "model_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "model_parser.tab.h"
#include "ast.h"

void yyerror(const char *s);
int yylex(void);

// Global root of the AST
ASTNode* ast_root = NULL;

#line 85 "model_parser.tab.c"

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

#include "model_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_NN_MODULE = 4,                  /* NN_MODULE  */
  YYSYMBOL_DEF = 5,                        /* DEF  */
  YYSYMBOL_SUPER = 6,                      /* SUPER  */
  YYSYMBOL_INIT = 7,                       /* INIT  */
  YYSYMBOL_SELF = 8,                       /* SELF  */
  YYSYMBOL_FORWARD = 9,                    /* FORWARD  */
  YYSYMBOL_EQUALS = 10,                    /* EQUALS  */
  YYSYMBOL_LPAREN = 11,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 12,                    /* RPAREN  */
  YYSYMBOL_COLON = 13,                     /* COLON  */
  YYSYMBOL_COMMA = 14,                     /* COMMA  */
  YYSYMBOL_DOT = 15,                       /* DOT  */
  YYSYMBOL_RESHAPE = 16,                   /* RESHAPE  */
  YYSYMBOL_SEQUENTIAL = 17,                /* SEQUENTIAL  */
  YYSYMBOL_CONV2D = 18,                    /* CONV2D  */
  YYSYMBOL_BATCHNORM2D = 19,               /* BATCHNORM2D  */
  YYSYMBOL_RELU = 20,                      /* RELU  */
  YYSYMBOL_MAXPOOL2D = 21,                 /* MAXPOOL2D  */
  YYSYMBOL_LINEAR = 22,                    /* LINEAR  */
  YYSYMBOL_MULTIPLY = 23,                  /* MULTIPLY  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 26,                     /* FLOAT  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_IDENTIFIER = 28,                /* IDENTIFIER  */
  YYSYMBOL_F_MAXPOOL2D = 29,               /* F_MAXPOOL2D  */
  YYSYMBOL_F_RELU = 30,                    /* F_RELU  */
  YYSYMBOL_F_VIEW = 31,                    /* F_VIEW  */
  YYSYMBOL_SOFTMAX = 32,                   /* SOFTMAX  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_class_def = 35,                 /* class_def  */
  YYSYMBOL_class_name = 36,                /* class_name  */
  YYSYMBOL_constructor = 37,               /* constructor  */
  YYSYMBOL_param_list = 38,                /* param_list  */
  YYSYMBOL_super_call = 39,                /* super_call  */
  YYSYMBOL_layers_definition = 40,         /* layers_definition  */
  YYSYMBOL_layer_definition_full = 41,     /* layer_definition_full  */
  YYSYMBOL_layer_definition = 42,          /* layer_definition  */
  YYSYMBOL_layer_args = 43,                /* layer_args  */
  YYSYMBOL_nested_layer_params = 44,       /* nested_layer_params  */
  YYSYMBOL_layer_param_list = 45,          /* layer_param_list  */
  YYSYMBOL_layer_param = 46,               /* layer_param  */
  YYSYMBOL_param_name = 47,                /* param_name  */
  YYSYMBOL_numeric_literal = 48,           /* numeric_literal  */
  YYSYMBOL_arithmetic_expression = 49,     /* arithmetic_expression  */
  YYSYMBOL_numeric_value = 50,             /* numeric_value  */
  YYSYMBOL_value = 51,                     /* value  */
  YYSYMBOL_methods = 52,                   /* methods  */
  YYSYMBOL_method_definition = 53,         /* method_definition  */
  YYSYMBOL_method_name = 54,               /* method_name  */
  YYSYMBOL_method_params = 55,             /* method_params  */
  YYSYMBOL_method_body = 56,               /* method_body  */
  YYSYMBOL_statement = 57,                 /* statement  */
  YYSYMBOL_var = 58,                       /* var  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_method_call = 60,               /* method_call  */
  YYSYMBOL_method_call_base = 61,          /* method_call_base  */
  YYSYMBOL_reshape_operation = 62,         /* reshape_operation  */
  YYSYMBOL_argument = 63,                  /* argument  */
  YYSYMBOL_sequential_layer = 64,          /* sequential_layer  */
  YYSYMBOL_sequential_layer_content = 65,  /* sequential_layer_content  */
  YYSYMBOL_layer_type = 66,                /* layer_type  */
  YYSYMBOL_layer_name = 67,                /* layer_name  */
  YYSYMBOL_arguments = 68                  /* arguments  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    62,    70,    74,    82,    83,    92,    96,
     104,   108,   116,   123,   127,   131,   132,   136,   137,   146,
     153,   157,   161,   162,   163,   172,   173,   182,   183,   187,
     188,   189,   193,   201,   205,   213,   214,   215,   219,   220,
     229,   237,   243,   248,   253,   258,   262,   272,   273,   282,
     283,   284,   293,   304,   313,   320,   327,   337,   348,   349,
     350,   351,   355,   359,   363,   371,   375,   388,   393,   404,
     409,   420,   424,   425,   426,   427,   428,   429,   433,   437,
     438
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "NN_MODULE",
  "DEF", "SUPER", "INIT", "SELF", "FORWARD", "EQUALS", "LPAREN", "RPAREN",
  "COLON", "COMMA", "DOT", "RESHAPE", "SEQUENTIAL", "CONV2D",
  "BATCHNORM2D", "RELU", "MAXPOOL2D", "LINEAR", "MULTIPLY", "RETURN",
  "INTEGER", "FLOAT", "STRING", "IDENTIFIER", "F_MAXPOOL2D", "F_RELU",
  "F_VIEW", "SOFTMAX", "$accept", "program", "class_def", "class_name",
  "constructor", "param_list", "super_call", "layers_definition",
  "layer_definition_full", "layer_definition", "layer_args",
  "nested_layer_params", "layer_param_list", "layer_param", "param_name",
  "numeric_literal", "arithmetic_expression", "numeric_value", "value",
  "methods", "method_definition", "method_name", "method_params",
  "method_body", "statement", "var", "expression", "method_call",
  "method_call_base", "reshape_operation", "argument", "sequential_layer",
  "sequential_layer_content", "layer_type", "layer_name", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-38)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -11,    22,    36,  -140,    64,  -140,    -1,  -140,    36,
      45,  -140,  -140,  -140,    72,  -140,    82,    73,    84,    85,
      86,    95,    75,    91,    98,  -140,  -140,    92,    68,    96,
      80,    24,  -140,  -140,    68,     3,   101,  -140,    97,    99,
     100,   102,   103,  -140,  -140,  -140,  -140,    24,    87,   105,
      88,    17,    17,    17,     5,   103,  -140,  -140,  -140,  -140,
    -140,    75,  -140,   106,    17,    89,  -140,  -140,  -140,  -140,
     103,  -140,  -140,  -140,   107,   108,   110,   111,   113,   114,
     117,    70,    17,    81,  -140,    17,  -140,  -140,  -140,    17,
      17,   116,   118,  -140,    17,  -140,   119,   120,   127,  -140,
     122,  -140,  -140,   124,   128,  -140,   -11,   123,  -140,   128,
     125,    88,  -140,   129,   130,   131,    69,   126,   133,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   134,   135,    39,
      40,  -140,   136,    69,   132,   137,    47,  -140,   138,   139,
     140,  -140,   142,  -140,  -140,  -140,   141,   143,   145,    39,
    -140,  -140,     0,  -140,    40,    51,  -140,   144,  -140,  -140,
      47,  -140,  -140,    39,  -140,  -140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    33,     4,     0,     1,     0,     2,    33,
       0,    35,    36,    37,     0,    32,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     3,     6,    39,    45,     0,
       0,     0,    47,    34,    45,     0,     0,     7,     0,     0,
       0,     0,    41,    43,    42,    44,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    49,    50,    51,
      48,     0,    78,     0,     0,     0,    22,    23,    59,    58,
      60,    62,    61,    63,    79,     0,     0,     0,    48,     0,
       0,     0,     0,     0,    24,     0,    54,    55,    56,     0,
       0,     0,     0,    65,     0,    80,     0,     0,     0,    52,
       0,    57,    53,     0,    10,    64,     0,     0,     5,    10,
       0,     0,     9,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    11,    13,     0,     0,    71,
      16,    12,     0,     0,    67,     0,     0,    30,    47,     0,
      15,    17,     0,    27,    29,    20,    31,     0,     0,    71,
      66,    25,     0,    14,     0,     0,     8,    69,    68,    28,
       0,    18,    19,    71,    26,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,    44,  -140,   104,  -140,    50,  -140,  -107,
    -140,  -140,  -140,     6,  -140,  -125,  -140,  -140,    -2,   152,
    -140,   109,  -140,   146,  -140,   -28,  -140,   -27,    33,    38,
     -57,  -140,  -139,  -140,    53,   -51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,    25,    27,   104,   108,   109,   134,
     131,   139,   140,   141,   142,    69,   152,   144,   145,     8,
       9,    14,    20,    33,    34,    70,    56,    71,    72,    73,
      74,   126,   135,   127,    63,    75
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    76,    77,    42,    43,   143,    35,    83,    11,   125,
     158,   151,   159,    47,    11,    12,     1,     4,    48,    55,
      57,    12,     6,   160,   165,    38,   148,    13,    64,   143,
     143,    92,    38,    78,    95,   164,    79,   100,    96,    97,
      65,     7,    66,    67,    68,    32,    39,    40,    41,    16,
     133,   136,    32,    39,    40,    41,   118,   119,   120,   121,
     122,   123,   136,    65,    44,    66,    67,   137,   138,    45,
      65,   124,    66,    67,    65,    10,    66,    67,   137,    32,
      58,    19,    91,    17,    30,    59,   118,   119,   120,   121,
     122,   123,    31,    93,    18,    94,    32,    21,    23,    22,
      24,   124,   146,    26,    28,    29,    30,    36,    37,    49,
      51,    52,    50,    53,    84,    60,    62,    82,    54,    61,
      86,    85,    87,    88,   -37,    89,   146,   146,    90,    98,
      99,   101,   102,   103,   105,   106,   107,   115,   111,   113,
     116,   128,   132,   117,   129,   130,   149,   147,   -21,   150,
     110,   153,   155,   162,   154,   156,    48,   157,   163,   112,
     161,    15,     0,    80,   114,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46
};

static const yytype_int16 yycheck[] =
{
      28,    52,    53,    31,    31,   130,    34,    64,     9,   116,
     149,   136,    12,    10,     9,    16,     3,    28,    15,    47,
      47,    16,     0,    23,   163,     8,   133,    28,    11,   154,
     155,    82,     8,    28,    85,   160,    31,    94,    89,    90,
      23,     5,    25,    26,    27,    28,    29,    30,    31,     4,
      11,    11,    28,    29,    30,    31,    17,    18,    19,    20,
      21,    22,    11,    23,    31,    25,    26,    27,    28,    31,
      23,    32,    25,    26,    23,    11,    25,    26,    27,    28,
      47,     8,    12,    11,    14,    47,    17,    18,    19,    20,
      21,    22,    24,    12,    12,    14,    28,    13,    12,    14,
       5,    32,   130,    28,    13,     7,    14,    11,    28,     8,
      11,    11,    15,    11,    25,    28,    28,    11,    15,    14,
      12,    14,    12,    12,    11,    11,   154,   155,    11,    13,
      12,    12,    12,     6,    12,    11,     8,     8,    15,    14,
      10,    15,     7,    12,    11,    11,    14,    11,    10,    12,
     106,    12,    10,   155,    14,    12,    15,    12,    14,   109,
     154,     9,    -1,    54,   111,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    34,    35,    28,    36,     0,     5,    52,    53,
      11,     9,    16,    28,    54,    52,     4,    11,    12,     8,
      55,    13,    14,    12,     5,    37,    28,    38,    13,     7,
      14,    24,    28,    56,    57,    58,    11,    28,     8,    29,
      30,    31,    58,    60,    61,    62,    56,    10,    15,     8,
      15,    11,    11,    11,    15,    58,    59,    60,    61,    62,
      28,    14,    28,    67,    11,    23,    25,    26,    27,    48,
      58,    60,    61,    62,    63,    68,    68,    68,    28,    31,
      54,    38,    11,    63,    25,    14,    12,    12,    12,    11,
      11,    12,    68,    12,    14,    68,    68,    68,    13,    12,
      63,    12,    12,     6,    39,    12,    11,     8,    40,    41,
      36,    15,    40,    14,    67,     8,    10,    12,    17,    18,
      19,    20,    21,    22,    32,    42,    64,    66,    15,    11,
      11,    43,     7,    11,    42,    65,    11,    27,    28,    44,
      45,    46,    47,    48,    50,    51,    58,    11,    42,    14,
      12,    48,    49,    12,    14,    10,    12,    12,    65,    12,
      23,    46,    51,    14,    48,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    36,    37,    38,    38,    39,    40,
      40,    41,    42,    42,    43,    44,    44,    45,    45,    46,
      46,    47,    48,    48,    48,    49,    49,    50,    50,    51,
      51,    51,    52,    52,    53,    54,    54,    54,    55,    55,
      56,    56,    56,    56,    56,    56,    57,    58,    58,    59,
      59,    59,    60,    61,    61,    61,    61,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    66,    67,    68,
      68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     7,     1,    10,     1,     3,    10,     2,
       0,     5,     2,     1,     3,     1,     0,     1,     3,     3,
       1,     1,     1,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     2,     0,     7,     1,     1,     1,     1,     3,
       2,     2,     2,     2,     2,     0,     3,     1,     3,     1,
       1,     1,     6,     6,     4,     4,     4,     6,     1,     1,
       1,     1,     1,     1,     5,     3,     4,     1,     3,     3,
       5,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: class_def methods  */
#line 53 "model_parser.y"
                      {
        ast_root = create_node(NODE_PROGRAM, NULL);
        add_child(ast_root, (yyvsp[-1].node));
        add_child(ast_root, (yyvsp[0].node));
        (yyval.node) = ast_root;
    }
#line 1260 "model_parser.tab.c"
    break;

  case 3: /* class_def: CLASS class_name LPAREN NN_MODULE RPAREN COLON constructor  */
#line 62 "model_parser.y"
                                                               {
        ASTNode* class_node = create_node(NODE_CLASS, (yyvsp[-5].sval));
        add_child(class_node, (yyvsp[0].node));
        (yyval.node) = class_node;
    }
#line 1270 "model_parser.tab.c"
    break;

  case 4: /* class_name: IDENTIFIER  */
#line 70 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1276 "model_parser.tab.c"
    break;

  case 5: /* constructor: DEF INIT LPAREN SELF COMMA param_list RPAREN COLON super_call layers_definition  */
#line 74 "model_parser.y"
                                                                                    {
        ASTNode* constructor_node = create_node(NODE_METHOD, "constructor");
        add_child(constructor_node, (yyvsp[0].node));  // Add layers_definition as a child
        (yyval.node) = constructor_node;
    }
#line 1286 "model_parser.tab.c"
    break;

  case 6: /* param_list: IDENTIFIER  */
#line 82 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1292 "model_parser.tab.c"
    break;

  case 7: /* param_list: param_list COMMA IDENTIFIER  */
#line 83 "model_parser.y"
                                  { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 3);
        sprintf(temp, "%s, %s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        (yyval.sval) = temp;
    }
#line 1303 "model_parser.tab.c"
    break;

  case 9: /* layers_definition: layer_definition_full layers_definition  */
#line 96 "model_parser.y"
                                            {
        ASTNode* layers_node = create_node(NODE_STATEMENT, "layers");
        add_child(layers_node, (yyvsp[-1].node));
        if ((yyvsp[0].node)) {
            add_child(layers_node, (yyvsp[0].node));
        }
        (yyval.node) = layers_node;
    }
#line 1316 "model_parser.tab.c"
    break;

  case 10: /* layers_definition: %empty  */
#line 104 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1322 "model_parser.tab.c"
    break;

  case 11: /* layer_definition_full: SELF DOT layer_name EQUALS layer_definition  */
#line 108 "model_parser.y"
                                                {
        ASTNode* layer_def_node = create_node(NODE_LAYER_DEFINITION, (yyvsp[-2].sval));
        add_child(layer_def_node, (yyvsp[0].node));
        (yyval.node) = layer_def_node;
    }
#line 1332 "model_parser.tab.c"
    break;

  case 12: /* layer_definition: layer_type layer_args  */
#line 116 "model_parser.y"
                          { 
        char* temp = malloc(strlen((yyvsp[-1].sval)) + strlen((yyvsp[0].sval)) + 10);
        sprintf(temp, "%s(%s)", (yyvsp[-1].sval), (yyvsp[0].sval));
        free((yyvsp[-1].sval));
        free((yyvsp[0].sval));
        (yyval.node) = create_node(NODE_LAYER_DEFINITION, temp);
    }
#line 1344 "model_parser.tab.c"
    break;

  case 13: /* layer_definition: sequential_layer  */
#line 123 "model_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1350 "model_parser.tab.c"
    break;

  case 14: /* layer_args: LPAREN nested_layer_params RPAREN  */
#line 127 "model_parser.y"
                                      { (yyval.sval) = (yyvsp[-1].sval); }
#line 1356 "model_parser.tab.c"
    break;

  case 15: /* nested_layer_params: layer_param_list  */
#line 131 "model_parser.y"
                     { (yyval.sval) = (yyvsp[0].sval); }
#line 1362 "model_parser.tab.c"
    break;

  case 16: /* nested_layer_params: %empty  */
#line 132 "model_parser.y"
                  { (yyval.sval) = strdup(""); }
#line 1368 "model_parser.tab.c"
    break;

  case 17: /* layer_param_list: layer_param  */
#line 136 "model_parser.y"
                { (yyval.sval) = (yyvsp[0].sval); }
#line 1374 "model_parser.tab.c"
    break;

  case 18: /* layer_param_list: layer_param_list COMMA layer_param  */
#line 137 "model_parser.y"
                                         { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 3); 
        sprintf(temp, "%s, %s", (yyvsp[-2].sval), (yyvsp[0].sval)); 
        free((yyvsp[-2].sval)); 
        (yyval.sval) = temp; 
    }
#line 1385 "model_parser.tab.c"
    break;

  case 19: /* layer_param: param_name EQUALS value  */
#line 146 "model_parser.y"
                            { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 2); 
        sprintf(temp, "%s=%s", (yyvsp[-2].sval), (yyvsp[0].sval)); 
        free((yyvsp[-2].sval)); 
        free((yyvsp[0].sval)); 
        (yyval.sval) = temp; 
    }
#line 1397 "model_parser.tab.c"
    break;

  case 20: /* layer_param: value  */
#line 153 "model_parser.y"
            { (yyval.sval) = (yyvsp[0].sval); }
#line 1403 "model_parser.tab.c"
    break;

  case 21: /* param_name: IDENTIFIER  */
#line 157 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1409 "model_parser.tab.c"
    break;

  case 22: /* numeric_literal: INTEGER  */
#line 161 "model_parser.y"
            { (yyval.sval) = (yyvsp[0].sval); }
#line 1415 "model_parser.tab.c"
    break;

  case 23: /* numeric_literal: FLOAT  */
#line 162 "model_parser.y"
            { (yyval.sval) = (yyvsp[0].sval); }
#line 1421 "model_parser.tab.c"
    break;

  case 24: /* numeric_literal: MULTIPLY INTEGER  */
#line 163 "model_parser.y"
                       { 
        char* temp = malloc(strlen((yyvsp[0].sval)) + 2);
        sprintf(temp, "-%s", (yyvsp[0].sval));
        free((yyvsp[0].sval));
        (yyval.sval) = temp;
    }
#line 1432 "model_parser.tab.c"
    break;

  case 25: /* arithmetic_expression: numeric_literal  */
#line 172 "model_parser.y"
                    { (yyval.sval) = (yyvsp[0].sval); }
#line 1438 "model_parser.tab.c"
    break;

  case 26: /* arithmetic_expression: arithmetic_expression MULTIPLY numeric_literal  */
#line 173 "model_parser.y"
                                                     { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 2);
        sprintf(temp, "%s*%s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        (yyval.sval) = temp;
    }
#line 1449 "model_parser.tab.c"
    break;

  case 27: /* numeric_value: numeric_literal  */
#line 182 "model_parser.y"
                    { (yyval.sval) = (yyvsp[0].sval); }
#line 1455 "model_parser.tab.c"
    break;

  case 28: /* numeric_value: LPAREN arithmetic_expression RPAREN  */
#line 183 "model_parser.y"
                                          { (yyval.sval) = (yyvsp[-1].sval); }
#line 1461 "model_parser.tab.c"
    break;

  case 29: /* value: numeric_value  */
#line 187 "model_parser.y"
                  { (yyval.sval) = (yyvsp[0].sval); }
#line 1467 "model_parser.tab.c"
    break;

  case 30: /* value: STRING  */
#line 188 "model_parser.y"
             { (yyval.sval) = (yyvsp[0].sval); }
#line 1473 "model_parser.tab.c"
    break;

  case 31: /* value: var  */
#line 189 "model_parser.y"
          { (yyval.sval) = (yyvsp[0].sval); }
#line 1479 "model_parser.tab.c"
    break;

  case 32: /* methods: method_definition methods  */
#line 193 "model_parser.y"
                              {
        ASTNode* methods_node = create_node(NODE_STATEMENT, "methods");
        add_child(methods_node, (yyvsp[-1].node));
        if ((yyvsp[0].node)) {
            add_child(methods_node, (yyvsp[0].node));
        }
        (yyval.node) = methods_node;
    }
#line 1492 "model_parser.tab.c"
    break;

  case 33: /* methods: %empty  */
#line 201 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1498 "model_parser.tab.c"
    break;

  case 34: /* method_definition: DEF method_name LPAREN method_params RPAREN COLON method_body  */
#line 205 "model_parser.y"
                                                                  {
        ASTNode* method_node = create_node(NODE_METHOD, (yyvsp[-5].sval));
        add_child(method_node, (yyvsp[0].node));
        (yyval.node) = method_node;
    }
#line 1508 "model_parser.tab.c"
    break;

  case 35: /* method_name: FORWARD  */
#line 213 "model_parser.y"
            { (yyval.sval) = strdup("forward"); }
#line 1514 "model_parser.tab.c"
    break;

  case 36: /* method_name: RESHAPE  */
#line 214 "model_parser.y"
              { (yyval.sval) = strdup("reshape"); }
#line 1520 "model_parser.tab.c"
    break;

  case 37: /* method_name: IDENTIFIER  */
#line 215 "model_parser.y"
                 { (yyval.sval) = (yyvsp[0].sval); }
#line 1526 "model_parser.tab.c"
    break;

  case 38: /* method_params: SELF  */
#line 219 "model_parser.y"
         { (yyval.sval) = strdup("self"); }
#line 1532 "model_parser.tab.c"
    break;

  case 39: /* method_params: SELF COMMA param_list  */
#line 220 "model_parser.y"
                            { 
        char* temp = malloc(strlen((yyvsp[0].sval)) + 6);
        sprintf(temp, "self, %s", (yyvsp[0].sval));
        free((yyvsp[0].sval));
        (yyval.sval) = temp;
    }
#line 1543 "model_parser.tab.c"
    break;

  case 40: /* method_body: statement method_body  */
#line 229 "model_parser.y"
                          {
        ASTNode* body_node = create_node(NODE_STATEMENT, NULL);
        add_child(body_node, (yyvsp[-1].node));
        if ((yyvsp[0].node)) {
            add_child(body_node, (yyvsp[0].node));
        }
        (yyval.node) = body_node;
    }
#line 1556 "model_parser.tab.c"
    break;

  case 41: /* method_body: RETURN var  */
#line 237 "model_parser.y"
                 { 
        char* return_str = malloc(strlen((yyvsp[0].sval)) + 8);
        sprintf(return_str, "return %s", (yyvsp[0].sval));
        free((yyvsp[0].sval));
        (yyval.node) = create_node(NODE_STATEMENT, return_str);
    }
#line 1567 "model_parser.tab.c"
    break;

  case 42: /* method_body: RETURN method_call_base  */
#line 243 "model_parser.y"
                              {
        char* return_str = malloc(strlen((yyvsp[0].node)->value) + 8);
        sprintf(return_str, "return %s", (yyvsp[0].node)->value);
        (yyval.node) = create_node(NODE_STATEMENT, return_str);
    }
#line 1577 "model_parser.tab.c"
    break;

  case 43: /* method_body: RETURN method_call  */
#line 248 "model_parser.y"
                         {
        char* return_str = malloc(strlen((yyvsp[0].node)->value) + 8);
        sprintf(return_str, "return %s", (yyvsp[0].node)->value);
        (yyval.node) = create_node(NODE_STATEMENT, return_str);
    }
#line 1587 "model_parser.tab.c"
    break;

  case 44: /* method_body: RETURN reshape_operation  */
#line 253 "model_parser.y"
                               {
        char* return_str = malloc(strlen((yyvsp[0].node)->value) + 8);
        sprintf(return_str, "return %s", (yyvsp[0].node)->value);
        (yyval.node) = create_node(NODE_STATEMENT, return_str);
    }
#line 1597 "model_parser.tab.c"
    break;

  case 45: /* method_body: %empty  */
#line 258 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1603 "model_parser.tab.c"
    break;

  case 46: /* statement: var EQUALS expression  */
#line 262 "model_parser.y"
                          {
        ASTNode* stmt_node = create_node(NODE_STATEMENT, "=");
        ASTNode* var_node = create_node(NODE_VARIABLE, (yyvsp[-2].sval));
        add_child(stmt_node, var_node);
        add_child(stmt_node, (yyvsp[0].node));
        (yyval.node) = stmt_node;
    }
#line 1615 "model_parser.tab.c"
    break;

  case 47: /* var: IDENTIFIER  */
#line 272 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1621 "model_parser.tab.c"
    break;

  case 48: /* var: var DOT IDENTIFIER  */
#line 273 "model_parser.y"
                         { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 2);
        sprintf(temp, "%s.%s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        (yyval.sval) = temp;
    }
#line 1632 "model_parser.tab.c"
    break;

  case 49: /* expression: method_call  */
#line 282 "model_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1638 "model_parser.tab.c"
    break;

  case 50: /* expression: method_call_base  */
#line 283 "model_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1644 "model_parser.tab.c"
    break;

  case 51: /* expression: reshape_operation  */
#line 284 "model_parser.y"
                        { 
        // Create an expression node from reshape operation
        ASTNode* expr_node = create_node(NODE_EXPRESSION, (yyvsp[0].node)->value);
        add_child(expr_node, (yyvsp[0].node));
        (yyval.node) = expr_node;
    }
#line 1655 "model_parser.tab.c"
    break;

  case 52: /* method_call: SELF DOT layer_name LPAREN arguments RPAREN  */
#line 293 "model_parser.y"
                                                { 
        char* temp = malloc(strlen((yyvsp[-3].sval)) + strlen((yyvsp[-1].sval)) + 10);
        sprintf(temp, "self.%s(%s)", (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_METHOD_CALL, temp);
        free(temp);
    }
#line 1668 "model_parser.tab.c"
    break;

  case 53: /* method_call_base: var DOT method_name LPAREN arguments RPAREN  */
#line 304 "model_parser.y"
                                                { 
        char* temp = malloc(strlen((yyvsp[-5].sval)) + strlen((yyvsp[-3].sval)) + strlen((yyvsp[-1].sval)) + 4);
        sprintf(temp, "%s.%s(%s)", (yyvsp[-5].sval), (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-5].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_METHOD_CALL, temp);
        free(temp);
    }
#line 1682 "model_parser.tab.c"
    break;

  case 54: /* method_call_base: F_MAXPOOL2D LPAREN arguments RPAREN  */
#line 313 "model_parser.y"
                                          {
        char* temp = malloc(strlen((yyvsp[-1].sval)) + 20);
        sprintf(temp, "F.MaxPool2d(%s)", (yyvsp[-1].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_METHOD_CALL, temp);
        free(temp);
    }
#line 1694 "model_parser.tab.c"
    break;

  case 55: /* method_call_base: F_RELU LPAREN arguments RPAREN  */
#line 320 "model_parser.y"
                                     {
        char* temp = malloc(strlen((yyvsp[-1].sval)) + 20);
        sprintf(temp, "F.relu(%s)", (yyvsp[-1].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_METHOD_CALL, temp);
        free(temp);
    }
#line 1706 "model_parser.tab.c"
    break;

  case 56: /* method_call_base: F_VIEW LPAREN arguments RPAREN  */
#line 327 "model_parser.y"
                                     {
        char* temp = malloc(strlen((yyvsp[-1].sval)) + 20);
        sprintf(temp, "F.view(%s)", (yyvsp[-1].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_METHOD_CALL, temp);
        free(temp);
    }
#line 1718 "model_parser.tab.c"
    break;

  case 57: /* reshape_operation: var DOT F_VIEW LPAREN arguments RPAREN  */
#line 337 "model_parser.y"
                                           { 
        char* temp = malloc(strlen((yyvsp[-5].sval)) + strlen((yyvsp[-1].sval)) + 10);
        sprintf(temp, "%s.view(%s)", (yyvsp[-5].sval), (yyvsp[-1].sval));
        free((yyvsp[-5].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_OPERATION, temp);
        free(temp);
    }
#line 1731 "model_parser.tab.c"
    break;

  case 58: /* argument: numeric_literal  */
#line 348 "model_parser.y"
                    { (yyval.sval) = (yyvsp[0].sval); }
#line 1737 "model_parser.tab.c"
    break;

  case 59: /* argument: STRING  */
#line 349 "model_parser.y"
             { (yyval.sval) = (yyvsp[0].sval); }
#line 1743 "model_parser.tab.c"
    break;

  case 60: /* argument: var  */
#line 350 "model_parser.y"
          { (yyval.sval) = (yyvsp[0].sval); }
#line 1749 "model_parser.tab.c"
    break;

  case 61: /* argument: method_call_base  */
#line 351 "model_parser.y"
                       { 
        // Handle nested method calls
        (yyval.sval) = (yyvsp[0].node)->value ? strdup((yyvsp[0].node)->value) : strdup("method_call");
    }
#line 1758 "model_parser.tab.c"
    break;

  case 62: /* argument: method_call  */
#line 355 "model_parser.y"
                  {
        // Handle method calls in arguments
        (yyval.sval) = (yyvsp[0].node)->value ? strdup((yyvsp[0].node)->value) : strdup("method_call");
    }
#line 1767 "model_parser.tab.c"
    break;

  case 63: /* argument: reshape_operation  */
#line 359 "model_parser.y"
                        {
        // Handle reshape operations in arguments
        (yyval.sval) = (yyvsp[0].node)->value ? strdup((yyvsp[0].node)->value) : strdup("reshape_operation");
    }
#line 1776 "model_parser.tab.c"
    break;

  case 64: /* argument: LPAREN argument COMMA argument RPAREN  */
#line 363 "model_parser.y"
                                            {
        // Handle tuples like (2, 2)
        char* temp = malloc(strlen((yyvsp[-3].sval)) + strlen((yyvsp[-1].sval)) + 4);
        sprintf(temp, "(%s, %s)", (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
        (yyval.sval) = temp;
    }
#line 1789 "model_parser.tab.c"
    break;

  case 65: /* argument: LPAREN argument RPAREN  */
#line 371 "model_parser.y"
                             { (yyval.sval) = (yyvsp[-1].sval); }
#line 1795 "model_parser.tab.c"
    break;

  case 66: /* sequential_layer: SEQUENTIAL LPAREN sequential_layer_content RPAREN  */
#line 375 "model_parser.y"
                                                      { 
        // Create a sequential layer node with all its content
        (yyval.node) = create_node(NODE_SEQUENTIAL_LAYER, "nn.Sequential");
        if ((yyvsp[-1].node)) {
            // Add all children from sequential_layer_content
            for (int i = 0; i < (yyvsp[-1].node)->child_count; i++) {
                add_child((yyval.node), (yyvsp[-1].node)->children[i]);
            }
        }
    }
#line 1810 "model_parser.tab.c"
    break;

  case 67: /* sequential_layer_content: layer_definition  */
#line 388 "model_parser.y"
                     { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, (yyvsp[0].node));
        (yyval.node) = content_node;
    }
#line 1820 "model_parser.tab.c"
    break;

  case 68: /* sequential_layer_content: layer_definition COMMA sequential_layer_content  */
#line 393 "model_parser.y"
                                                      { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, (yyvsp[-2].node));
        if ((yyvsp[0].node)) {
            // Add all children from the existing sequential_layer_content
            for (int i = 0; i < (yyvsp[0].node)->child_count; i++) {
                add_child(content_node, (yyvsp[0].node)->children[i]);
            }
        }
        (yyval.node) = content_node;
    }
#line 1836 "model_parser.tab.c"
    break;

  case 69: /* sequential_layer_content: LPAREN layer_definition RPAREN  */
#line 404 "model_parser.y"
                                     { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, (yyvsp[-1].node));
        (yyval.node) = content_node;
    }
#line 1846 "model_parser.tab.c"
    break;

  case 70: /* sequential_layer_content: LPAREN layer_definition RPAREN COMMA sequential_layer_content  */
#line 409 "model_parser.y"
                                                                    { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, (yyvsp[-3].node));
        if ((yyvsp[0].node)) {
            // Add all children from the existing sequential_layer_content
            for (int i = 0; i < (yyvsp[0].node)->child_count; i++) {
                add_child(content_node, (yyvsp[0].node)->children[i]);
            }
        }
        (yyval.node) = content_node;
    }
#line 1862 "model_parser.tab.c"
    break;

  case 71: /* sequential_layer_content: %empty  */
#line 420 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1868 "model_parser.tab.c"
    break;

  case 72: /* layer_type: CONV2D  */
#line 424 "model_parser.y"
           { (yyval.sval) = strdup("nn.Conv2d"); }
#line 1874 "model_parser.tab.c"
    break;

  case 73: /* layer_type: BATCHNORM2D  */
#line 425 "model_parser.y"
                  { (yyval.sval) = strdup("nn.BatchNorm2d"); }
#line 1880 "model_parser.tab.c"
    break;

  case 74: /* layer_type: RELU  */
#line 426 "model_parser.y"
           { (yyval.sval) = strdup("nn.ReLU"); }
#line 1886 "model_parser.tab.c"
    break;

  case 75: /* layer_type: MAXPOOL2D  */
#line 427 "model_parser.y"
                { (yyval.sval) = strdup("nn.MaxPool2d"); }
#line 1892 "model_parser.tab.c"
    break;

  case 76: /* layer_type: LINEAR  */
#line 428 "model_parser.y"
             { (yyval.sval) = strdup("nn.Linear"); }
#line 1898 "model_parser.tab.c"
    break;

  case 77: /* layer_type: SOFTMAX  */
#line 429 "model_parser.y"
              { (yyval.sval) = strdup("nn.Softmax"); }
#line 1904 "model_parser.tab.c"
    break;

  case 78: /* layer_name: IDENTIFIER  */
#line 433 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1910 "model_parser.tab.c"
    break;

  case 79: /* arguments: argument  */
#line 437 "model_parser.y"
             { (yyval.sval) = (yyvsp[0].sval); }
#line 1916 "model_parser.tab.c"
    break;

  case 80: /* arguments: argument COMMA arguments  */
#line 438 "model_parser.y"
                               { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 3);
        sprintf(temp, "%s, %s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        free((yyvsp[0].sval));
        (yyval.sval) = temp;
    }
#line 1928 "model_parser.tab.c"
    break;


#line 1932 "model_parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 447 "model_parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    yyparse();
    
    // Print the AST
    if (ast_root) {
        print_ast(ast_root, 0);
        
        // Free the AST
        free_ast(ast_root);
    }
    
    return 0;
}
