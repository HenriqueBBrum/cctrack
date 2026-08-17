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
#line 1 "grammar.y"


#include <sys/types.h>
#include <stdlib.h>

#ifndef WIN32
#include <netinet/in.h>
#include <arpa/inet.h>
#else
#include "ndpi_main.h" 
#endif
  
#include <stdio.h>
#include <string.h>

#include "parser.h"

#define QSET(q, h, p, d, a) (q).header = (h), (q).protocol = (p), (q).direction = (d), (q).address = (a)

#define ARTHSET(a, p, o, m) (a).protocol = (p), (a).offset = (o), (a).mask = (m)

static nbpf_qualifiers_t qerr = { NBPF_Q_UNDEF, NBPF_Q_UNDEF, NBPF_Q_UNDEF };

static void yyerror(const char *msg) {
  nbpf_syntax_error("%s", msg);
}


#line 100 "grammar.tab.c"

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

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OUTER = 3,                      /* OUTER  */
  YYSYMBOL_INNER = 4,                      /* INNER  */
  YYSYMBOL_DST = 5,                        /* DST  */
  YYSYMBOL_SRC = 6,                        /* SRC  */
  YYSYMBOL_HOST = 7,                       /* HOST  */
  YYSYMBOL_NET = 8,                        /* NET  */
  YYSYMBOL_NETMASK = 9,                    /* NETMASK  */
  YYSYMBOL_PORT = 10,                      /* PORT  */
  YYSYMBOL_PORTRANGE = 11,                 /* PORTRANGE  */
  YYSYMBOL_PROTO = 12,                     /* PROTO  */
  YYSYMBOL_ARP = 13,                       /* ARP  */
  YYSYMBOL_RARP = 14,                      /* RARP  */
  YYSYMBOL_IP = 15,                        /* IP  */
  YYSYMBOL_SCTP = 16,                      /* SCTP  */
  YYSYMBOL_TCP = 17,                       /* TCP  */
  YYSYMBOL_UDP = 18,                       /* UDP  */
  YYSYMBOL_ICMP = 19,                      /* ICMP  */
  YYSYMBOL_NUM = 20,                       /* NUM  */
  YYSYMBOL_DIR = 21,                       /* DIR  */
  YYSYMBOL_LINK = 22,                      /* LINK  */
  YYSYMBOL_GEQ = 23,                       /* GEQ  */
  YYSYMBOL_LEQ = 24,                       /* LEQ  */
  YYSYMBOL_NEQ = 25,                       /* NEQ  */
  YYSYMBOL_ID = 26,                        /* ID  */
  YYSYMBOL_EID = 27,                       /* EID  */
  YYSYMBOL_HID = 28,                       /* HID  */
  YYSYMBOL_HID6 = 29,                      /* HID6  */
  YYSYMBOL_IPV6 = 30,                      /* IPV6  */
  YYSYMBOL_VLAN = 31,                      /* VLAN  */
  YYSYMBOL_MPLS = 32,                      /* MPLS  */
  YYSYMBOL_GTP = 33,                       /* GTP  */
  YYSYMBOL_L7PROTO = 34,                   /* L7PROTO  */
  YYSYMBOL_DEVICE = 35,                    /* DEVICE  */
  YYSYMBOL_IFACE = 36,                     /* IFACE  */
  YYSYMBOL_QUOTED = 37,                    /* QUOTED  */
  YYSYMBOL_LOCAL = 38,                     /* LOCAL  */
  YYSYMBOL_REMOTE = 39,                    /* REMOTE  */
  YYSYMBOL_OR = 40,                        /* OR  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_42_ = 42,                       /* '!'  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '/'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* '>'  */
  YYSYMBOL_47_ = 47,                       /* '='  */
  YYSYMBOL_48_ = 48,                       /* '<'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_prog = 53,                      /* prog  */
  YYSYMBOL_null = 54,                      /* null  */
  YYSYMBOL_expr = 55,                      /* expr  */
  YYSYMBOL_and = 56,                       /* and  */
  YYSYMBOL_or = 57,                        /* or  */
  YYSYMBOL_id = 58,                        /* id  */
  YYSYMBOL_nid = 59,                       /* nid  */
  YYSYMBOL_not = 60,                       /* not  */
  YYSYMBOL_paren = 61,                     /* paren  */
  YYSYMBOL_pid = 62,                       /* pid  */
  YYSYMBOL_qid = 63,                       /* qid  */
  YYSYMBOL_term = 64,                      /* term  */
  YYSYMBOL_head = 65,                      /* head  */
  YYSYMBOL_rterm = 66,                     /* rterm  */
  YYSYMBOL_hqual = 67,                     /* hqual  */
  YYSYMBOL_pqual = 68,                     /* pqual  */
  YYSYMBOL_dqual = 69,                     /* dqual  */
  YYSYMBOL_aqual = 70,                     /* aqual  */
  YYSYMBOL_pname = 71,                     /* pname  */
  YYSYMBOL_other = 72,                     /* other  */
  YYSYMBOL_relop = 73,                     /* relop  */
  YYSYMBOL_irelop = 74,                    /* irelop  */
  YYSYMBOL_narth = 75,                     /* narth  */
  YYSYMBOL_pnum = 76                       /* pnum  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   288

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
       2,     2,     2,    42,     2,     2,     2,     2,    51,     2,
      45,    43,     2,     2,     2,     2,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      48,    47,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    74,    74,    78,    80,    82,    83,    84,    85,    86,
      88,    90,    92,    93,    94,    96,   101,   102,   103,   104,
     105,   106,   110,   112,   114,   116,   117,   118,   120,   121,
     123,   124,   126,   127,   128,   129,   130,   131,   132,   133,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   153,   154,   157,   158,
     161,   162,   163,   164,   165,   166,   169,   170,   171,   172,
     175,   176,   177,   178,   179,   180,   181,   183,   184,   185,
     186,   187,   189,   190,   191,   193,   194,   195,   197,   198,
     200,   201
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
  "\"end of file\"", "error", "\"invalid token\"", "OUTER", "INNER",
  "DST", "SRC", "HOST", "NET", "NETMASK", "PORT", "PORTRANGE", "PROTO",
  "ARP", "RARP", "IP", "SCTP", "TCP", "UDP", "ICMP", "NUM", "DIR", "LINK",
  "GEQ", "LEQ", "NEQ", "ID", "EID", "HID", "HID6", "IPV6", "VLAN", "MPLS",
  "GTP", "L7PROTO", "DEVICE", "IFACE", "QUOTED", "LOCAL", "REMOTE", "OR",
  "AND", "'!'", "')'", "'/'", "'('", "'>'", "'='", "'<'", "'['", "']'",
  "'&'", "$accept", "prog", "null", "expr", "and", "or", "id", "nid",
  "not", "paren", "pid", "qid", "term", "head", "rterm", "hqual", "pqual",
  "dqual", "aqual", "pname", "other", "relop", "irelop", "narth", "pnum", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-51)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -60,    11,   102,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     6,   -60,    -3,    -3,   -60,    -6,    -1,    14,
     -60,   -60,     9,   204,   204,   -60,   224,   -60,   242,   268,
      15,   -60,    64,   -60,   -60,   -60,    -3,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   136,   136,   -60,
      54,   -60,   -60,     4,   -28,   -60,   -60,   -60,   -60,    51,
      51,   -60,   276,   -60,    34,    41,   -60,   -60,   -60,   -60,
     -60,    55,   -60,    -3,   -60,   -60,   -60,   -60,   -60,   -60,
      -3,    -3,   -25,     6,   -60,   136,   136,   -60,   -60,   -60,
     -60,     7,    17,    18,   -60,   -60,   -16,     9,   -25,   -60,
      55,   -60,    45,    48,    56,    67,   -60,    19,   -60,   -60,
     -60,   170,   -60,   -60,   -60,   -60,    51,    51,   -60,   -60,
     -60,   -60,   -60,    25,   -60,   -60,    -3,   -60
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,    59,     1,    56,    57,    71,    72,    73,    74,
      75,    70,     0,    76,    78,    80,    81,     0,     0,     0,
      23,    24,     2,    59,    59,     5,     0,    30,    59,     0,
      58,    53,     0,    55,    54,    90,     0,    77,    79,    43,
      44,    45,    46,    47,    48,    11,    10,    59,    59,    31,
       0,    15,    21,    18,    20,    41,    42,    40,    12,     0,
       0,    13,     0,    58,    61,    60,    66,    67,    68,    69,
      39,    35,    37,     0,    83,    85,    87,    82,    84,    86,
       0,     0,     0,    15,     7,    59,    59,     6,     9,     8,
      49,     0,     0,     0,    22,    25,    29,     0,    28,    38,
      34,    36,     0,     0,     0,     0,    33,     0,    51,    52,
      91,    59,    17,    16,    19,    14,     0,     0,    32,    63,
      65,    62,    64,    88,    26,    27,     0,    89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -60,    83,   -11,    -5,   -17,   -50,     5,    -2,
     -60,   -60,   -15,   -60,   -60,   -60,    73,    42,   -59,    75,
     -60,   -60,   -60,   -60,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    50,    47,    48,    94,    58,    59,    36,
      96,    97,    25,    26,    27,    28,    29,    71,    72,    30,
      31,    80,    81,    32,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      24,    37,    38,   101,    40,    42,    44,    23,    49,    57,
      95,     3,   106,    91,    35,   -50,    93,    35,   110,    35,
      39,    24,    24,    82,    60,    41,    33,   115,    23,    23,
      84,    88,    87,    89,    35,   112,    95,   113,   114,    21,
      43,   118,    21,    34,    21,    86,    86,    98,    92,    45,
      46,   119,    85,    85,   120,   -50,   -50,    60,   -50,    21,
     107,   121,    66,    67,    73,    68,    69,   108,   109,   123,
      49,    35,   122,    98,   102,   103,   126,    51,    52,    53,
      54,   104,   105,    86,   111,    22,   116,    74,    75,    76,
      85,    85,   117,    20,    45,    46,    21,    90,    82,   124,
     125,    62,    -3,    63,   100,     4,     5,     0,     0,   111,
      77,    78,    79,   127,    60,    60,    23,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     0,     0,    12,     0,
       0,     0,    13,    14,    15,    16,    17,    18,    19,     4,
       5,     0,     0,     0,    20,     0,     0,    21,     0,     0,
       0,     6,     7,     8,     9,    10,    35,     0,    11,     0,
       0,     0,    83,    52,    53,    54,    13,    14,    15,    16,
      17,    18,    19,     4,     5,     0,     0,     0,    20,     0,
       0,    21,     0,     0,     0,     6,     7,     8,     9,    10,
      35,     0,    11,     0,     0,     0,    12,     0,     0,     0,
      13,    14,    15,    16,    17,    18,    19,     4,     5,     0,
       0,     0,    20,     0,     0,    21,     0,     0,     0,     6,
       7,     8,     9,    10,     0,     0,    11,     0,     0,     0,
      12,     0,     0,     0,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,    35,     0,    20,     0,     0,    21,
      51,    52,    53,    54,     0,     0,     0,     6,     7,     8,
       9,    10,    55,    56,    11,     0,    20,     0,     0,    21,
       0,     0,    13,    64,    65,    66,    67,     0,    68,    69,
      70,    64,    65,    66,    67,     0,    68,    69,    99
};

static const yytype_int8 yycheck[] =
{
       2,    14,    15,    62,    17,    18,    19,     2,    23,    26,
      60,     0,    71,     9,    20,     0,    44,    20,    43,    20,
      26,    23,    24,    36,    26,    26,    20,    43,    23,    24,
      47,    48,    47,    48,    20,    28,    86,    20,    20,    45,
      26,   100,    45,    37,    45,    47,    48,    60,    44,    40,
      41,     6,    47,    48,     6,    40,    41,    59,    43,    45,
      73,     5,     7,     8,    49,    10,    11,    80,    81,    50,
      85,    20,     5,    86,    40,    41,    51,    26,    27,    28,
      29,    40,    41,    85,    86,     2,    97,    23,    24,    25,
      85,    86,    97,    42,    40,    41,    45,    43,   111,   116,
     117,    28,     0,    28,    62,     3,     4,    -1,    -1,   111,
      46,    47,    48,   126,   116,   117,   111,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,     3,
       4,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     3,     4,    -1,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,     3,     4,    -1,
      -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    20,    -1,    42,    -1,    -1,    45,
      26,    27,    28,    29,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    38,    39,    22,    -1,    42,    -1,    -1,    45,
      -1,    -1,    30,     5,     6,     7,     8,    -1,    10,    11,
      12,     5,     6,     7,     8,    -1,    10,    11,    12
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,    54,     0,     3,     4,    15,    16,    17,    18,
      19,    22,    26,    30,    31,    32,    33,    34,    35,    36,
      42,    45,    55,    60,    61,    64,    65,    66,    67,    68,
      71,    72,    75,    20,    37,    20,    61,    76,    76,    26,
      76,    26,    76,    26,    76,    40,    41,    56,    57,    64,
      55,    26,    27,    28,    29,    38,    39,    58,    59,    60,
      61,    76,    68,    71,     5,     6,     7,     8,    10,    11,
      12,    69,    70,    49,    23,    24,    25,    46,    47,    48,
      73,    74,    76,    26,    58,    60,    61,    64,    58,    64,
      43,     9,    44,    44,    58,    59,    62,    63,    76,    12,
      69,    70,    40,    41,    40,    41,    70,    76,    76,    76,
      43,    61,    28,    20,    20,    43,    56,    57,    70,     6,
       6,     5,     5,    50,    58,    58,    51,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    55,    55,    55,    55,
      56,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    61,    62,    62,    62,    63,    63,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    73,    73,    73,    74,    74,    74,    75,    75,
      76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     1,     3,     3,     1,     3,
       1,     1,     2,     1,     1,     1,     3,     3,     1,     1,
       1,     2,     4,     3,     3,     2,     3,     2,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       1,     3,     3,     1,     2,     2,     1,     1,     1,     0,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       1,     3
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
  case 2: /* prog: null expr  */
