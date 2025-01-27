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
  YYSYMBOL_YYACCEPT = 29,                  /* $accept  */
  YYSYMBOL_program = 30,                   /* program  */
  YYSYMBOL_class_def = 31,                 /* class_def  */
  YYSYMBOL_class_name = 32,                /* class_name  */
  YYSYMBOL_constructor = 33,               /* constructor  */
  YYSYMBOL_param_list = 34,                /* param_list  */
  YYSYMBOL_super_call = 35,                /* super_call  */
  YYSYMBOL_layers_definition = 36,         /* layers_definition  */
  YYSYMBOL_layer_definition_full = 37,     /* layer_definition_full  */
  YYSYMBOL_layer_definition = 38,          /* layer_definition  */
  YYSYMBOL_layer_args = 39,                /* layer_args  */
  YYSYMBOL_nested_layer_params = 40,       /* nested_layer_params  */
  YYSYMBOL_layer_param_list = 41,          /* layer_param_list  */
  YYSYMBOL_layer_param = 42,               /* layer_param  */
  YYSYMBOL_param_name = 43,                /* param_name  */
  YYSYMBOL_numeric_literal = 44,           /* numeric_literal  */
  YYSYMBOL_arithmetic_expression = 45,     /* arithmetic_expression  */
  YYSYMBOL_numeric_value = 46,             /* numeric_value  */
  YYSYMBOL_value = 47,                     /* value  */
  YYSYMBOL_methods = 48,                   /* methods  */
  YYSYMBOL_method_definition = 49,         /* method_definition  */
  YYSYMBOL_method_name = 50,               /* method_name  */
  YYSYMBOL_method_params = 51,             /* method_params  */
  YYSYMBOL_method_body = 52,               /* method_body  */
  YYSYMBOL_statement = 53,                 /* statement  */
  YYSYMBOL_var = 54,                       /* var  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_method_call = 56,               /* method_call  */
  YYSYMBOL_method_operation = 57,          /* method_operation  */
  YYSYMBOL_argument = 58,                  /* argument  */
  YYSYMBOL_sequential_layer = 59,          /* sequential_layer  */
  YYSYMBOL_sequential_layer_content = 60,  /* sequential_layer_content  */
  YYSYMBOL_layer_type = 61,                /* layer_type  */
  YYSYMBOL_layer_name = 62,                /* layer_name  */
  YYSYMBOL_arguments = 63                  /* arguments  */
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
#define YYLAST   151

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    59,    67,    71,    79,    80,    89,    93,
     101,   105,   113,   120,   124,   128,   129,   133,   134,   143,
     150,   154,   158,   159,   160,   169,   170,   179,   180,   184,
     185,   186,   190,   198,   202,   210,   211,   215,   216,   225,
     233,   239,   244,   248,   258,   259,   268,   269,   273,   283,
     291,   301,   302,   303,   304,   305,   309,   322,   327,   338,
     343,   354,   358,   359,   360,   361,   362,   366,   370,   371
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
  "INTEGER", "FLOAT", "STRING", "IDENTIFIER", "$accept", "program",
  "class_def", "class_name", "constructor", "param_list", "super_call",
  "layers_definition", "layer_definition_full", "layer_definition",
  "layer_args", "nested_layer_params", "layer_param_list", "layer_param",
  "param_name", "numeric_literal", "arithmetic_expression",
  "numeric_value", "value", "methods", "method_definition", "method_name",
  "method_params", "method_body", "statement", "var", "expression",
  "method_call", "method_operation", "argument", "sequential_layer",
  "sequential_layer_content", "layer_type", "layer_name", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      11,    -8,    37,    34,  -108,    35,  -108,    -4,  -108,    34,
      53,  -108,  -108,    36,  -108,    61,    67,    63,    64,    65,
      74,    52,    69,    76,  -108,  -108,    70,    -9,    75,    57,
      -6,  -108,  -108,    -9,     2,    79,  -108,    73,    77,  -108,
    -108,  -108,  -108,    -6,    62,    80,    68,    -5,    77,  -108,
    -108,    52,  -108,    78,    82,    84,    86,    60,     7,     7,
       7,    85,     7,    66,  -108,  -108,  -108,  -108,    77,  -108,
      87,    88,    90,    91,    93,    92,  -108,     7,  -108,  -108,
    -108,    96,   100,  -108,  -108,    -8,    94,  -108,   100,    97,
      68,  -108,   102,   103,   104,    49,    99,   101,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,   106,   108,    43,    17,  -108,
     107,    49,   105,   109,    33,  -108,   110,   111,   112,  -108,
     114,  -108,  -108,  -108,   113,   115,   117,    43,  -108,  -108,
      26,  -108,    17,    25,  -108,   116,  -108,  -108,    33,  -108,
    -108,    43,  -108,  -108
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    33,     4,     0,     1,     0,     2,    33,
       0,    35,    36,     0,    32,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     3,     6,    38,    42,     0,     0,
       0,    44,    34,    42,     0,     0,     7,     0,    40,    41,
      46,    47,    39,     0,     0,     0,     0,     0,     0,    43,
      45,     0,    67,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    52,    51,    53,    54,
      68,     0,     0,     0,     0,     0,    24,     0,    48,    50,
      49,     0,    10,    55,    69,     0,     0,     5,    10,     0,
       0,     9,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    11,    13,     0,     0,    61,    16,    12,
       0,     0,    57,     0,     0,    30,    44,     0,    15,    17,
       0,    27,    29,    20,    31,     0,     0,    61,    56,    25,
       0,    14,     0,     0,     8,    59,    58,    28,     0,    18,
      19,    61,    26,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -108,  -108,  -108,    40,  -108,    71,  -108,    44,  -108,   -82,
    -108,  -108,  -108,    -1,  -108,  -107,  -108,  -108,     0,   125,
    -108,    89,  -108,   118,  -108,   -27,    95,  -108,   -22,    81,
    -108,   -86,  -108,    45,   -50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,    24,    26,    82,    87,    88,   112,
     109,   117,   118,   119,   120,    67,   130,   122,   123,     8,
       9,    13,    19,    32,    33,    68,    39,    40,    69,    70,
     104,   113,   105,    53,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   121,    37,    38,    11,    11,    34,   129,    41,    72,
      73,    54,    43,   103,     1,    30,    48,    44,    62,    31,
       4,    41,    31,    55,    12,   121,   121,    84,   114,   126,
      63,   142,    64,    65,    66,    31,   114,     6,   137,     7,
      63,   136,    64,    65,   115,   116,    10,    16,    63,   138,
      64,    65,   115,    31,   111,   143,    63,    15,    64,    65,
      97,    98,    99,   100,   101,   102,    97,    98,    99,   100,
     101,   102,    61,    17,    29,    18,    20,    22,    21,    23,
      25,   124,    27,    28,    29,    36,    35,    45,    46,    58,
      50,    76,    47,    59,    51,   -36,    52,    60,    74,    81,
      78,    77,    79,    80,    83,   124,   124,    85,    86,    90,
      94,    92,   107,    95,   106,   110,    96,   108,   125,   127,
     -21,   128,    57,   131,   133,    89,   132,   134,    44,   135,
     141,   139,    91,   140,    14,    93,    56,     0,    49,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,    42
};