#line 75 "grammar.y"
{
	nbpf_set_tree_root((yyvsp[0].block).n);
}
#line 1285 "grammar.tab.c"
    break;

  case 4: /* null: %empty  */
#line 80 "grammar.y"
                                { (yyval.block).q = qerr; }
#line 1291 "grammar.tab.c"
    break;

  case 6: /* expr: expr and term  */
#line 83 "grammar.y"
                                { (yyval.block).n = nbpf_create_and((yyvsp[-2].block).n, (yyvsp[0].block).n); }
#line 1297 "grammar.tab.c"
    break;

  case 7: /* expr: expr and id  */
#line 84 "grammar.y"
                                { (yyval.block).n = nbpf_create_and((yyvsp[-2].block).n, (yyvsp[0].block).n); }
#line 1303 "grammar.tab.c"
    break;

  case 8: /* expr: expr or term  */
#line 85 "grammar.y"
                                { (yyval.block).n = nbpf_create_or((yyvsp[-2].block).n, (yyvsp[0].block).n);  }
#line 1309 "grammar.tab.c"
    break;

  case 9: /* expr: expr or id  */
#line 86 "grammar.y"
                                { (yyval.block).n = nbpf_create_or((yyvsp[-2].block).n, (yyvsp[0].block).n);  }
#line 1315 "grammar.tab.c"
    break;

  case 10: /* and: AND  */
#line 88 "grammar.y"
                                { (yyval.block) = (yyvsp[-1].block); }
#line 1321 "grammar.tab.c"
    break;

  case 11: /* or: OR  */
#line 90 "grammar.y"
                                { (yyval.block) = (yyvsp[-1].block); }
#line 1327 "grammar.tab.c"
    break;

  case 13: /* id: pnum  */
#line 93 "grammar.y"
                                { (yyval.block).n = nbpf_create_n_node((u_int32_t)(yyvsp[0].i), (yyval.block).q = (yyvsp[-1].block).q); }
#line 1333 "grammar.tab.c"
    break;

  case 14: /* id: paren pid ')'  */
#line 94 "grammar.y"
                                { (yyval.block) = (yyvsp[-1].block); }
#line 1339 "grammar.tab.c"
    break;

  case 15: /* nid: ID  */
#line 96 "grammar.y"
                                {
				  if((yyvsp[-1].block).q.address != NBPF_Q_PORTRANGE) /* Note: ID used for numeric portrange only */
				    nbpf_syntax_error("'portrange' modifier expected with number ranges");
				  (yyval.block).n = nbpf_create_portrange_node((yyvsp[0].s), (yyval.block).q = (yyvsp[-1].block).q); 
				}