static const yytype_int16 yycheck[] =
{
      27,   108,     8,    30,     9,     9,    33,   114,    30,    59,
      60,    16,    10,    95,     3,    24,    43,    15,    11,    28,
      28,    43,    28,    28,    28,   132,   133,    77,    11,   111,
      23,   138,    25,    26,    27,    28,    11,     0,    12,     5,
      23,   127,    25,    26,    27,    28,    11,    11,    23,    23,
      25,    26,    27,    28,    11,   141,    23,     4,    25,    26,
      17,    18,    19,    20,    21,    22,    17,    18,    19,    20,
      21,    22,    12,    12,    14,     8,    13,    12,    14,     5,
      28,   108,    13,     7,    14,    28,    11,     8,    15,    11,
      28,    25,    15,    11,    14,    11,    28,    11,    13,     6,
      12,    14,    12,    12,    12,   132,   133,    11,     8,    15,
       8,    14,    11,    10,    15,     7,    12,    11,    11,    14,
      10,    12,    51,    12,    10,    85,    14,    12,    15,    12,
      14,   132,    88,   133,     9,    90,    47,    -1,    43,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    30,    31,    28,    32,     0,     5,    48,    49,
      11,     9,    28,    50,    48,     4,    11,    12,     8,    51,
      13,    14,    12,     5,    33,    28,    34,    13,     7,    14,
      24,    28,    52,    53,    54,    11,    28,     8,    54,    55,
      56,    57,    52,    10,    15,     8,    15,    15,    54,    55,
      28,    14,    28,    62,    16,    28,    50,    34,    11,    11,
      11,    12,    11,    23,    25,    26,    27,    44,    54,    57,
      58,    63,    63,    63,    13,    58,    25,    14,    12,    12,
      12,     6,    35,    12,    63,    11,     8,    36,    37,    32,
      15,    36,    14,    62,     8,    10,    12,    17,    18,    19,
      20,    21,    22,    38,    59,    61,    15,    11,    11,    39,
       7,    11,    38,    60,    11,    27,    28,    40,    41,    42,
      43,    44,    46,    47,    54,    11,    38,    14,    12,    44,
      45,    12,    14,    10,    12,    12,    60,    12,    23,    42,
      47,    14,    44,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    32,    33,    34,    34,    35,    36,
      36,    37,    38,    38,    39,    40,    40,    41,    41,    42,
      42,    43,    44,    44,    44,    45,    45,    46,    46,    47,
      47,    47,    48,    48,    49,    50,    50,    51,    51,    52,
      52,    52,    52,    53,    54,    54,    55,    55,    56,    57,
      57,    58,    58,    58,    58,    58,    59,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    61,    62,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     7,     1,    10,     1,     3,    10,     2,
       0,     5,     2,     1,     3,     1,     0,     1,     3,     3,
       1,     1,     1,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     2,     0,     7,     1,     1,     1,     3,     2,
       2,     2,     0,     3,     1,     3,     1,     1,     6,     6,
       6,     1,     1,     1,     1,     3,     4,     1,     3,     3,
       5,     0,     1,     1,     1,     1,     1,     1,     1,     3
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
#line 50 "model_parser.y"
                      {
        ast_root = create_node(NODE_PROGRAM, NULL);
        add_child(ast_root, (yyvsp[-1].node));
        add_child(ast_root, (yyvsp[0].node));
        (yyval.node) = ast_root;
    }
#line 1236 "model_parser.tab.c"
    break;

  case 3: /* class_def: CLASS class_name LPAREN NN_MODULE RPAREN COLON constructor  */
#line 59 "model_parser.y"
                                                               {
        ASTNode* class_node = create_node(NODE_CLASS, (yyvsp[-5].sval));
        add_child(class_node, (yyvsp[0].node));
        (yyval.node) = class_node;
    }
#line 1246 "model_parser.tab.c"
    break;

  case 4: /* class_name: IDENTIFIER  */
#line 67 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1252 "model_parser.tab.c"
    break;

  case 5: /* constructor: DEF INIT LPAREN SELF COMMA param_list RPAREN COLON super_call layers_definition  */
#line 71 "model_parser.y"
                                                                                    {
        ASTNode* constructor_node = create_node(NODE_METHOD, "constructor");
        add_child(constructor_node, (yyvsp[0].node));  // Add layers_definition as a child
        (yyval.node) = constructor_node;
    }
#line 1262 "model_parser.tab.c"
    break;

  case 6: /* param_list: IDENTIFIER  */
#line 79 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1268 "model_parser.tab.c"
    break;

  case 7: /* param_list: param_list COMMA IDENTIFIER  */
#line 80 "model_parser.y"
                                  { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 3);
        sprintf(temp, "%s, %s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        (yyval.sval) = temp;
    }
#line 1279 "model_parser.tab.c"
    break;

  case 9: /* layers_definition: layer_definition_full layers_definition  */
#line 93 "model_parser.y"
                                            {
        ASTNode* layers_node = create_node(NODE_STATEMENT, "layers");
        add_child(layers_node, (yyvsp[-1].node));
        if ((yyvsp[0].node)) {
            add_child(layers_node, (yyvsp[0].node));
        }
        (yyval.node) = layers_node;
    }
#line 1292 "model_parser.tab.c"
    break;

  case 10: /* layers_definition: %empty  */
#line 101 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1298 "model_parser.tab.c"
    break;

  case 11: /* layer_definition_full: SELF DOT layer_name EQUALS layer_definition  */
#line 105 "model_parser.y"
                                                {
        ASTNode* layer_def_node = create_node(NODE_LAYER_DEFINITION, (yyvsp[-2].sval));
        add_child(layer_def_node, (yyvsp[0].node));
        (yyval.node) = layer_def_node;
    }
#line 1308 "model_parser.tab.c"
    break;

  case 12: /* layer_definition: layer_type layer_args  */
#line 113 "model_parser.y"
                          { 
        char* temp = malloc(strlen((yyvsp[-1].sval)) + strlen((yyvsp[0].sval)) + 10);
        sprintf(temp, "%s(%s)", (yyvsp[-1].sval), (yyvsp[0].sval));
        free((yyvsp[-1].sval));
        free((yyvsp[0].sval));
        (yyval.node) = create_node(NODE_LAYER_DEFINITION, temp);
    }
#line 1320 "model_parser.tab.c"
    break;

  case 13: /* layer_definition: sequential_layer  */
#line 120 "model_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1326 "model_parser.tab.c"
    break;

  case 14: /* layer_args: LPAREN nested_layer_params RPAREN  */
#line 124 "model_parser.y"
                                      { (yyval.sval) = (yyvsp[-1].sval); }
#line 1332 "model_parser.tab.c"
    break;

  case 15: /* nested_layer_params: layer_param_list  */
#line 128 "model_parser.y"
                     { (yyval.sval) = (yyvsp[0].sval); }
#line 1338 "model_parser.tab.c"
    break;

  case 16: /* nested_layer_params: %empty  */
#line 129 "model_parser.y"
                  { (yyval.sval) = strdup(""); }
#line 1344 "model_parser.tab.c"
    break;

  case 17: /* layer_param_list: layer_param  */
#line 133 "model_parser.y"
                { (yyval.sval) = (yyvsp[0].sval); }
#line 1350 "model_parser.tab.c"
    break;

  case 18: /* layer_param_list: layer_param_list COMMA layer_param  */
#line 134 "model_parser.y"
                                         { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 3); 
        sprintf(temp, "%s, %s", (yyvsp[-2].sval), (yyvsp[0].sval)); 
        free((yyvsp[-2].sval)); 
        (yyval.sval) = temp; 
    }