#line 1349 "grammar.tab.c"
    break;

  case 16: /* nid: HID '/' NUM  */
#line 101 "grammar.y"
                                { (yyval.block).n = nbpf_create_net_node((yyvsp[-2].s), NULL, (yyvsp[0].i), (yyval.block).q = (yyvsp[-3].block).q); }
#line 1355 "grammar.tab.c"
    break;

  case 17: /* nid: HID NETMASK HID  */
#line 102 "grammar.y"
                                { (yyval.block).n = nbpf_create_net_node((yyvsp[-2].s),   (yyvsp[0].s),  0, (yyval.block).q = (yyvsp[-3].block).q); }
#line 1361 "grammar.tab.c"
    break;

  case 18: /* nid: HID  */
#line 103 "grammar.y"
                                { (yyval.block).n = nbpf_create_host_node((yyvsp[0].s), (yyvsp[-1].block).q); }
#line 1367 "grammar.tab.c"
    break;

  case 19: /* nid: HID6 '/' NUM  */
#line 104 "grammar.y"
                                { (yyval.block).n = nbpf_create_net6_node((yyvsp[-2].s),  (yyvsp[0].i), (yyval.block).q = (yyvsp[-3].block).q); }
#line 1373 "grammar.tab.c"
    break;

  case 20: /* nid: HID6  */
#line 105 "grammar.y"
                                { (yyval.block).n = nbpf_create_net6_node((yyvsp[0].s), 128, (yyval.block).q = (yyvsp[-1].block).q); }
#line 1379 "grammar.tab.c"
    break;

  case 21: /* nid: EID  */
#line 106 "grammar.y"
                                { 
				  (yyval.block).n = nbpf_create_eth_node((yyvsp[0].e), (yyval.block).q = (yyvsp[-1].block).q /* TODO check this */);
				  free((yyvsp[0].e)); /* $1 was allocated by ether_aton() */
				}
#line 1388 "grammar.tab.c"
    break;

  case 22: /* nid: not id  */
#line 110 "grammar.y"
                                { nbpf_create_not((yyvsp[0].block).n); (yyval.block) = (yyvsp[0].block); }
#line 1394 "grammar.tab.c"
    break;

  case 23: /* not: '!'  */
#line 112 "grammar.y"
                                { (yyval.block) = (yyvsp[-1].block); }
#line 1400 "grammar.tab.c"
    break;

  case 24: /* paren: '('  */
#line 114 "grammar.y"
                                { (yyval.block) = (yyvsp[-1].block); }
#line 1406 "grammar.tab.c"
    break;

  case 26: /* pid: qid and id  */
#line 117 "grammar.y"
                                { (yyval.block).n = nbpf_create_and((yyvsp[-2].block).n, (yyvsp[0].block).n); }
#line 1412 "grammar.tab.c"
    break;

  case 27: /* pid: qid or id  */
#line 118 "grammar.y"
                                { (yyval.block).n = nbpf_create_or((yyvsp[-2].block).n, (yyvsp[0].block).n);  }
#line 1418 "grammar.tab.c"
    break;

  case 28: /* qid: pnum  */
#line 120 "grammar.y"
                                { (yyval.block).n = nbpf_create_n_node((u_int32_t)(yyvsp[0].i), (yyval.block).q = (yyvsp[-1].block).q); }
#line 1424 "grammar.tab.c"
    break;

  case 31: /* term: not term  */
#line 124 "grammar.y"
                                { nbpf_create_not((yyvsp[0].block).n); (yyval.block) = (yyvsp[0].block); }
#line 1430 "grammar.tab.c"
    break;

  case 32: /* head: hqual pqual dqual aqual  */
#line 126 "grammar.y"
                                        { QSET((yyval.block).q, (yyvsp[-3].i),        (yyvsp[-2].i), (yyvsp[-1].i),        (yyvsp[0].i)); }
#line 1436 "grammar.tab.c"
    break;

  case 33: /* head: pqual dqual aqual  */
#line 127 "grammar.y"
                                        { QSET((yyval.block).q, NBPF_Q_DEFAULT, (yyvsp[-2].i), (yyvsp[-1].i),        (yyvsp[0].i)); }
#line 1442 "grammar.tab.c"
    break;

  case 34: /* head: hqual pqual dqual  */
#line 128 "grammar.y"
                                        { QSET((yyval.block).q, (yyvsp[-2].i),        (yyvsp[-1].i), (yyvsp[0].i),        NBPF_Q_DEFAULT); }