#line 1361 "model_parser.tab.c"
    break;

  case 19: /* layer_param: param_name EQUALS value  */
#line 143 "model_parser.y"
                            { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 2); 
        sprintf(temp, "%s=%s", (yyvsp[-2].sval), (yyvsp[0].sval)); 
        free((yyvsp[-2].sval)); 
        free((yyvsp[0].sval)); 
        (yyval.sval) = temp; 
    }
#line 1373 "model_parser.tab.c"
    break;

  case 20: /* layer_param: value  */
#line 150 "model_parser.y"
            { (yyval.sval) = (yyvsp[0].sval); }
#line 1379 "model_parser.tab.c"
    break;

  case 21: /* param_name: IDENTIFIER  */
#line 154 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1385 "model_parser.tab.c"
    break;

  case 22: /* numeric_literal: INTEGER  */
#line 158 "model_parser.y"
            { (yyval.sval) = (yyvsp[0].sval); }
#line 1391 "model_parser.tab.c"
    break;

  case 23: /* numeric_literal: FLOAT  */
#line 159 "model_parser.y"
            { (yyval.sval) = (yyvsp[0].sval); }
#line 1397 "model_parser.tab.c"
    break;

  case 24: /* numeric_literal: MULTIPLY INTEGER  */
#line 160 "model_parser.y"
                       { 
        char* temp = malloc(strlen((yyvsp[0].sval)) + 2);
        sprintf(temp, "-%s", (yyvsp[0].sval));
        free((yyvsp[0].sval));
        (yyval.sval) = temp;
    }