#line 1448 "grammar.tab.c"
    break;

  case 35: /* head: pqual dqual  */
#line 129 "grammar.y"
                                        { QSET((yyval.block).q, NBPF_Q_DEFAULT, (yyvsp[-1].i), (yyvsp[0].i),        NBPF_Q_DEFAULT); }
#line 1454 "grammar.tab.c"
    break;

  case 36: /* head: hqual pqual aqual  */
#line 130 "grammar.y"
                                        { QSET((yyval.block).q, (yyvsp[-2].i),        (yyvsp[-1].i), NBPF_Q_DEFAULT, (yyvsp[0].i)); }
#line 1460 "grammar.tab.c"
    break;

  case 37: /* head: pqual aqual  */
#line 131 "grammar.y"
                                        { QSET((yyval.block).q, NBPF_Q_DEFAULT, (yyvsp[-1].i), NBPF_Q_DEFAULT, (yyvsp[0].i)); }
#line 1466 "grammar.tab.c"
    break;

  case 38: /* head: hqual pqual PROTO  */
#line 132 "grammar.y"
                                        { QSET((yyval.block).q, (yyvsp[-2].i),        (yyvsp[-1].i), NBPF_Q_DEFAULT, NBPF_Q_PROTO); }
#line 1472 "grammar.tab.c"
    break;

  case 39: /* head: pqual PROTO  */
#line 133 "grammar.y"
                                        { QSET((yyval.block).q, NBPF_Q_DEFAULT, (yyvsp[-1].i), NBPF_Q_DEFAULT, NBPF_Q_PROTO); }
#line 1478 "grammar.tab.c"
    break;

  case 40: /* rterm: head id  */
#line 135 "grammar.y"
                                { (yyval.block).n = (yyvsp[0].block).n; (yyval.block).q = (yyvsp[-1].block).q; }
#line 1484 "grammar.tab.c"
    break;

  case 41: /* rterm: head LOCAL  */
#line 136 "grammar.y"
                                { (yyval.block).n = nbpf_create_locality_node(NBPF_Q_LOCAL, (yyvsp[-1].block).q); }
#line 1490 "grammar.tab.c"
    break;

  case 42: /* rterm: head REMOTE  */
#line 137 "grammar.y"
                                { (yyval.block).n = nbpf_create_locality_node(NBPF_Q_REMOTE, (yyvsp[-1].block).q); }
#line 1496 "grammar.tab.c"
    break;

  case 43: /* rterm: L7PROTO ID  */
#line 138 "grammar.y"
                                { (yyval.block).n = nbpf_create_l7_node(0, (char *)(yyvsp[0].s)); }
#line 1502 "grammar.tab.c"
    break;

  case 44: /* rterm: L7PROTO pnum  */
#line 139 "grammar.y"
                                { (yyval.block).n = nbpf_create_l7_node((yyvsp[0].i), NULL); }
#line 1508 "grammar.tab.c"
    break;

  case 45: /* rterm: DEVICE ID  */
#line 140 "grammar.y"
                                { (yyval.block).n = nbpf_create_device_node(0, (char *)(yyvsp[0].s)); }
#line 1514 "grammar.tab.c"
    break;

  case 46: /* rterm: DEVICE pnum  */
#line 141 "grammar.y"
                                { (yyval.block).n = nbpf_create_device_node((yyvsp[0].i), NULL); }
#line 1520 "grammar.tab.c"
    break;

  case 47: /* rterm: IFACE ID  */
#line 142 "grammar.y"
                                { (yyval.block).n = nbpf_create_interface_node(0, (char *)(yyvsp[0].s)); }
#line 1526 "grammar.tab.c"
    break;

  case 48: /* rterm: IFACE pnum  */
#line 143 "grammar.y"
                                { (yyval.block).n = nbpf_create_interface_node((yyvsp[0].i), NULL); }
#line 1532 "grammar.tab.c"
    break;

  case 49: /* rterm: paren expr ')'  */
#line 144 "grammar.y"
                                { (yyval.block).n = (yyvsp[-1].block).n; (yyval.block).q = (yyvsp[-2].block).q; /* TODO check this */ }
#line 1538 "grammar.tab.c"
    break;

  case 50: /* rterm: pname  */
#line 145 "grammar.y"
                                { (yyval.block).n = nbpf_create_protocol_node((yyvsp[0].i)); (yyval.block).q = qerr; }
#line 1544 "grammar.tab.c"
    break;

  case 51: /* rterm: narth relop pnum  */
#line 146 "grammar.y"
                                { (yyval.block).n = nbpf_create_relation_node((yyvsp[-1].i), (yyvsp[-2].a), (yyvsp[0].i)); (yyval.block).q = qerr; }
#line 1550 "grammar.tab.c"
    break;

  case 52: /* rterm: narth irelop pnum  */
#line 147 "grammar.y"
                                { (yyval.block).n = nbpf_create_relation_node((yyvsp[-1].i), (yyvsp[-2].a), (yyvsp[0].i)); (yyval.block).q = qerr; }
#line 1556 "grammar.tab.c"
    break;

  case 53: /* rterm: other  */
#line 148 "grammar.y"
                                { (yyval.block).n = (yyvsp[0].block).n; (yyval.block).q = qerr; }
#line 1562 "grammar.tab.c"
    break;

  case 54: /* rterm: ID QUOTED  */
#line 149 "grammar.y"
                                { (yyval.block).n = nbpf_create_custom_node((char *)(yyvsp[-1].s), (char *)(yyvsp[0].s)); }
#line 1568 "grammar.tab.c"
    break;

  case 55: /* rterm: ID NUM  */
#line 150 "grammar.y"
                                { (yyval.block).n = nbpf_create_custom_node_int((char *)(yyvsp[-1].s), (yyvsp[0].i)); }
#line 1574 "grammar.tab.c"
    break;

  case 56: /* hqual: OUTER  */
#line 153 "grammar.y"
                                { (yyval.i) = NBPF_Q_OUTER; }
#line 1580 "grammar.tab.c"
    break;

  case 57: /* hqual: INNER  */
#line 154 "grammar.y"
                                { (yyval.i) = NBPF_Q_INNER; }
#line 1586 "grammar.tab.c"
    break;

  case 59: /* pqual: %empty  */
#line 158 "grammar.y"
                                { (yyval.i) = NBPF_Q_DEFAULT; }
#line 1592 "grammar.tab.c"
    break;

  case 60: /* dqual: SRC  */
#line 161 "grammar.y"
                                { (yyval.i) = NBPF_Q_SRC; }
#line 1598 "grammar.tab.c"
    break;

  case 61: /* dqual: DST  */
#line 162 "grammar.y"
                                { (yyval.i) = NBPF_Q_DST; }
#line 1604 "grammar.tab.c"
    break;

  case 62: /* dqual: SRC OR DST  */
#line 163 "grammar.y"
                                { (yyval.i) = NBPF_Q_OR; }
#line 1610 "grammar.tab.c"
    break;

  case 63: /* dqual: DST OR SRC  */
#line 164 "grammar.y"
                                { (yyval.i) = NBPF_Q_OR; }
#line 1616 "grammar.tab.c"
    break;

  case 64: /* dqual: SRC AND DST  */
#line 165 "grammar.y"
                                { (yyval.i) = NBPF_Q_AND; }
#line 1622 "grammar.tab.c"
    break;

  case 65: /* dqual: DST AND SRC  */
#line 166 "grammar.y"
                                { (yyval.i) = NBPF_Q_AND; }
#line 1628 "grammar.tab.c"
    break;

  case 66: /* aqual: HOST  */
#line 169 "grammar.y"
                                { (yyval.i) = NBPF_Q_HOST; }
#line 1634 "grammar.tab.c"
    break;

  case 67: /* aqual: NET  */
#line 170 "grammar.y"
                                { (yyval.i) = NBPF_Q_NET; }
#line 1640 "grammar.tab.c"
    break;

  case 68: /* aqual: PORT  */
#line 171 "grammar.y"
                                { (yyval.i) = NBPF_Q_PORT; }
#line 1646 "grammar.tab.c"
    break;

  case 69: /* aqual: PORTRANGE  */
#line 172 "grammar.y"
                                { (yyval.i) = NBPF_Q_PORTRANGE; }
#line 1652 "grammar.tab.c"
    break;

  case 70: /* pname: LINK  */