#line 1408 "model_parser.tab.c"
    break;

  case 25: /* arithmetic_expression: numeric_literal  */
#line 169 "model_parser.y"
                    { (yyval.sval) = (yyvsp[0].sval); }
#line 1414 "model_parser.tab.c"
    break;

  case 26: /* arithmetic_expression: arithmetic_expression MULTIPLY numeric_literal  */
#line 170 "model_parser.y"
                                                     { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 2);
        sprintf(temp, "%s*%s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        (yyval.sval) = temp;
    }
#line 1425 "model_parser.tab.c"
    break;

  case 27: /* numeric_value: numeric_literal  */
#line 179 "model_parser.y"
                    { (yyval.sval) = (yyvsp[0].sval); }
#line 1431 "model_parser.tab.c"
    break;

  case 28: /* numeric_value: LPAREN arithmetic_expression RPAREN  */
#line 180 "model_parser.y"
                                          { (yyval.sval) = (yyvsp[-1].sval); }
#line 1437 "model_parser.tab.c"
    break;

  case 29: /* value: numeric_value  */
#line 184 "model_parser.y"
                  { (yyval.sval) = (yyvsp[0].sval); }
#line 1443 "model_parser.tab.c"
    break;

  case 30: /* value: STRING  */
#line 185 "model_parser.y"
             { (yyval.sval) = (yyvsp[0].sval); }
#line 1449 "model_parser.tab.c"
    break;

  case 31: /* value: var  */
#line 186 "model_parser.y"
          { (yyval.sval) = (yyvsp[0].sval); }
#line 1455 "model_parser.tab.c"
    break;

  case 32: /* methods: method_definition methods  */
#line 190 "model_parser.y"
                              {
        ASTNode* methods_node = create_node(NODE_STATEMENT, "methods");
        add_child(methods_node, (yyvsp[-1].node));
        if ((yyvsp[0].node)) {
            add_child(methods_node, (yyvsp[0].node));
        }
        (yyval.node) = methods_node;
    }
#line 1468 "model_parser.tab.c"
    break;

  case 33: /* methods: %empty  */
#line 198 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1474 "model_parser.tab.c"
    break;

  case 34: /* method_definition: DEF method_name LPAREN method_params RPAREN COLON method_body  */
#line 202 "model_parser.y"
                                                                  {
        ASTNode* method_node = create_node(NODE_METHOD, (yyvsp[-5].sval));
        add_child(method_node, (yyvsp[0].node));
        (yyval.node) = method_node;
    }
#line 1484 "model_parser.tab.c"
    break;

  case 35: /* method_name: FORWARD  */
#line 210 "model_parser.y"
            { (yyval.sval) = strdup("forward"); }
#line 1490 "model_parser.tab.c"
    break;

  case 36: /* method_name: IDENTIFIER  */
#line 211 "model_parser.y"
                 { (yyval.sval) = (yyvsp[0].sval); }
#line 1496 "model_parser.tab.c"
    break;

  case 37: /* method_params: SELF  */
#line 215 "model_parser.y"
         { (yyval.sval) = strdup("self"); }
#line 1502 "model_parser.tab.c"
    break;

  case 38: /* method_params: SELF COMMA param_list  */
#line 216 "model_parser.y"
                            { 
        char* temp = malloc(strlen((yyvsp[0].sval)) + 6);
        sprintf(temp, "self, %s", (yyvsp[0].sval));
        free((yyvsp[0].sval));
        (yyval.sval) = temp;
    }
#line 1513 "model_parser.tab.c"
    break;

  case 39: /* method_body: statement method_body  */