#line 175 "grammar.y"
                                { (yyval.i) = NBPF_Q_LINK; }
#line 1658 "grammar.tab.c"
    break;

  case 71: /* pname: IP  */
#line 176 "grammar.y"
                                { (yyval.i) = NBPF_Q_IP; }
#line 1664 "grammar.tab.c"
    break;

  case 72: /* pname: SCTP  */
#line 177 "grammar.y"
                                { (yyval.i) = NBPF_Q_SCTP; }
#line 1670 "grammar.tab.c"
    break;

  case 73: /* pname: TCP  */
#line 178 "grammar.y"
                                { (yyval.i) = NBPF_Q_TCP; }
#line 1676 "grammar.tab.c"
    break;

  case 74: /* pname: UDP  */
#line 179 "grammar.y"
                                { (yyval.i) = NBPF_Q_UDP; }
#line 1682 "grammar.tab.c"
    break;

  case 75: /* pname: ICMP  */
#line 180 "grammar.y"
                                { (yyval.i) = NBPF_Q_ICMP; }
#line 1688 "grammar.tab.c"
    break;

  case 76: /* pname: IPV6  */
#line 181 "grammar.y"
                                { (yyval.i) = NBPF_Q_IPV6; }
#line 1694 "grammar.tab.c"
    break;

  case 77: /* other: VLAN pnum  */
#line 183 "grammar.y"
                                { (yyval.block).n = nbpf_create_vlan_node((yyvsp[0].i)); }
#line 1700 "grammar.tab.c"
    break;

  case 78: /* other: VLAN  */
#line 184 "grammar.y"
                                { (yyval.block).n = nbpf_create_vlan_node(-1); }
#line 1706 "grammar.tab.c"
    break;

  case 79: /* other: MPLS pnum  */
#line 185 "grammar.y"
                                { (yyval.block).n = nbpf_create_mpls_node((yyvsp[0].i)); }
#line 1712 "grammar.tab.c"
    break;

  case 80: /* other: MPLS  */
#line 186 "grammar.y"
                                { (yyval.block).n = nbpf_create_mpls_node(-1); }
#line 1718 "grammar.tab.c"
    break;

  case 81: /* other: GTP  */
#line 187 "grammar.y"
                                { (yyval.block).n = nbpf_create_gtp_node(); }
#line 1724 "grammar.tab.c"
    break;

  case 82: /* relop: '>'  */
#line 189 "grammar.y"
                                { (yyval.i) = NBPF_R_GT; }
#line 1730 "grammar.tab.c"
    break;

  case 83: /* relop: GEQ  */
#line 190 "grammar.y"
                                { (yyval.i) = NBPF_R_GE; }
#line 1736 "grammar.tab.c"
    break;

  case 84: /* relop: '='  */
#line 191 "grammar.y"
                                { (yyval.i) = NBPF_R_EQ; }
#line 1742 "grammar.tab.c"
    break;

  case 85: /* irelop: LEQ  */
#line 193 "grammar.y"
                                { (yyval.i) = NBPF_R_LE; }
#line 1748 "grammar.tab.c"
    break;

  case 86: /* irelop: '<'  */
#line 194 "grammar.y"
                                { (yyval.i) = NBPF_R_LT; }
#line 1754 "grammar.tab.c"
    break;

  case 87: /* irelop: NEQ  */
#line 195 "grammar.y"
                                { (yyval.i) = NBPF_R_NE; }
#line 1760 "grammar.tab.c"
    break;

  case 88: /* narth: pname '[' pnum ']'  */
#line 197 "grammar.y"
                                        { ARTHSET((yyval.a), (yyvsp[-3].i), (yyvsp[-1].i), 0xFF); }
#line 1766 "grammar.tab.c"
    break;

  case 89: /* narth: pname '[' pnum ']' '&' pnum  */
#line 198 "grammar.y"
                                        { ARTHSET((yyval.a), (yyvsp[-5].i), (yyvsp[-3].i), (yyvsp[0].i)); }
#line 1772 "grammar.tab.c"
    break;

  case 91: /* pnum: paren pnum ')'  */
#line 201 "grammar.y"
                                { (yyval.i) = (yyvsp[-1].i); }
#line 1778 "grammar.tab.c"
    break;


#line 1782 "grammar.tab.c"

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

#line 203 "grammar.y"