#line 225 "model_parser.y"
                          {
        ASTNode* body_node = create_node(NODE_STATEMENT, NULL);
        add_child(body_node, (yyvsp[-1].node));
        if ((yyvsp[0].node)) {
            add_child(body_node, (yyvsp[0].node));
        }
        (yyval.node) = body_node;
    }
#line 1526 "model_parser.tab.c"
    break;

  case 40: /* method_body: RETURN var  */
#line 233 "model_parser.y"
                 { 
        char* return_str = malloc(strlen((yyvsp[0].sval)) + 8);
        sprintf(return_str, "return %s", (yyvsp[0].sval));
        free((yyvsp[0].sval));
        (yyval.node) = create_node(NODE_STATEMENT, return_str);
    }
#line 1537 "model_parser.tab.c"
    break;

  case 41: /* method_body: RETURN expression  */
#line 239 "model_parser.y"
                        { 
        char* return_str = malloc(strlen((yyvsp[0].node)->value) + 8);
        sprintf(return_str, "return %s", (yyvsp[0].node)->value);
        (yyval.node) = create_node(NODE_STATEMENT, return_str);
    }
#line 1547 "model_parser.tab.c"
    break;

  case 42: /* method_body: %empty  */
#line 244 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1553 "model_parser.tab.c"
    break;

  case 43: /* statement: var EQUALS expression  */
#line 248 "model_parser.y"
                          {
        ASTNode* stmt_node = create_node(NODE_STATEMENT, "=");
        ASTNode* var_node = create_node(NODE_VARIABLE, (yyvsp[-2].sval));
        add_child(stmt_node, var_node);
        add_child(stmt_node, (yyvsp[0].node));
        (yyval.node) = stmt_node;
    }
#line 1565 "model_parser.tab.c"
    break;

  case 44: /* var: IDENTIFIER  */
#line 258 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1571 "model_parser.tab.c"
    break;

  case 45: /* var: var DOT IDENTIFIER  */
#line 259 "model_parser.y"
                         { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 2);
        sprintf(temp, "%s.%s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        (yyval.sval) = temp;
    }
#line 1582 "model_parser.tab.c"
    break;

  case 46: /* expression: method_call  */
#line 268 "model_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1588 "model_parser.tab.c"
    break;

  case 47: /* expression: method_operation  */
#line 269 "model_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1594 "model_parser.tab.c"
    break;

  case 48: /* method_call: SELF DOT layer_name LPAREN arguments RPAREN  */
#line 273 "model_parser.y"
                                                { 
        char* temp = malloc(strlen((yyvsp[-3].sval)) + strlen((yyvsp[-1].sval)) + 10);
        sprintf(temp, "self.%s(%s)", (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_METHOD_CALL, temp);
    }
#line 1606 "model_parser.tab.c"
    break;

  case 49: /* method_operation: var DOT method_name LPAREN arguments RPAREN  */
#line 283 "model_parser.y"
                                                { 
        char* temp = malloc(strlen((yyvsp[-5].sval)) + strlen((yyvsp[-3].sval)) + strlen((yyvsp[-1].sval)) + 4);
        sprintf(temp, "%s.%s(%s)", (yyvsp[-5].sval), (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-5].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_OPERATION, temp);
    }
#line 1619 "model_parser.tab.c"
    break;

  case 50: /* method_operation: var DOT RESHAPE LPAREN arguments RPAREN  */
#line 291 "model_parser.y"
                                                            { 
        char* temp = malloc(strlen((yyvsp[-5].sval)) + strlen((yyvsp[-1].sval)) + 10);
        sprintf(temp, "%s.reshape(%s)", (yyvsp[-5].sval), (yyvsp[-1].sval));
        free((yyvsp[-5].sval));
        free((yyvsp[-1].sval));
        (yyval.node) = create_node(NODE_OPERATION, temp);
    }
#line 1631 "model_parser.tab.c"
    break;

  case 51: /* argument: numeric_literal  */
#line 301 "model_parser.y"
                    { (yyval.sval) = (yyvsp[0].sval); }
#line 1637 "model_parser.tab.c"
    break;

  case 52: /* argument: STRING  */
#line 302 "model_parser.y"
             { (yyval.sval) = (yyvsp[0].sval); }
#line 1643 "model_parser.tab.c"
    break;

  case 53: /* argument: var  */
#line 303 "model_parser.y"
          { (yyval.sval) = (yyvsp[0].sval); }
#line 1649 "model_parser.tab.c"
    break;

  case 54: /* argument: method_operation  */
#line 304 "model_parser.y"
                       { (yyval.sval) = (yyvsp[0].node); }
#line 1655 "model_parser.tab.c"
    break;

  case 55: /* argument: LPAREN argument RPAREN  */
#line 305 "model_parser.y"
                             { (yyval.sval) = (yyvsp[-1].sval); }
#line 1661 "model_parser.tab.c"
    break;

  case 56: /* sequential_layer: SEQUENTIAL LPAREN sequential_layer_content RPAREN  */
#line 309 "model_parser.y"
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
#line 1676 "model_parser.tab.c"
    break;

  case 57: /* sequential_layer_content: layer_definition  */
#line 322 "model_parser.y"
                     { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, (yyvsp[0].node));
        (yyval.node) = content_node;
    }
#line 1686 "model_parser.tab.c"
    break;

  case 58: /* sequential_layer_content: layer_definition COMMA sequential_layer_content  */
#line 327 "model_parser.y"
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
#line 1702 "model_parser.tab.c"
    break;

  case 59: /* sequential_layer_content: LPAREN layer_definition RPAREN  */
#line 338 "model_parser.y"
                                     { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, (yyvsp[-1].node));
        (yyval.node) = content_node;
    }
#line 1712 "model_parser.tab.c"
    break;

  case 60: /* sequential_layer_content: LPAREN layer_definition RPAREN COMMA sequential_layer_content  */
#line 343 "model_parser.y"
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
#line 1728 "model_parser.tab.c"
    break;

  case 61: /* sequential_layer_content: %empty  */
#line 354 "model_parser.y"
                  { (yyval.node) = NULL; }
#line 1734 "model_parser.tab.c"
    break;

  case 62: /* layer_type: CONV2D  */
#line 358 "model_parser.y"
           { (yyval.sval) = strdup("nn.Conv2d"); }
#line 1740 "model_parser.tab.c"
    break;

  case 63: /* layer_type: BATCHNORM2D  */
#line 359 "model_parser.y"
                  { (yyval.sval) = strdup("nn.BatchNorm2d"); }
#line 1746 "model_parser.tab.c"
    break;

  case 64: /* layer_type: RELU  */
#line 360 "model_parser.y"
           { (yyval.sval) = strdup("nn.ReLU"); }
#line 1752 "model_parser.tab.c"
    break;

  case 65: /* layer_type: MAXPOOL2D  */
#line 361 "model_parser.y"
                { (yyval.sval) = strdup("nn.MaxPool2d"); }
#line 1758 "model_parser.tab.c"
    break;

  case 66: /* layer_type: LINEAR  */
#line 362 "model_parser.y"
             { (yyval.sval) = strdup("nn.Linear"); }
#line 1764 "model_parser.tab.c"
    break;

  case 67: /* layer_name: IDENTIFIER  */
#line 366 "model_parser.y"
               { (yyval.sval) = (yyvsp[0].sval); }
#line 1770 "model_parser.tab.c"
    break;

  case 68: /* arguments: argument  */
#line 370 "model_parser.y"
             { (yyval.sval) = (yyvsp[0].sval); }
#line 1776 "model_parser.tab.c"
    break;

  case 69: /* arguments: argument COMMA arguments  */
#line 371 "model_parser.y"
                               { 
        char* temp = malloc(strlen((yyvsp[-2].sval)) + strlen((yyvsp[0].sval)) + 3);
        sprintf(temp, "%s, %s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        free((yyvsp[0].sval));
        (yyval.sval) = temp;
    }
#line 1788 "model_parser.tab.c"
    break;


#line 1792 "model_parser.tab.c"

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

#line 380 "model_parser.y"


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
