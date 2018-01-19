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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_A = 258,
     T_NS = 259,
     T_MX = 260,
     T_TXT = 261,
     T_CNAME = 262,
     T_AAAA = 263,
     T_PTR = 264,
     T_NXT = 265,
     T_KEY = 266,
     T_SOA = 267,
     T_SIG = 268,
     T_SRV = 269,
     T_CERT = 270,
     T_LOC = 271,
     T_MD = 272,
     T_MF = 273,
     T_MB = 274,
     T_MG = 275,
     T_MR = 276,
     T_NULL = 277,
     T_WKS = 278,
     T_HINFO = 279,
     T_MINFO = 280,
     T_RP = 281,
     T_AFSDB = 282,
     T_X25 = 283,
     T_ISDN = 284,
     T_RT = 285,
     T_NSAP = 286,
     T_NSAP_PTR = 287,
     T_PX = 288,
     T_GPOS = 289,
     T_EID = 290,
     T_NIMLOC = 291,
     T_ATMA = 292,
     T_NAPTR = 293,
     T_KX = 294,
     T_A6 = 295,
     T_DNAME = 296,
     T_SINK = 297,
     T_OPT = 298,
     T_APL = 299,
     T_UINFO = 300,
     T_UID = 301,
     T_GID = 302,
     T_UNSPEC = 303,
     T_TKEY = 304,
     T_TSIG = 305,
     T_IXFR = 306,
     T_AXFR = 307,
     T_MAILB = 308,
     T_MAILA = 309,
     T_DS = 310,
     T_DLV = 311,
     T_SSHFP = 312,
     T_RRSIG = 313,
     T_NSEC = 314,
     T_DNSKEY = 315,
     T_SPF = 316,
     T_NSEC3 = 317,
     T_IPSECKEY = 318,
     T_DHCID = 319,
     T_NSEC3PARAM = 320,
     T_TLSA = 321,
     T_URI = 322,
     T_NID = 323,
     T_L32 = 324,
     T_L64 = 325,
     T_LP = 326,
     T_EUI48 = 327,
     T_EUI64 = 328,
     T_CAA = 329,
     T_CDS = 330,
     T_CDNSKEY = 331,
     T_OPENPGPKEY = 332,
     T_CSYNC = 333,
     T_AVC = 334,
     T_LB = 335,
     DOLLAR_TTL = 336,
     DOLLAR_ORIGIN = 337,
     NL = 338,
     SP = 339,
     STR = 340,
     PREV = 341,
     BITLAB = 342,
     T_TTL = 343,
     T_RRCLASS = 344,
     URR = 345,
     T_UTYPE = 346
   };
#endif
/* Tokens.  */
#define T_A 258
#define T_NS 259
#define T_MX 260
#define T_TXT 261
#define T_CNAME 262
#define T_AAAA 263
#define T_PTR 264
#define T_NXT 265
#define T_KEY 266
#define T_SOA 267
#define T_SIG 268
#define T_SRV 269
#define T_CERT 270
#define T_LOC 271
#define T_MD 272
#define T_MF 273
#define T_MB 274
#define T_MG 275
#define T_MR 276
#define T_NULL 277
#define T_WKS 278
#define T_HINFO 279
#define T_MINFO 280
#define T_RP 281
#define T_AFSDB 282
#define T_X25 283
#define T_ISDN 284
#define T_RT 285
#define T_NSAP 286
#define T_NSAP_PTR 287
#define T_PX 288
#define T_GPOS 289
#define T_EID 290
#define T_NIMLOC 291
#define T_ATMA 292
#define T_NAPTR 293
#define T_KX 294
#define T_A6 295
#define T_DNAME 296
#define T_SINK 297
#define T_OPT 298
#define T_APL 299
#define T_UINFO 300
#define T_UID 301
#define T_GID 302
#define T_UNSPEC 303
#define T_TKEY 304
#define T_TSIG 305
#define T_IXFR 306
#define T_AXFR 307
#define T_MAILB 308
#define T_MAILA 309
#define T_DS 310
#define T_DLV 311
#define T_SSHFP 312
#define T_RRSIG 313
#define T_NSEC 314
#define T_DNSKEY 315
#define T_SPF 316
#define T_NSEC3 317
#define T_IPSECKEY 318
#define T_DHCID 319
#define T_NSEC3PARAM 320
#define T_TLSA 321
#define T_URI 322
#define T_NID 323
#define T_L32 324
#define T_L64 325
#define T_LP 326
#define T_EUI48 327
#define T_EUI64 328
#define T_CAA 329
#define T_CDS 330
#define T_CDNSKEY 331
#define T_OPENPGPKEY 332
#define T_CSYNC 333
#define T_AVC 334
#define T_LB 335
#define DOLLAR_TTL 336
#define DOLLAR_ORIGIN 337
#define NL 338
#define SP 339
#define STR 340
#define PREV 341
#define BITLAB 342
#define T_TTL 343
#define T_RRCLASS 344
#define URR 345
#define T_UTYPE 346




/* Copy the first part of user declarations.  */
#line 1 "./zparser.y"

/*
 * zyparser.y -- yacc grammar for (DNS) zone files
 *
 * Copyright (c) 2001-2006, NLnet Labs. All rights reserved.
 *
 * See LICENSE for the license.
 *
 */

#include "config.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#include "dname.h"
#include "namedb.h"
#include "zonec.h"

/* these need to be global, otherwise they cannot be used inside yacc */
zparser_type *parser;

#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
int yywrap(void);

/* this hold the nxt bits */
static uint8_t nxtbits[16];
static int dlv_warn = 1;

/* 256 windows of 256 bits (32 bytes) */
/* still need to reset the bastard somewhere */
static uint8_t nsecbits[NSEC_WINDOW_COUNT][NSEC_WINDOW_BITS_SIZE];

/* hold the highest rcode seen in a NSEC rdata , BUG #106 */
uint16_t nsec_highest_rcode;

void yyerror(const char *message);

#ifdef NSEC3
/* parse nsec3 parameters and add the (first) rdata elements */
static void
nsec3_add_params(const char* hash_algo_str, const char* flag_str,
	const char* iter_str, const char* salt_str, int salt_len);
#endif /* NSEC3 */



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
#line 50 "./zparser.y"
{
	domain_type	 *domain;
	const dname_type *dname;
	struct lex_data	  data;
	uint32_t	  ttl;
	uint16_t	  klass;
	uint16_t	  type;
	uint16_t	 *unknown;
}
/* Line 193 of yacc.c.  */
#line 338 "zparser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 351 "zparser.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   984

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  584

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    92,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    93,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    17,    19,
      21,    24,    26,    29,    31,    34,    39,    44,    49,    53,
      56,    58,    59,    62,    65,    70,    75,    77,    79,    81,
      83,    86,    88,    90,    92,    96,    98,   100,   102,   105,
     107,   109,   113,   115,   119,   121,   123,   127,   131,   133,
     137,   140,   142,   145,   147,   150,   152,   156,   158,   162,
     164,   166,   169,   173,   177,   181,   185,   189,   193,   197,
     201,   205,   209,   213,   217,   221,   225,   229,   233,   237,
     241,   245,   249,   253,   257,   261,   265,   269,   273,   277,
     281,   285,   289,   293,   297,   301,   305,   309,   313,   317,
     321,   325,   329,   333,   337,   341,   345,   349,   353,   357,
     361,   365,   369,   373,   377,   381,   385,   389,   393,   397,
     401,   405,   409,   413,   417,   421,   425,   429,   433,   437,
     441,   445,   449,   453,   457,   461,   464,   468,   472,   476,
     480,   484,   488,   492,   496,   500,   504,   508,   512,   516,
     520,   524,   528,   532,   536,   540,   544,   548,   552,   556,
     560,   564,   568,   572,   576,   580,   584,   588,   592,   596,
     600,   604,   608,   612,   616,   620,   624,   628,   632,   636,
     640,   644,   648,   652,   656,   659,   662,   677,   684,   689,
     694,   699,   702,   707,   712,   715,   718,   723,   728,   731,
     738,   741,   744,   749,   758,   771,   776,   785,   788,   790,
     794,   803,   812,   819,   822,   841,   844,   855,   864,   873,
     882,   890,   895,   898,   903,   908,   913,   918,   921,   924,
     931,   938,   941,   946,   953,   960,   965
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    -1,    95,    96,    -1,    83,    -1,    97,
      83,    -1,    86,    83,    -1,    99,    -1,   100,    -1,   101,
      -1,     1,    83,    -1,    84,    -1,    97,    84,    -1,    83,
      -1,    97,    83,    -1,    81,    97,    85,    98,    -1,    82,
      97,   105,    98,    -1,    82,    97,   107,    98,    -1,   102,
     103,   120,    -1,   104,    97,    -1,    86,    -1,    -1,    89,
      97,    -1,    88,    97,    -1,    88,    97,    89,    97,    -1,
      89,    97,    88,    97,    -1,   105,    -1,   107,    -1,    92,
      -1,    93,    -1,   107,    92,    -1,    85,    -1,    87,    -1,
     106,    -1,   107,    92,   106,    -1,   109,    -1,   111,    -1,
      92,    -1,   111,    92,    -1,    85,    -1,   110,    -1,   111,
      92,   110,    -1,   119,    -1,   112,    97,   119,    -1,    85,
      -1,    92,    -1,   113,    97,    85,    -1,   113,    92,    85,
      -1,    85,    -1,   114,    97,    85,    -1,    84,   115,    -1,
      83,    -1,    85,   116,    -1,    83,    -1,    84,   115,    -1,
      85,    -1,   117,    97,    85,    -1,    85,    -1,   118,    92,
      85,    -1,    85,    -1,    92,    -1,   119,    92,    -1,   119,
      92,    85,    -1,     3,    97,   121,    -1,     3,    97,   168,
      -1,     4,    97,   122,    -1,     4,    97,   168,    -1,    17,
      97,   122,    -1,    17,    97,   168,    -1,    18,    97,   122,
      -1,    18,    97,   168,    -1,     7,    97,   122,    -1,     7,
      97,   168,    -1,    12,    97,   123,    -1,    12,    97,   168,
      -1,    19,    97,   122,    -1,    19,    97,   168,    -1,    20,
      97,   122,    -1,    20,    97,   168,    -1,    21,    97,   122,
      -1,    21,    97,   168,    -1,    23,    97,   124,    -1,    23,
      97,   168,    -1,     9,    97,   122,    -1,     9,    97,   168,
      -1,    24,    97,   125,    -1,    24,    97,   168,    -1,    25,
      97,   126,    -1,    25,    97,   168,    -1,     5,    97,   127,
      -1,     5,    97,   168,    -1,     6,    97,   128,    -1,     6,
      97,   168,    -1,    61,    97,   128,    -1,    61,    97,   168,
      -1,    79,    97,   128,    -1,    79,    97,   168,    -1,    26,
      97,   129,    -1,    26,    97,   168,    -1,    27,    97,   130,
      -1,    27,    97,   168,    -1,    28,    97,   131,    -1,    28,
      97,   168,    -1,    29,    97,   132,    -1,    29,    97,   168,
      -1,    63,    97,   156,    -1,    63,    97,   168,    -1,    64,
      97,   148,    -1,    64,    97,   168,    -1,    30,    97,   133,
      -1,    30,    97,   168,    -1,    31,    97,   134,    -1,    31,
      97,   168,    -1,    13,    97,   149,    -1,    13,    97,   168,
      -1,    11,    97,   154,    -1,    11,    97,   168,    -1,    33,
      97,   135,    -1,    33,    97,   168,    -1,     8,    97,   136,
      -1,     8,    97,   168,    -1,    16,    97,   137,    -1,    16,
      97,   168,    -1,    10,    97,   138,    -1,    10,    97,   168,
      -1,    14,    97,   139,    -1,    14,    97,   168,    -1,    38,
      97,   140,    -1,    38,    97,   168,    -1,    39,    97,   141,
      -1,    39,    97,   168,    -1,    15,    97,   142,    -1,    15,
      97,   168,    -1,    41,    97,   122,    -1,    41,    97,   168,
      -1,    44,    98,    -1,    44,    97,   143,    -1,    44,    97,
     168,    -1,    55,    97,   145,    -1,    55,    97,   168,    -1,
      56,    97,   146,    -1,    56,    97,   168,    -1,    57,    97,
     147,    -1,    57,    97,   168,    -1,    58,    97,   149,    -1,
      58,    97,   168,    -1,    59,    97,   150,    -1,    59,    97,
     168,    -1,    62,    97,   151,    -1,    62,    97,   168,    -1,
      65,    97,   152,    -1,    65,    97,   168,    -1,    60,    97,
     154,    -1,    60,    97,   168,    -1,    66,    97,   153,    -1,
      66,    97,   168,    -1,    68,    97,   157,    -1,    68,    97,
     168,    -1,    69,    97,   158,    -1,    69,    97,   168,    -1,
      70,    97,   159,    -1,    70,    97,   168,    -1,    71,    97,
     160,    -1,    71,    97,   168,    -1,    72,    97,   161,    -1,
      72,    97,   168,    -1,    73,    97,   162,    -1,    73,    97,
     168,    -1,    74,    97,   164,    -1,    74,    97,   168,    -1,
      75,    97,   145,    -1,    75,    97,   168,    -1,    76,    97,
     154,    -1,    76,    97,   168,    -1,    77,    97,   165,    -1,
      77,    97,   168,    -1,    78,    97,   166,    -1,    78,    97,
     168,    -1,    67,    97,   163,    -1,    67,    97,   168,    -1,
      80,    97,   167,    -1,    80,    97,   168,    -1,    91,    97,
     168,    -1,    85,     1,    83,    -1,   119,    98,    -1,   104,
      98,    -1,   104,    97,   104,    97,    85,    97,    85,    97,
      85,    97,    85,    97,    85,    98,    -1,   119,    97,    85,
      97,   113,    98,    -1,    85,    97,    85,    98,    -1,   104,
      97,   104,    98,    -1,    85,    97,   104,    98,    -1,   112,
      98,    -1,   104,    97,   104,    98,    -1,    85,    97,   104,
      98,    -1,    85,    98,    -1,    85,    98,    -1,    85,    97,
      85,    98,    -1,    85,    97,   104,    98,    -1,   118,    98,
      -1,    85,    97,   104,    97,   104,    98,    -1,   119,    98,
      -1,   113,    98,    -1,   104,    97,   114,    98,    -1,    85,
      97,    85,    97,    85,    97,   104,    98,    -1,    85,    97,
      85,    97,    85,    97,    85,    97,    85,    97,   104,    98,
      -1,    85,    97,   104,    98,    -1,    85,    97,    85,    97,
      85,    97,   117,    98,    -1,   144,    98,    -1,   119,    -1,
     144,    97,   119,    -1,    85,    97,    85,    97,    85,    97,
     117,    98,    -1,    85,    97,    85,    97,    85,    97,   117,
      98,    -1,    85,    97,    85,    97,   117,    98,    -1,   117,
      98,    -1,    85,    97,    85,    97,    85,    97,    85,    97,
      85,    97,    85,    97,    85,    97,   108,    97,   117,    98,
      -1,   108,   116,    -1,    85,    97,    85,    97,    85,    97,
      85,    97,    85,   116,    -1,    85,    97,    85,    97,    85,
      97,    85,    98,    -1,    85,    97,    85,    97,    85,    97,
     117,    98,    -1,    85,    97,    85,    97,    85,    97,   117,
      98,    -1,    85,    97,    85,    97,    85,    97,   119,    -1,
     155,    97,   117,    98,    -1,   155,    98,    -1,    85,    97,
     119,    98,    -1,    85,    97,   119,    98,    -1,    85,    97,
     119,    98,    -1,    85,    97,   104,    98,    -1,    85,    98,
      -1,    85,    98,    -1,    85,    97,    85,    97,    85,    98,
      -1,    85,    97,    85,    97,    85,    98,    -1,   117,    98,
      -1,    85,    97,    85,   116,    -1,    85,    97,    85,    97,
     104,    98,    -1,    90,    97,    85,    97,   117,    98,    -1,
      90,    97,    85,    98,    -1,    90,     1,    83,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    93,    96,    97,    98,    99,   107,   115,
     135,   139,   140,   143,   144,   147,   157,   168,   174,   181,
     186,   193,   197,   202,   207,   212,   219,   220,   241,   245,
     249,   259,   273,   280,   281,   299,   300,   303,   311,   323,
     340,   341,   356,   360,   370,   371,   376,   385,   397,   406,
     417,   420,   423,   437,   438,   445,   446,   462,   463,   478,
     479,   484,   494,   512,   513,   514,   515,   516,   517,   522,
     523,   529,   530,   531,   532,   533,   534,   540,   541,   542,
     543,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   646,   647,   659,   665,   672,   685,   692,   699,
     707,   714,   721,   729,   737,   744,   748,   756,   764,   776,
     784,   790,   796,   804,   814,   826,   834,   844,   847,   851,
     857,   866,   875,   883,   889,   904,   914,   929,   939,   948,
     957,   996,  1000,  1004,  1011,  1018,  1025,  1032,  1038,  1045,
    1054,  1063,  1070,  1080,  1087,  1093,  1097
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_A", "T_NS", "T_MX", "T_TXT",
  "T_CNAME", "T_AAAA", "T_PTR", "T_NXT", "T_KEY", "T_SOA", "T_SIG",
  "T_SRV", "T_CERT", "T_LOC", "T_MD", "T_MF", "T_MB", "T_MG", "T_MR",
  "T_NULL", "T_WKS", "T_HINFO", "T_MINFO", "T_RP", "T_AFSDB", "T_X25",
  "T_ISDN", "T_RT", "T_NSAP", "T_NSAP_PTR", "T_PX", "T_GPOS", "T_EID",
  "T_NIMLOC", "T_ATMA", "T_NAPTR", "T_KX", "T_A6", "T_DNAME", "T_SINK",
  "T_OPT", "T_APL", "T_UINFO", "T_UID", "T_GID", "T_UNSPEC", "T_TKEY",
  "T_TSIG", "T_IXFR", "T_AXFR", "T_MAILB", "T_MAILA", "T_DS", "T_DLV",
  "T_SSHFP", "T_RRSIG", "T_NSEC", "T_DNSKEY", "T_SPF", "T_NSEC3",
  "T_IPSECKEY", "T_DHCID", "T_NSEC3PARAM", "T_TLSA", "T_URI", "T_NID",
  "T_L32", "T_L64", "T_LP", "T_EUI48", "T_EUI64", "T_CAA", "T_CDS",
  "T_CDNSKEY", "T_OPENPGPKEY", "T_CSYNC", "T_AVC", "T_LB", "DOLLAR_TTL",
  "DOLLAR_ORIGIN", "NL", "SP", "STR", "PREV", "BITLAB", "T_TTL",
  "T_RRCLASS", "URR", "T_UTYPE", "'.'", "'@'", "$accept", "lines", "line",
  "sp", "trail", "ttl_directive", "origin_directive", "rr", "owner",
  "classttl", "dname", "abs_dname", "label", "rel_dname", "wire_dname",
  "wire_abs_dname", "wire_label", "wire_rel_dname", "str_seq",
  "concatenated_str_seq", "nxt_seq", "nsec_more", "nsec_seq", "str_sp_seq",
  "str_dot_seq", "dotted_str", "type_and_rdata", "rdata_a",
  "rdata_domain_name", "rdata_soa", "rdata_wks", "rdata_hinfo",
  "rdata_minfo", "rdata_mx", "rdata_txt", "rdata_rp", "rdata_afsdb",
  "rdata_x25", "rdata_isdn", "rdata_rt", "rdata_nsap", "rdata_px",
  "rdata_aaaa", "rdata_loc", "rdata_nxt", "rdata_srv", "rdata_naptr",
  "rdata_kx", "rdata_cert", "rdata_apl", "rdata_apl_seq", "rdata_ds",
  "rdata_dlv", "rdata_sshfp", "rdata_dhcid", "rdata_rrsig", "rdata_nsec",
  "rdata_nsec3", "rdata_nsec3_param", "rdata_tlsa", "rdata_dnskey",
  "rdata_ipsec_base", "rdata_ipseckey", "rdata_nid", "rdata_l32",
  "rdata_l64", "rdata_lp", "rdata_eui48", "rdata_eui64", "rdata_uri",
  "rdata_caa", "rdata_openpgpkey", "rdata_csync", "rdata_lb",
  "rdata_unknown", 0
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
     345,   346,    46,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    98,    98,    99,   100,   100,   101,   102,
     102,   103,   103,   103,   103,   103,   104,   104,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     111,   111,   112,   112,   113,   113,   113,   113,   114,   114,
     115,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   119,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   168,   168
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     4,     4,     4,     3,     2,
       1,     0,     2,     2,     4,     4,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       1,     3,     1,     3,     1,     1,     3,     3,     1,     3,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,    14,     6,     4,     4,
       4,     2,     4,     4,     2,     2,     4,     4,     2,     6,
       2,     2,     4,     8,    12,     4,     8,     2,     1,     3,
       8,     8,     6,     2,    18,     2,    10,     8,     8,     8,
       7,     4,     2,     4,     4,     4,     4,     2,     2,     6,
       6,     2,     4,     6,     6,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     4,    11,    31,    20,
      32,    28,    29,     3,     0,     7,     8,     9,    21,     0,
      26,    33,    27,    10,     0,     0,     6,     5,    12,     0,
       0,     0,    19,    30,     0,     0,     0,    23,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    34,    13,     0,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    24,    25,    59,     0,    60,     0,    63,    64,
       0,    65,    66,     0,    89,    90,     0,    42,    91,    92,
      71,    72,     0,   119,   120,    83,    84,     0,   123,   124,
       0,   115,   116,     0,    73,    74,     0,   113,   114,     0,
     125,   126,     0,   131,   132,    44,    45,     0,   121,   122,
      67,    68,    69,    70,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,    85,    86,     0,    87,    88,     0,
      97,    98,     0,    99,   100,     0,   101,   102,     0,   103,
     104,     0,   109,   110,    57,     0,   111,   112,     0,   117,
     118,     0,   127,   128,     0,   129,   130,   133,   134,   208,
     136,     0,   137,     0,   138,   139,     0,   140,   141,     0,
     142,   143,   144,   145,    39,    37,     0,    35,    40,    36,
     146,   147,   152,   153,    93,    94,     0,   148,   149,     0,
       0,   105,   106,    55,     0,   107,   108,     0,   150,   151,
       0,   154,   155,     0,   178,   179,     0,   156,   157,     0,
     158,   159,     0,   160,   161,     0,   162,   163,     0,   164,
     165,     0,   166,   167,     0,   168,   169,   170,   171,   172,
     173,     0,   174,   175,     0,   176,   177,    95,    96,     0,
     180,   181,   183,   182,     0,     0,    61,   184,   185,     0,
       0,   191,   200,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,     0,   194,     0,   195,
       0,     0,   198,     0,     0,     0,     0,   207,     0,     0,
       0,    53,     0,   215,    38,     0,     0,     0,   222,     0,
     213,     0,     0,     0,     0,     0,     0,     0,   227,   228,
       0,   231,     0,     0,   236,     0,    62,     0,    43,    48,
       0,     0,     0,     0,     0,     0,    47,    46,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,   209,
       0,     0,     0,    51,     0,     0,    54,    41,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,   190,     0,   202,     0,     0,     0,
       0,     0,     0,   188,   189,   192,   193,   196,   197,     0,
       0,   205,     0,     0,     0,    50,    52,     0,     0,   221,
       0,     0,     0,   223,   224,   225,   226,     0,   232,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,     0,     0,   187,   199,     0,     0,
       0,   212,     0,     0,     0,     0,   229,   230,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,   219,     0,     0,   203,   206,     0,   210,   211,     0,
     217,   218,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,     0,     0,     0,   204,     0,     0,   186,     0,
       0,     0,     0,   214
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,   103,   104,    15,    16,    17,    18,    31,
     180,    20,    21,    22,   286,   287,   288,   289,   186,   217,
     420,   446,   393,   304,   255,   187,   100,   178,   181,   204,
     231,   234,   237,   184,   188,   240,   243,   246,   249,   252,
     256,   259,   193,   218,   198,   210,   262,   265,   213,   270,
     271,   274,   277,   280,   305,   207,   290,   297,   308,   311,
     201,   300,   301,   317,   320,   323,   326,   329,   332,   314,
     335,   342,   345,   350,   179
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -445
static const yytype_int16 yypact[] =
{
    -445,    30,  -445,   -81,   -79,   -79,  -445,  -445,  -445,   -71,
    -445,  -445,  -445,  -445,   150,  -445,  -445,  -445,   239,   -79,
    -445,  -445,    11,  -445,   276,    51,  -445,  -445,  -445,   -79,
     -79,   832,    24,   -50,   288,   288,    62,    15,    69,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   288,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   126,   -79,
    -445,  -445,  -445,   295,  -445,  -445,  -445,   -79,   -79,   -77,
      41,    96,   -77,    41,   -77,    41,    41,   103,    41,   105,
     107,   116,    77,    41,    41,    41,    41,    41,   -77,   119,
      41,    41,   128,   130,   138,   146,   159,   161,   168,   171,
      41,   -58,  -445,   181,   183,   192,   105,    81,   103,   -77,
     195,   199,   206,   220,   229,   232,   241,   251,   254,   262,
     265,   269,   272,   181,   103,   206,   279,   -77,   283,    37,
      34,  -445,    24,    24,  -445,    13,  -445,    66,  -445,  -445,
     288,  -445,  -445,   -79,  -445,  -445,   288,    50,  -445,  -445,
    -445,  -445,    66,  -445,  -445,  -445,  -445,   -79,  -445,  -445,
     -79,  -445,  -445,   -79,  -445,  -445,   -79,  -445,  -445,   -79,
    -445,  -445,   -79,  -445,  -445,  -445,  -445,    68,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
      86,  -445,  -445,   -79,  -445,  -445,   -79,  -445,  -445,   -79,
    -445,  -445,   -79,  -445,  -445,   288,  -445,  -445,   288,  -445,
    -445,   -79,  -445,  -445,  -445,    72,  -445,  -445,   -79,  -445,
    -445,   -79,  -445,  -445,   -79,  -445,  -445,  -445,  -445,    50,
    -445,   288,  -445,   -79,  -445,  -445,   -79,  -445,  -445,   -79,
    -445,  -445,  -445,  -445,  -445,  -445,   310,  -445,  -445,    55,
    -445,  -445,  -445,  -445,  -445,  -445,   -79,  -445,  -445,   -79,
     288,  -445,  -445,  -445,   288,  -445,  -445,   -79,  -445,  -445,
     -79,  -445,  -445,   -79,  -445,  -445,   -79,  -445,  -445,   -79,
    -445,  -445,   -79,  -445,  -445,   -79,  -445,  -445,   288,  -445,
    -445,   288,  -445,  -445,   -79,  -445,  -445,  -445,  -445,  -445,
    -445,   288,  -445,  -445,   -79,  -445,  -445,  -445,  -445,   -79,
    -445,  -445,  -445,  -445,    76,   314,    78,  -445,  -445,    51,
      56,  -445,  -445,   316,   318,    51,   320,   322,   324,    83,
     209,  -445,   326,   328,    51,    51,    51,  -445,   217,  -445,
      51,    87,  -445,    51,   331,    51,    56,  -445,   333,   346,
     349,  -445,   298,  -445,    92,   358,   361,   301,  -445,   304,
    -445,   370,   372,   377,    17,    17,    17,    51,  -445,  -445,
     379,  -445,   381,   386,  -445,   288,  -445,   288,    50,  -445,
     288,   -79,   -79,   -79,   -79,   -79,  -445,  -445,   -79,   288,
     288,   288,   288,   288,   288,  -445,   -79,   -79,   288,    50,
     -79,   -79,   -79,  -445,   298,   310,  -445,  -445,   -79,   -79,
     288,  -445,   -79,   -79,   -79,    66,    66,    66,   288,   -79,
     310,   -79,   301,  -445,  -445,   307,  -445,   388,   391,   393,
     395,   397,    45,  -445,  -445,  -445,  -445,  -445,  -445,    51,
     402,  -445,   406,   411,   433,  -445,  -445,   435,   437,  -445,
     441,   443,   445,  -445,  -445,  -445,  -445,   447,  -445,    51,
     288,  -445,   -79,   -79,   -79,   -79,   -79,    68,   288,   -79,
     -79,   -79,   288,   -79,   -79,   -79,   -79,   288,   288,   288,
    -445,   433,   449,   451,    51,   433,  -445,  -445,   463,   433,
     433,  -445,   466,    17,   469,   433,  -445,  -445,  -445,   288,
     -79,   -79,   288,   288,   -79,   288,   288,   -79,    50,   288,
     288,  -445,   473,   475,  -445,  -445,   480,  -445,  -445,   482,
    -445,  -445,   -79,   -79,   -79,   310,   487,   489,    51,  -445,
     -79,   -79,   288,   493,   500,  -445,   288,   -79,  -445,    91,
     -79,   433,   288,  -445
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -445,  -445,  -445,    -1,   252,  -445,  -445,  -445,  -445,  -445,
     109,   154,   151,   169,  -381,  -445,  -187,  -445,  -445,  -262,
    -445,  -227,  -444,  -155,  -445,    -9,  -445,  -445,  -104,  -445,
    -445,  -445,  -445,  -445,  -143,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,    58,  -445,  -445,  -445,    73,  -445,  -445,  -445,  -445,
    -131,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,   814
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      14,   486,    23,    24,    25,     7,   294,    28,   174,   190,
     341,   195,    26,   175,   354,   176,   498,   292,    32,   220,
     222,   224,   226,   228,   347,   171,    28,   174,    37,    38,
       2,     3,   175,   339,   176,     8,   267,    10,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     7,   170,    28,
     177,    28,   174,    33,   107,   192,   172,   173,    28,   176,
      19,     4,     5,     6,     7,     8,     9,    10,    28,   230,
     352,   569,    11,    12,   175,    28,     8,   169,    10,    28,
     215,   175,   269,    11,    12,    28,     8,   216,    10,   171,
      28,   174,   356,    11,    12,   102,     7,   394,   176,   102,
       7,   102,     7,    28,    33,   102,     7,   108,   356,   414,
     369,    28,   215,   416,   381,    28,   284,   175,   426,   216,
       7,   175,   435,   285,   355,    28,   284,   284,   356,    35,
      28,   183,   359,   285,   101,   360,   175,    28,   200,    28,
     206,    28,   209,   175,    36,   175,   363,   175,   580,   364,
      28,   212,   365,    28,   233,   366,   175,   447,   367,   175,
     507,   368,    28,   242,    28,   245,   370,   485,   175,   282,
     175,   337,    28,   248,     0,   197,     0,   203,   175,   372,
      28,   251,   373,    27,    28,   374,   175,     0,   375,   236,
     239,   376,   450,    28,   254,    28,   258,   378,     0,   175,
     380,   175,    28,   261,     0,    28,   264,   383,   175,     0,
     384,   175,     0,   385,     0,    28,   273,    28,   276,     0,
     386,   175,   388,   175,     0,   389,    28,   279,   390,    28,
     296,     0,   175,    28,   299,   175,     0,   105,   106,   175,
      28,   303,   171,    28,   427,   395,   175,     0,   396,   397,
     171,    28,   433,   399,    28,   307,   401,   500,     0,   402,
     175,     0,   403,    28,   310,   404,    28,   313,   405,   175,
       0,   406,   175,   142,   407,    28,   316,    29,    30,   512,
       0,   175,     0,   410,     0,    28,   319,     0,    28,   322,
     399,   175,     0,   412,   175,     0,    28,   325,   413,    28,
     328,   418,   175,    28,   331,   175,    28,   334,     0,   175,
      28,    34,   175,    28,   344,     0,   539,    28,   349,   175,
     543,   102,     7,   175,   545,   546,     0,   439,   171,    28,
     550,   443,   444,   445,   171,    28,   303,   171,    28,   451,
     171,    28,   501,   391,   392,   455,   456,   457,    28,   415,
      28,   419,    28,   421,    28,   423,    28,   424,    28,   425,
      28,   428,    28,   429,   462,    28,   437,    28,   440,   465,
     467,   468,   469,   470,   471,     0,   582,   472,     0,   357,
      28,   441,   358,    28,   442,   479,   480,     0,   361,   482,
     483,   484,    28,   448,   362,    28,   449,   487,   488,   399,
       0,   490,   491,   492,    28,   452,    28,   453,   497,     0,
     499,    28,   454,    28,   459,    28,   460,     0,   417,   371,
      28,   461,    28,   502,   422,    28,   503,    28,   504,    28,
     505,    28,   506,   430,   431,   432,    28,   509,     0,   434,
      28,   510,   436,     0,   438,    28,   511,   377,     0,   399,
     379,   521,   522,   523,   524,   525,   370,   382,   528,   529,
     530,   399,   532,   533,   534,   535,   458,    28,   303,    28,
     513,    28,   514,   387,   548,    28,   515,    28,   516,    28,
     517,    28,   518,    28,   540,    28,   541,     0,   399,   552,
     553,     0,   399,   556,   399,   399,   559,    28,   544,   399,
      28,   547,   398,    28,   549,     0,   400,    28,   562,    28,
     563,   566,   567,   568,    28,   564,    28,   565,     0,   573,
     574,    28,   570,    28,   571,     0,   579,    28,   576,   581,
     408,   399,     0,   409,    28,   577,     0,     0,   508,     0,
       0,     0,     0,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   519,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   542,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   463,     0,   464,
       0,     0,   466,     0,     0,     0,     0,   572,     0,     0,
       0,   473,   474,   475,   476,   477,   478,     0,     0,     0,
     481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   489,     0,     0,     0,     0,   493,   494,   495,
     496,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   520,     0,     0,     0,     0,     0,     0,   526,
     527,     0,     0,     0,   531,     0,     0,     0,     0,   536,
     537,   538,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   551,     0,     0,   554,   555,     0,   557,   558,     0,
       0,   560,   561,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   575,     0,     0,     0,   578,     0,
       0,     0,     0,     0,   583,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,    67,     0,     0,     0,     0,
      68,    69,     0,    70,     0,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,    99,   182,   185,   189,   191,   194,   196,
     199,   202,   205,   208,   211,   214,   219,   221,   223,   225,
     227,   229,   232,   235,   238,   241,   244,   247,   250,   253,
     257,   260,   263,   266,   268,   272,     0,   275,   278,   281,
     283,   291,   293,   295,   298,   302,   306,   309,   312,   315,
     318,   321,   324,   327,   330,   333,   336,   338,   340,   343,
     346,   348,   351,     0,   353
};

static const yytype_int16 yycheck[] =
{
       1,   445,    83,     4,     5,    84,   149,    84,    85,   113,
     165,   115,    83,    90,     1,    92,   460,   148,    19,   123,
     124,   125,   126,   127,   167,    83,    84,    85,    29,    30,
       0,     1,    90,   164,    92,    85,   140,    87,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    84,    99,    84,
     109,    84,    85,    92,    89,   114,   107,   108,    84,    92,
       1,    81,    82,    83,    84,    85,    86,    87,    84,   128,
      83,   565,    92,    93,    90,    84,    85,     1,    87,    84,
      85,    90,   141,    92,    93,    84,    85,    92,    87,    83,
      84,    85,    92,    92,    93,    83,    84,    92,    92,    83,
      84,    83,    84,    84,    92,    83,    84,    88,    92,    83,
      92,    84,    85,    85,    92,    84,    85,    90,    85,    92,
      84,    90,    85,    92,   175,    84,    85,    85,    92,    25,
      84,    85,   183,    92,    33,   186,    90,    84,    85,    84,
      85,    84,    85,    90,    25,    90,   197,    90,   579,   200,
      84,    85,   203,    84,    85,   206,    90,   394,   209,    90,
     472,   212,    84,    85,    84,    85,   217,   444,    90,   146,
      90,   163,    84,    85,    -1,   116,    -1,   118,    90,   230,
      84,    85,   233,    83,    84,   236,    90,    -1,   239,   130,
     131,   242,   397,    84,    85,    84,    85,   248,    -1,    90,
     251,    90,    84,    85,    -1,    84,    85,   258,    90,    -1,
     261,    90,    -1,   264,    -1,    84,    85,    84,    85,    -1,
     271,    90,   273,    90,    -1,   276,    84,    85,   279,    84,
      85,    -1,    90,    84,    85,    90,    -1,    35,    36,    90,
      84,    85,    83,    84,    85,   296,    90,    -1,   299,   300,
      83,    84,    85,   304,    84,    85,   307,   462,    -1,   310,
      90,    -1,   313,    84,    85,   316,    84,    85,   319,    90,
      -1,   322,    90,    71,   325,    84,    85,    88,    89,   484,
      -1,    90,    -1,   334,    -1,    84,    85,    -1,    84,    85,
     341,    90,    -1,   344,    90,    -1,    84,    85,   349,    84,
      85,   360,    90,    84,    85,    90,    84,    85,    -1,    90,
      84,    85,    90,    84,    85,    -1,   521,    84,    85,    90,
     525,    83,    84,    90,   529,   530,    -1,   386,    83,    84,
     535,    83,    84,    85,    83,    84,    85,    83,    84,    85,
      83,    84,    85,    83,    84,   404,   405,   406,    84,    85,
      84,    85,    84,    85,    84,    85,    84,    85,    84,    85,
      84,    85,    84,    85,   415,    84,    85,    84,    85,   420,
     421,   422,   423,   424,   425,    -1,   581,   428,    -1,   177,
      84,    85,   180,    84,    85,   436,   437,    -1,   186,   440,
     441,   442,    84,    85,   192,    84,    85,   448,   449,   450,
      -1,   452,   453,   454,    84,    85,    84,    85,   459,    -1,
     461,    84,    85,    84,    85,    84,    85,    -1,   359,   217,
      84,    85,    84,    85,   365,    84,    85,    84,    85,    84,
      85,    84,    85,   374,   375,   376,    84,    85,    -1,   380,
      84,    85,   383,    -1,   385,    84,    85,   245,    -1,   500,
     248,   502,   503,   504,   505,   506,   507,   255,   509,   510,
     511,   512,   513,   514,   515,   516,   407,    84,    85,    84,
      85,    84,    85,   271,   533,    84,    85,    84,    85,    84,
      85,    84,    85,    84,    85,    84,    85,    -1,   539,   540,
     541,    -1,   543,   544,   545,   546,   547,    84,    85,   550,
      84,    85,   300,    84,    85,    -1,   304,    84,    85,    84,
      85,   562,   563,   564,    84,    85,    84,    85,    -1,   570,
     571,    84,    85,    84,    85,    -1,   577,    84,    85,   580,
     328,   582,    -1,   331,    84,    85,    -1,    -1,   479,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   524,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,   417,
      -1,    -1,   420,    -1,    -1,    -1,    -1,   568,    -1,    -1,
      -1,   429,   430,   431,   432,   433,   434,    -1,    -1,    -1,
     438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   450,    -1,    -1,    -1,    -1,   455,   456,   457,
     458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,   507,
     508,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,   517,
     518,   519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   539,    -1,    -1,   542,   543,    -1,   545,   546,    -1,
      -1,   549,   550,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   572,    -1,    -1,    -1,   576,    -1,
      -1,    -1,    -1,    -1,   582,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,    -1,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,    -1,   170
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    95,     0,     1,    81,    82,    83,    84,    85,    86,
      87,    92,    93,    96,    97,    99,   100,   101,   102,   104,
     105,   106,   107,    83,    97,    97,    83,    83,    84,    88,
      89,   103,    97,    92,    85,   105,   107,    97,    97,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    33,    38,    39,
      41,    44,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    85,    91,
     120,   106,    83,    97,    98,    98,    98,    89,    88,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    98,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,     1,
      97,    83,    97,    97,    85,    90,    92,   119,   121,   168,
     104,   122,   168,    85,   127,   168,   112,   119,   128,   168,
     122,   168,   119,   136,   168,   122,   168,   104,   138,   168,
      85,   154,   168,   104,   123,   168,    85,   149,   168,    85,
     139,   168,    85,   142,   168,    85,    92,   113,   137,   168,
     122,   168,   122,   168,   122,   168,   122,   168,   122,   168,
     119,   124,   168,    85,   125,   168,   104,   126,   168,   104,
     129,   168,    85,   130,   168,    85,   131,   168,    85,   132,
     168,    85,   133,   168,    85,   118,   134,   168,    85,   135,
     168,    85,   140,   168,    85,   141,   168,   122,   168,   119,
     143,   144,   168,    85,   145,   168,    85,   146,   168,    85,
     147,   168,   149,   168,    85,    92,   108,   109,   110,   111,
     150,   168,   154,   168,   128,   168,    85,   151,   168,    85,
     155,   156,   168,    85,   117,   148,   168,    85,   152,   168,
      85,   153,   168,    85,   163,   168,    85,   157,   168,    85,
     158,   168,    85,   159,   168,    85,   160,   168,    85,   161,
     168,    85,   162,   168,    85,   164,   168,   145,   168,   154,
     168,   117,   165,   168,    85,   166,   168,   128,   168,    85,
     167,   168,    83,   168,     1,    97,    92,    98,    98,    97,
      97,    98,    98,    97,    97,    97,    97,    97,    97,    92,
      97,    98,    97,    97,    97,    97,    97,    98,    97,    98,
      97,    92,    98,    97,    97,    97,    97,    98,    97,    97,
      97,    83,    84,   116,    92,    97,    97,    97,    98,    97,
      98,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      97,    98,    97,    97,    83,    85,    85,   104,   119,    85,
     114,    85,   104,    85,    85,    85,    85,    85,    85,    85,
     104,   104,   104,    85,   104,    85,   104,    85,   104,   119,
      85,    85,    85,    83,    84,    85,   115,   110,    85,    85,
     117,    85,    85,    85,    85,   119,   119,   119,   104,    85,
      85,    85,    97,    98,    98,    97,    98,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    97,
      97,    98,    97,    97,    97,   115,   116,    97,    97,    98,
      97,    97,    97,    98,    98,    98,    98,    97,   116,    97,
     117,    85,    85,    85,    85,    85,    85,   113,   104,    85,
      85,    85,   117,    85,    85,    85,    85,    85,    85,   104,
      98,    97,    97,    97,    97,    97,    98,    98,    97,    97,
      97,    98,    97,    97,    97,    97,    98,    98,    98,   117,
      85,    85,   104,   117,    85,   117,   117,    85,   119,    85,
     117,    98,    97,    97,    98,    98,    97,    98,    98,    97,
      98,    98,    85,    85,    85,    85,    97,    97,    97,   116,
      85,    85,   104,    97,    97,    98,    85,    85,    98,    97,
     108,    97,   117,    98
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
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



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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
        case 6:
#line 98 "./zparser.y"
    {}
    break;

  case 7:
#line 100 "./zparser.y"
    {
	    region_free_all(parser->rr_region);
	    parser->current_rr.type = 0;
	    parser->current_rr.rdata_count = 0;
	    parser->current_rr.rdatas = parser->temporary_rdatas;
	    parser->error_occurred = 0;
    }
    break;

  case 8:
#line 108 "./zparser.y"
    {
	    region_free_all(parser->rr_region);
	    parser->current_rr.type = 0;
	    parser->current_rr.rdata_count = 0;
	    parser->current_rr.rdatas = parser->temporary_rdatas;
	    parser->error_occurred = 0;
    }
    break;

  case 9:
#line 116 "./zparser.y"
    {	/* rr should be fully parsed */
	    if (!parser->error_occurred) {
			    parser->current_rr.rdatas
				    =(rdata_atom_type *)region_alloc_array_init(
					    parser->region,
					    parser->current_rr.rdatas,
					    parser->current_rr.rdata_count,
					    sizeof(rdata_atom_type));

			    process_rr();
	    }

	    region_free_all(parser->rr_region);

	    parser->current_rr.type = 0;
	    parser->current_rr.rdata_count = 0;
	    parser->current_rr.rdatas = parser->temporary_rdatas;
	    parser->error_occurred = 0;
    }
    break;

  case 15:
#line 148 "./zparser.y"
    {
	    parser->default_ttl = zparser_ttl2int((yyvsp[(3) - (4)].data).str, &(parser->error_occurred));
	    if (parser->error_occurred == 1) {
		    parser->default_ttl = DEFAULT_TTL;
			parser->error_occurred = 0;
	    }
    }
    break;

  case 16:
#line 158 "./zparser.y"
    {
	    /* if previous origin is unused, remove it, do not leak it */
	    if(parser->origin != error_domain && parser->origin != (yyvsp[(3) - (4)].domain)) {
		/* protect $3 from deletion, because deldomain walks up */
		(yyvsp[(3) - (4)].domain)->usage ++;
	    	domain_table_deldomain(parser->db, parser->origin);
		(yyvsp[(3) - (4)].domain)->usage --;
	    }
	    parser->origin = (yyvsp[(3) - (4)].domain);
    }
    break;

  case 17:
#line 169 "./zparser.y"
    {
	    zc_error_prev_line("$ORIGIN directive requires absolute domain name");
    }
    break;

  case 18:
#line 175 "./zparser.y"
    {
	    parser->current_rr.owner = (yyvsp[(1) - (3)].domain);
	    parser->current_rr.type = (yyvsp[(3) - (3)].type);
    }
    break;

  case 19:
#line 182 "./zparser.y"
    {
	    parser->prev_dname = (yyvsp[(1) - (2)].domain);
	    (yyval.domain) = (yyvsp[(1) - (2)].domain);
    }
    break;

  case 20:
#line 187 "./zparser.y"
    {
	    (yyval.domain) = parser->prev_dname;
    }
    break;

  case 21:
#line 193 "./zparser.y"
    {
	    parser->current_rr.ttl = parser->default_ttl;
	    parser->current_rr.klass = parser->default_class;
    }
    break;

  case 22:
#line 198 "./zparser.y"
    {
	    parser->current_rr.ttl = parser->default_ttl;
	    parser->current_rr.klass = (yyvsp[(1) - (2)].klass);
    }
    break;

  case 23:
#line 203 "./zparser.y"
    {
	    parser->current_rr.ttl = (yyvsp[(1) - (2)].ttl);
	    parser->current_rr.klass = parser->default_class;
    }
    break;

  case 24:
#line 208 "./zparser.y"
    {
	    parser->current_rr.ttl = (yyvsp[(1) - (4)].ttl);
	    parser->current_rr.klass = (yyvsp[(3) - (4)].klass);
    }
    break;

  case 25:
#line 213 "./zparser.y"
    {
	    parser->current_rr.ttl = (yyvsp[(3) - (4)].ttl);
	    parser->current_rr.klass = (yyvsp[(1) - (4)].klass);
    }
    break;

  case 27:
#line 221 "./zparser.y"
    {
	    if ((yyvsp[(1) - (1)].dname) == error_dname) {
		    (yyval.domain) = error_domain;
	    } else if(parser->origin == error_domain) {
		    zc_error("cannot concatenate origin to domain name, because origin failed to parse");
		    (yyval.domain) = error_domain;
	    } else if ((yyvsp[(1) - (1)].dname)->name_size + domain_dname(parser->origin)->name_size - 1 > MAXDOMAINLEN) {
		    zc_error("domain name exceeds %d character limit", MAXDOMAINLEN);
		    (yyval.domain) = error_domain;
	    } else {
		    (yyval.domain) = domain_table_insert(
			    parser->db->domains,
			    dname_concatenate(
				    parser->rr_region,
				    (yyvsp[(1) - (1)].dname),
				    domain_dname(parser->origin)));
	    }
    }
    break;

  case 28:
#line 242 "./zparser.y"
    {
	    (yyval.domain) = parser->db->domains->root;
    }
    break;

  case 29:
#line 246 "./zparser.y"
    {
	    (yyval.domain) = parser->origin;
    }
    break;

  case 30:
#line 250 "./zparser.y"
    {
	    if ((yyvsp[(1) - (2)].dname) != error_dname) {
		    (yyval.domain) = domain_table_insert(parser->db->domains, (yyvsp[(1) - (2)].dname));
	    } else {
		    (yyval.domain) = error_domain;
	    }
    }
    break;

  case 31:
#line 260 "./zparser.y"
    {
	    if ((yyvsp[(1) - (1)].data).len > MAXLABELLEN) {
		    zc_error("label exceeds %d character limit", MAXLABELLEN);
		    (yyval.dname) = error_dname;
	    } else if ((yyvsp[(1) - (1)].data).len <= 0) {
		    zc_error("zero label length");
		    (yyval.dname) = error_dname;
	    } else {
		    (yyval.dname) = dname_make_from_label(parser->rr_region,
					       (uint8_t *) (yyvsp[(1) - (1)].data).str,
					       (yyvsp[(1) - (1)].data).len);
	    }
    }
    break;

  case 32:
#line 274 "./zparser.y"
    {
	    zc_error("bitlabels are now deprecated. RFC2673 is obsoleted.");
	    (yyval.dname) = error_dname;
    }
    break;

  case 34:
#line 282 "./zparser.y"
    {
	    if ((yyvsp[(1) - (3)].dname) == error_dname || (yyvsp[(3) - (3)].dname) == error_dname) {
		    (yyval.dname) = error_dname;
	    } else if ((yyvsp[(1) - (3)].dname)->name_size + (yyvsp[(3) - (3)].dname)->name_size - 1 > MAXDOMAINLEN) {
		    zc_error("domain name exceeds %d character limit",
			     MAXDOMAINLEN);
		    (yyval.dname) = error_dname;
	    } else {
		    (yyval.dname) = dname_concatenate(parser->rr_region, (yyvsp[(1) - (3)].dname), (yyvsp[(3) - (3)].dname));
	    }
    }
    break;

  case 37:
#line 304 "./zparser.y"
    {
	    char *result = (char *) region_alloc(parser->rr_region, 2);
	    result[0] = 0;
	    result[1] = '\0';
	    (yyval.data).str = result;
	    (yyval.data).len = 1;
    }
    break;

  case 38:
#line 312 "./zparser.y"
    {
	    char *result = (char *) region_alloc(parser->rr_region,
						 (yyvsp[(1) - (2)].data).len + 2);
	    memcpy(result, (yyvsp[(1) - (2)].data).str, (yyvsp[(1) - (2)].data).len);
	    result[(yyvsp[(1) - (2)].data).len] = 0;
	    result[(yyvsp[(1) - (2)].data).len+1] = '\0';
	    (yyval.data).str = result;
	    (yyval.data).len = (yyvsp[(1) - (2)].data).len + 1;
    }
    break;

  case 39:
#line 324 "./zparser.y"
    {
	    char *result = (char *) region_alloc(parser->rr_region,
						 (yyvsp[(1) - (1)].data).len + 1);

	    if ((yyvsp[(1) - (1)].data).len > MAXLABELLEN)
		    zc_error("label exceeds %d character limit", MAXLABELLEN);

	    /* make label anyway */
	    result[0] = (yyvsp[(1) - (1)].data).len;
	    memcpy(result+1, (yyvsp[(1) - (1)].data).str, (yyvsp[(1) - (1)].data).len);

	    (yyval.data).str = result;
	    (yyval.data).len = (yyvsp[(1) - (1)].data).len + 1;
    }
    break;

  case 41:
#line 342 "./zparser.y"
    {
	    if ((yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len - 3 > MAXDOMAINLEN)
		    zc_error("domain name exceeds %d character limit",
			     MAXDOMAINLEN);

	    /* make dname anyway */
	    (yyval.data).len = (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len;
	    (yyval.data).str = (char *) region_alloc(parser->rr_region, (yyval.data).len + 1);
	    memcpy((yyval.data).str, (yyvsp[(1) - (3)].data).str, (yyvsp[(1) - (3)].data).len);
	    memcpy((yyval.data).str + (yyvsp[(1) - (3)].data).len, (yyvsp[(3) - (3)].data).str, (yyvsp[(3) - (3)].data).len);
	    (yyval.data).str[(yyval.data).len] = '\0';
    }
    break;

  case 42:
#line 357 "./zparser.y"
    {
	    zadd_rdata_txt_wireformat(zparser_conv_text(parser->rr_region, (yyvsp[(1) - (1)].data).str, (yyvsp[(1) - (1)].data).len), 1);
    }
    break;

  case 43:
#line 361 "./zparser.y"
    {
	    zadd_rdata_txt_wireformat(zparser_conv_text(parser->rr_region, (yyvsp[(3) - (3)].data).str, (yyvsp[(3) - (3)].data).len), 0);
    }
    break;

  case 45:
#line 372 "./zparser.y"
    {
	    (yyval.data).len = 1;
	    (yyval.data).str = region_strdup(parser->rr_region, ".");
    }
    break;

  case 46:
#line 377 "./zparser.y"
    {
	    (yyval.data).len = (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len + 1;
	    (yyval.data).str = (char *) region_alloc(parser->rr_region, (yyval.data).len + 1);
	    memcpy((yyval.data).str, (yyvsp[(1) - (3)].data).str, (yyvsp[(1) - (3)].data).len);
	    memcpy((yyval.data).str + (yyvsp[(1) - (3)].data).len, " ", 1);
	    memcpy((yyval.data).str + (yyvsp[(1) - (3)].data).len + 1, (yyvsp[(3) - (3)].data).str, (yyvsp[(3) - (3)].data).len);
	    (yyval.data).str[(yyval.data).len] = '\0';
    }
    break;

  case 47:
#line 386 "./zparser.y"
    {
	    (yyval.data).len = (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len + 1;
	    (yyval.data).str = (char *) region_alloc(parser->rr_region, (yyval.data).len + 1);
	    memcpy((yyval.data).str, (yyvsp[(1) - (3)].data).str, (yyvsp[(1) - (3)].data).len);
	    memcpy((yyval.data).str + (yyvsp[(1) - (3)].data).len, ".", 1);
	    memcpy((yyval.data).str + (yyvsp[(1) - (3)].data).len + 1, (yyvsp[(3) - (3)].data).str, (yyvsp[(3) - (3)].data).len);
	    (yyval.data).str[(yyval.data).len] = '\0';
    }
    break;

  case 48:
#line 398 "./zparser.y"
    {
	    uint16_t type = rrtype_from_string((yyvsp[(1) - (1)].data).str);
	    if (type != 0 && type < 128) {
		    set_bit(nxtbits, type);
	    } else {
		    zc_error("bad type %d in NXT record", (int) type);
	    }
    }
    break;

  case 49:
#line 407 "./zparser.y"
    {
	    uint16_t type = rrtype_from_string((yyvsp[(3) - (3)].data).str);
	    if (type != 0 && type < 128) {
		    set_bit(nxtbits, type);
	    } else {
		    zc_error("bad type %d in NXT record", (int) type);
	    }
    }
    break;

  case 50:
#line 418 "./zparser.y"
    {
    }
    break;

  case 51:
#line 421 "./zparser.y"
    {
    }
    break;

  case 52:
#line 424 "./zparser.y"
    {
	    uint16_t type = rrtype_from_string((yyvsp[(1) - (2)].data).str);
	    if (type != 0) {
                    if (type > nsec_highest_rcode) {
                            nsec_highest_rcode = type;
                    }
		    set_bitnsec(nsecbits, type);
	    } else {
		    zc_error("bad type %d in NSEC record", (int) type);
	    }
    }
    break;

  case 56:
#line 447 "./zparser.y"
    {
	    char *result = (char *) region_alloc(parser->rr_region,
						 (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len + 1);
	    memcpy(result, (yyvsp[(1) - (3)].data).str, (yyvsp[(1) - (3)].data).len);
	    memcpy(result + (yyvsp[(1) - (3)].data).len, (yyvsp[(3) - (3)].data).str, (yyvsp[(3) - (3)].data).len);
	    (yyval.data).str = result;
	    (yyval.data).len = (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len;
	    (yyval.data).str[(yyval.data).len] = '\0';
    }
    break;

  case 58:
#line 464 "./zparser.y"
    {
	    char *result = (char *) region_alloc(parser->rr_region,
						 (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len + 1);
	    memcpy(result, (yyvsp[(1) - (3)].data).str, (yyvsp[(1) - (3)].data).len);
	    memcpy(result + (yyvsp[(1) - (3)].data).len, (yyvsp[(3) - (3)].data).str, (yyvsp[(3) - (3)].data).len);
	    (yyval.data).str = result;
	    (yyval.data).len = (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len;
	    (yyval.data).str[(yyval.data).len] = '\0';
    }
    break;

  case 60:
#line 480 "./zparser.y"
    {
	(yyval.data).str = ".";
	(yyval.data).len = 1;
    }
    break;

  case 61:
#line 485 "./zparser.y"
    {
	    char *result = (char *) region_alloc(parser->rr_region,
						 (yyvsp[(1) - (2)].data).len + 2);
	    memcpy(result, (yyvsp[(1) - (2)].data).str, (yyvsp[(1) - (2)].data).len);
	    result[(yyvsp[(1) - (2)].data).len] = '.';
	    (yyval.data).str = result;
	    (yyval.data).len = (yyvsp[(1) - (2)].data).len + 1;
	    (yyval.data).str[(yyval.data).len] = '\0';
    }
    break;

  case 62:
#line 495 "./zparser.y"
    {
	    char *result = (char *) region_alloc(parser->rr_region,
						 (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len + 2);
	    memcpy(result, (yyvsp[(1) - (3)].data).str, (yyvsp[(1) - (3)].data).len);
	    result[(yyvsp[(1) - (3)].data).len] = '.';
	    memcpy(result + (yyvsp[(1) - (3)].data).len + 1, (yyvsp[(3) - (3)].data).str, (yyvsp[(3) - (3)].data).len);
	    (yyval.data).str = result;
	    (yyval.data).len = (yyvsp[(1) - (3)].data).len + (yyvsp[(3) - (3)].data).len + 1;
	    (yyval.data).str[(yyval.data).len] = '\0';
    }
    break;

  case 64:
#line 513 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 66:
#line 515 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 67:
#line 516 "./zparser.y"
    { zc_warning_prev_line("MD is obsolete"); }
    break;

  case 68:
#line 518 "./zparser.y"
    {
	    zc_warning_prev_line("MD is obsolete");
	    (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown));
    }
    break;

  case 69:
#line 522 "./zparser.y"
    { zc_warning_prev_line("MF is obsolete"); }
    break;

  case 70:
#line 524 "./zparser.y"
    {
	    zc_warning_prev_line("MF is obsolete");
	    (yyval.type) = (yyvsp[(1) - (3)].type);
	    parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown));
    }
    break;

  case 72:
#line 530 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 74:
#line 532 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 75:
#line 533 "./zparser.y"
    { zc_warning_prev_line("MB is obsolete"); }
    break;

  case 76:
#line 535 "./zparser.y"
    {
	    zc_warning_prev_line("MB is obsolete");
	    (yyval.type) = (yyvsp[(1) - (3)].type);
	    parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown));
    }
    break;

  case 78:
#line 541 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 80:
#line 543 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 82:
#line 546 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 84:
#line 548 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 86:
#line 550 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 88:
#line 552 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 90:
#line 554 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 92:
#line 556 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 94:
#line 558 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 96:
#line 560 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 98:
#line 562 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 100:
#line 564 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 102:
#line 566 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 104:
#line 568 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 106:
#line 570 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 108:
#line 572 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 110:
#line 574 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 112:
#line 576 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 114:
#line 578 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 116:
#line 580 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 118:
#line 582 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 120:
#line 584 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 122:
#line 586 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 124:
#line 588 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 126:
#line 590 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 128:
#line 592 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 130:
#line 594 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 132:
#line 596 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 134:
#line 598 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 137:
#line 601 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 139:
#line 603 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 140:
#line 604 "./zparser.y"
    { if (dlv_warn) { dlv_warn = 0; zc_warning_prev_line("DLV is experimental"); } }
    break;

  case 141:
#line 605 "./zparser.y"
    { if (dlv_warn) { dlv_warn = 0; zc_warning_prev_line("DLV is experimental"); } (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 143:
#line 607 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 145:
#line 609 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 147:
#line 611 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 149:
#line 613 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 151:
#line 615 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 153:
#line 617 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 155:
#line 619 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 157:
#line 621 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 159:
#line 623 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 161:
#line 625 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 163:
#line 627 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 165:
#line 629 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 167:
#line 631 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 169:
#line 633 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 171:
#line 635 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 173:
#line 637 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 175:
#line 639 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 177:
#line 641 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 179:
#line 643 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 181:
#line 645 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 182:
#line 646 "./zparser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); parse_unknown_rdata((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].unknown)); }
    break;

  case 183:
#line 648 "./zparser.y"
    {
	    zc_error_prev_line("unrecognized RR type '%s'", (yyvsp[(1) - (3)].data).str);
    }
    break;

  case 184:
#line 660 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_a(parser->region, (yyvsp[(1) - (2)].data).str));
    }
    break;

  case 185:
#line 666 "./zparser.y"
    {
	    /* convert a single dname record */
	    zadd_rdata_domain((yyvsp[(1) - (2)].domain));
    }
    break;

  case 186:
#line 673 "./zparser.y"
    {
	    /* convert the soa data */
	    zadd_rdata_domain((yyvsp[(1) - (14)].domain));	/* prim. ns */
	    zadd_rdata_domain((yyvsp[(3) - (14)].domain));	/* email */
	    zadd_rdata_wireformat(zparser_conv_serial(parser->region, (yyvsp[(5) - (14)].data).str)); /* serial */
	    zadd_rdata_wireformat(zparser_conv_period(parser->region, (yyvsp[(7) - (14)].data).str)); /* refresh */
	    zadd_rdata_wireformat(zparser_conv_period(parser->region, (yyvsp[(9) - (14)].data).str)); /* retry */
	    zadd_rdata_wireformat(zparser_conv_period(parser->region, (yyvsp[(11) - (14)].data).str)); /* expire */
	    zadd_rdata_wireformat(zparser_conv_period(parser->region, (yyvsp[(13) - (14)].data).str)); /* minimum */
    }
    break;

  case 187:
#line 686 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_a(parser->region, (yyvsp[(1) - (6)].data).str)); /* address */
	    zadd_rdata_wireformat(zparser_conv_services(parser->region, (yyvsp[(3) - (6)].data).str, (yyvsp[(5) - (6)].data).str)); /* protocol and services */
    }
    break;

  case 188:
#line 693 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(1) - (4)].data).str, (yyvsp[(1) - (4)].data).len)); /* CPU */
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(3) - (4)].data).str, (yyvsp[(3) - (4)].data).len)); /* OS*/
    }
    break;

  case 189:
#line 700 "./zparser.y"
    {
	    /* convert a single dname record */
	    zadd_rdata_domain((yyvsp[(1) - (4)].domain));
	    zadd_rdata_domain((yyvsp[(3) - (4)].domain));
    }
    break;

  case 190:
#line 708 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str));  /* priority */
	    zadd_rdata_domain((yyvsp[(3) - (4)].domain));	/* MX host */
    }
    break;

  case 191:
#line 715 "./zparser.y"
    {
	zadd_rdata_txt_clean_wireformat();
    }
    break;

  case 192:
#line 722 "./zparser.y"
    {
	    zadd_rdata_domain((yyvsp[(1) - (4)].domain)); /* mbox d-name */
	    zadd_rdata_domain((yyvsp[(3) - (4)].domain)); /* txt d-name */
    }
    break;

  case 193:
#line 730 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str)); /* subtype */
	    zadd_rdata_domain((yyvsp[(3) - (4)].domain)); /* domain name */
    }
    break;

  case 194:
#line 738 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(1) - (2)].data).str, (yyvsp[(1) - (2)].data).len)); /* X.25 address. */
    }
    break;

  case 195:
#line 745 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(1) - (2)].data).str, (yyvsp[(1) - (2)].data).len)); /* address */
    }
    break;

  case 196:
#line 749 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(1) - (4)].data).str, (yyvsp[(1) - (4)].data).len)); /* address */
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(3) - (4)].data).str, (yyvsp[(3) - (4)].data).len)); /* sub-address */
    }
    break;

  case 197:
#line 757 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str)); /* preference */
	    zadd_rdata_domain((yyvsp[(3) - (4)].domain)); /* intermediate host */
    }
    break;

  case 198:
#line 765 "./zparser.y"
    {
	    /* String must start with "0x" or "0X".	 */
	    if (strncasecmp((yyvsp[(1) - (2)].data).str, "0x", 2) != 0) {
		    zc_error_prev_line("NSAP rdata must start with '0x'");
	    } else {
		    zadd_rdata_wireformat(zparser_conv_hex(parser->region, (yyvsp[(1) - (2)].data).str + 2, (yyvsp[(1) - (2)].data).len - 2)); /* NSAP */
	    }
    }
    break;

  case 199:
#line 777 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (6)].data).str)); /* preference */
	    zadd_rdata_domain((yyvsp[(3) - (6)].domain)); /* MAP822 */
	    zadd_rdata_domain((yyvsp[(5) - (6)].domain)); /* MAPX400 */
    }
    break;

  case 200:
#line 785 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_aaaa(parser->region, (yyvsp[(1) - (2)].data).str));  /* IPv6 address */
    }
    break;

  case 201:
#line 791 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_loc(parser->region, (yyvsp[(1) - (2)].data).str)); /* Location */
    }
    break;

  case 202:
#line 797 "./zparser.y"
    {
	    zadd_rdata_domain((yyvsp[(1) - (4)].domain)); /* nxt name */
	    zadd_rdata_wireformat(zparser_conv_nxt(parser->region, nxtbits)); /* nxt bitlist */
	    memset(nxtbits, 0, sizeof(nxtbits));
    }
    break;

  case 203:
#line 805 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (8)].data).str)); /* prio */
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(3) - (8)].data).str)); /* weight */
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(5) - (8)].data).str)); /* port */
	    zadd_rdata_domain((yyvsp[(7) - (8)].domain)); /* target name */
    }
    break;

  case 204:
#line 815 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (12)].data).str)); /* order */
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(3) - (12)].data).str)); /* preference */
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(5) - (12)].data).str, (yyvsp[(5) - (12)].data).len)); /* flags */
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(7) - (12)].data).str, (yyvsp[(7) - (12)].data).len)); /* service */
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(9) - (12)].data).str, (yyvsp[(9) - (12)].data).len)); /* regexp */
	    zadd_rdata_domain((yyvsp[(11) - (12)].domain)); /* target name */
    }
    break;

  case 205:
#line 827 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str)); /* preference */
	    zadd_rdata_domain((yyvsp[(3) - (4)].domain)); /* exchanger */
    }
    break;

  case 206:
#line 835 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_certificate_type(parser->region, (yyvsp[(1) - (8)].data).str)); /* type */
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(3) - (8)].data).str)); /* key tag */
	    zadd_rdata_wireformat(zparser_conv_algorithm(parser->region, (yyvsp[(5) - (8)].data).str)); /* algorithm */
	    zadd_rdata_wireformat(zparser_conv_b64(parser->region, (yyvsp[(7) - (8)].data).str)); /* certificate or CRL */
    }
    break;

  case 208:
#line 848 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_apl_rdata(parser->region, (yyvsp[(1) - (1)].data).str));
    }
    break;

  case 209:
#line 852 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_apl_rdata(parser->region, (yyvsp[(3) - (3)].data).str));
    }
    break;

  case 210:
#line 858 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (8)].data).str)); /* keytag */
	    zadd_rdata_wireformat(zparser_conv_algorithm(parser->region, (yyvsp[(3) - (8)].data).str)); /* alg */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(5) - (8)].data).str)); /* type */
	    zadd_rdata_wireformat(zparser_conv_hex(parser->region, (yyvsp[(7) - (8)].data).str, (yyvsp[(7) - (8)].data).len)); /* hash */
    }
    break;

  case 211:
#line 867 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (8)].data).str)); /* keytag */
	    zadd_rdata_wireformat(zparser_conv_algorithm(parser->region, (yyvsp[(3) - (8)].data).str)); /* alg */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(5) - (8)].data).str)); /* type */
	    zadd_rdata_wireformat(zparser_conv_hex(parser->region, (yyvsp[(7) - (8)].data).str, (yyvsp[(7) - (8)].data).len)); /* hash */
    }
    break;

  case 212:
#line 876 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(1) - (6)].data).str)); /* alg */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(3) - (6)].data).str)); /* fp type */
	    zadd_rdata_wireformat(zparser_conv_hex(parser->region, (yyvsp[(5) - (6)].data).str, (yyvsp[(5) - (6)].data).len)); /* hash */
    }
    break;

  case 213:
#line 884 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_b64(parser->region, (yyvsp[(1) - (2)].data).str)); /* data blob */
    }
    break;

  case 214:
#line 890 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_rrtype(parser->region, (yyvsp[(1) - (18)].data).str)); /* rr covered */
	    zadd_rdata_wireformat(zparser_conv_algorithm(parser->region, (yyvsp[(3) - (18)].data).str)); /* alg */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(5) - (18)].data).str)); /* # labels */
	    zadd_rdata_wireformat(zparser_conv_period(parser->region, (yyvsp[(7) - (18)].data).str)); /* # orig TTL */
	    zadd_rdata_wireformat(zparser_conv_time(parser->region, (yyvsp[(9) - (18)].data).str)); /* sig exp */
	    zadd_rdata_wireformat(zparser_conv_time(parser->region, (yyvsp[(11) - (18)].data).str)); /* sig inc */
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(13) - (18)].data).str)); /* key id */
	    zadd_rdata_wireformat(zparser_conv_dns_name(parser->region, 
				(const uint8_t*) (yyvsp[(15) - (18)].data).str,(yyvsp[(15) - (18)].data).len)); /* sig name */
	    zadd_rdata_wireformat(zparser_conv_b64(parser->region, (yyvsp[(17) - (18)].data).str)); /* sig data */
    }
    break;

  case 215:
#line 905 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_dns_name(parser->region, 
				(const uint8_t*) (yyvsp[(1) - (2)].data).str, (yyvsp[(1) - (2)].data).len)); /* nsec name */
	    zadd_rdata_wireformat(zparser_conv_nsec(parser->region, nsecbits)); /* nsec bitlist */
	    memset(nsecbits, 0, sizeof(nsecbits));
            nsec_highest_rcode = 0;
    }
    break;

  case 216:
#line 915 "./zparser.y"
    {
#ifdef NSEC3
	    nsec3_add_params((yyvsp[(1) - (10)].data).str, (yyvsp[(3) - (10)].data).str, (yyvsp[(5) - (10)].data).str, (yyvsp[(7) - (10)].data).str, (yyvsp[(7) - (10)].data).len);

	    zadd_rdata_wireformat(zparser_conv_b32(parser->region, (yyvsp[(9) - (10)].data).str)); /* next hashed name */
	    zadd_rdata_wireformat(zparser_conv_nsec(parser->region, nsecbits)); /* nsec bitlist */
	    memset(nsecbits, 0, sizeof(nsecbits));
	    nsec_highest_rcode = 0;
#else
	    zc_error_prev_line("nsec3 not supported");
#endif /* NSEC3 */
    }
    break;

  case 217:
#line 930 "./zparser.y"
    {
#ifdef NSEC3
	    nsec3_add_params((yyvsp[(1) - (8)].data).str, (yyvsp[(3) - (8)].data).str, (yyvsp[(5) - (8)].data).str, (yyvsp[(7) - (8)].data).str, (yyvsp[(7) - (8)].data).len);
#else
	    zc_error_prev_line("nsec3 not supported");
#endif /* NSEC3 */
    }
    break;

  case 218:
#line 940 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(1) - (8)].data).str)); /* usage */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(3) - (8)].data).str)); /* selector */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(5) - (8)].data).str)); /* matching type */
	    zadd_rdata_wireformat(zparser_conv_hex(parser->region, (yyvsp[(7) - (8)].data).str, (yyvsp[(7) - (8)].data).len)); /* ca data */
    }
    break;

  case 219:
#line 949 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (8)].data).str)); /* flags */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(3) - (8)].data).str)); /* proto */
	    zadd_rdata_wireformat(zparser_conv_algorithm(parser->region, (yyvsp[(5) - (8)].data).str)); /* alg */
	    zadd_rdata_wireformat(zparser_conv_b64(parser->region, (yyvsp[(7) - (8)].data).str)); /* hash */
    }
    break;

  case 220:
#line 958 "./zparser.y"
    {
	    const dname_type* name = 0;
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(1) - (7)].data).str)); /* precedence */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(3) - (7)].data).str)); /* gateway type */
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(5) - (7)].data).str)); /* algorithm */
	    switch(atoi((yyvsp[(3) - (7)].data).str)) {
		case IPSECKEY_NOGATEWAY: 
			zadd_rdata_wireformat(alloc_rdata_init(parser->region, "", 0));
			break;
		case IPSECKEY_IP4:
			zadd_rdata_wireformat(zparser_conv_a(parser->region, (yyvsp[(7) - (7)].data).str));
			break;
		case IPSECKEY_IP6:
			zadd_rdata_wireformat(zparser_conv_aaaa(parser->region, (yyvsp[(7) - (7)].data).str));
			break;
		case IPSECKEY_DNAME:
			/* convert and insert the dname */
			if(strlen((yyvsp[(7) - (7)].data).str) == 0)
				zc_error_prev_line("IPSECKEY must specify gateway name");
			if(!(name = dname_parse(parser->region, (yyvsp[(7) - (7)].data).str)))
				zc_error_prev_line("IPSECKEY bad gateway dname %s", (yyvsp[(7) - (7)].data).str);
			if((yyvsp[(7) - (7)].data).str[strlen((yyvsp[(7) - (7)].data).str)-1] != '.') {
				if(parser->origin == error_domain) {
		    			zc_error("cannot concatenate origin to domain name, because origin failed to parse");
					break;
				}
				name = dname_concatenate(parser->rr_region, name, 
					domain_dname(parser->origin));
			}
			zadd_rdata_wireformat(alloc_rdata_init(parser->region,
				dname_name(name), name->name_size));
			break;
		default:
			zc_error_prev_line("unknown IPSECKEY gateway type");
	    }
    }
    break;

  case 221:
#line 997 "./zparser.y"
    {
	   zadd_rdata_wireformat(zparser_conv_b64(parser->region, (yyvsp[(3) - (4)].data).str)); /* public key */
    }
    break;

  case 223:
#line 1005 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str));  /* preference */
	    zadd_rdata_wireformat(zparser_conv_ilnp64(parser->region, (yyvsp[(3) - (4)].data).str));  /* NodeID */
    }
    break;

  case 224:
#line 1012 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str));  /* preference */
	    zadd_rdata_wireformat(zparser_conv_a(parser->region, (yyvsp[(3) - (4)].data).str));  /* Locator32 */
    }
    break;

  case 225:
#line 1019 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str));  /* preference */
	    zadd_rdata_wireformat(zparser_conv_ilnp64(parser->region, (yyvsp[(3) - (4)].data).str));  /* Locator64 */
    }
    break;

  case 226:
#line 1026 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (4)].data).str));  /* preference */
	    zadd_rdata_domain((yyvsp[(3) - (4)].domain));  /* FQDN */
    }
    break;

  case 227:
#line 1033 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_eui(parser->region, (yyvsp[(1) - (2)].data).str, 48));
    }
    break;

  case 228:
#line 1039 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_eui(parser->region, (yyvsp[(1) - (2)].data).str, 64));
    }
    break;

  case 229:
#line 1046 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (6)].data).str)); /* priority */
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(3) - (6)].data).str)); /* weight */
	    zadd_rdata_wireformat(zparser_conv_long_text(parser->region, (yyvsp[(5) - (6)].data).str, (yyvsp[(5) - (6)].data).len)); /* target */
    }
    break;

  case 230:
#line 1055 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_byte(parser->region, (yyvsp[(1) - (6)].data).str)); /* Flags */
	    zadd_rdata_wireformat(zparser_conv_tag(parser->region, (yyvsp[(3) - (6)].data).str, (yyvsp[(3) - (6)].data).len)); /* Tag */
	    zadd_rdata_wireformat(zparser_conv_long_text(parser->region, (yyvsp[(5) - (6)].data).str, (yyvsp[(5) - (6)].data).len)); /* Value */
    }
    break;

  case 231:
#line 1064 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_b64(parser->region, (yyvsp[(1) - (2)].data).str));
    }
    break;

  case 232:
#line 1071 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_serial(parser->region, (yyvsp[(1) - (4)].data).str));
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(3) - (4)].data).str));
	    zadd_rdata_wireformat(zparser_conv_nsec(parser->region, nsecbits)); /* nsec bitlist */
	    memset(nsecbits, 0, sizeof(nsecbits));
            nsec_highest_rcode = 0;
    }
    break;

  case 233:
#line 1081 "./zparser.y"
    {
	    zadd_rdata_wireformat(zparser_conv_short(parser->region, (yyvsp[(1) - (6)].data).str)); /* # weight */
	    zadd_rdata_wireformat(zparser_conv_text(parser->region, (yyvsp[(3) - (6)].data).str, (yyvsp[(3) - (6)].data).len)); /* geocode */
	    zadd_rdata_domain((yyvsp[(5) - (6)].domain));
	}
    break;

  case 234:
#line 1088 "./zparser.y"
    {
	    /* $2 is the number of octets, currently ignored */
	    (yyval.unknown) = zparser_conv_hex(parser->region, (yyvsp[(5) - (6)].data).str, (yyvsp[(5) - (6)].data).len);

    }
    break;

  case 235:
#line 1094 "./zparser.y"
    {
	    (yyval.unknown) = zparser_conv_hex(parser->region, "", 0);
    }
    break;

  case 236:
#line 1098 "./zparser.y"
    {
	    (yyval.unknown) = zparser_conv_hex(parser->region, "", 0);
    }
    break;


/* Line 1267 of yacc.c.  */
#line 3418 "zparser.c"
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
		      yytoken, &yylval);
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 1102 "./zparser.y"


int
yywrap(void)
{
	return 1;
}

/*
 * Create the parser.
 */
zparser_type *
zparser_create(region_type *region, region_type *rr_region, namedb_type *db)
{
	zparser_type *result;

	result = (zparser_type *) region_alloc(region, sizeof(zparser_type));
	result->region = region;
	result->rr_region = rr_region;
	result->db = db;

	result->filename = NULL;
	result->current_zone = NULL;
	result->origin = NULL;
	result->prev_dname = NULL;
	result->default_apex = NULL;

	result->temporary_rdatas = (rdata_atom_type *) region_alloc_array(
		result->region, MAXRDATALEN, sizeof(rdata_atom_type));

	return result;
}

/*
 * Initialize the parser for a new zone file.
 */
void
zparser_init(const char *filename, uint32_t ttl, uint16_t klass,
	     const dname_type *origin)
{
	memset(nxtbits, 0, sizeof(nxtbits));
	memset(nsecbits, 0, sizeof(nsecbits));
        nsec_highest_rcode = 0;

	parser->default_ttl = ttl;
	parser->default_class = klass;
	parser->current_zone = NULL;
	parser->origin = domain_table_insert(parser->db->domains, origin);
	parser->prev_dname = parser->origin;
	parser->default_apex = parser->origin;
	parser->error_occurred = 0;
	parser->errors = 0;
	parser->line = 1;
	parser->filename = filename;
	parser->current_rr.rdata_count = 0;
	parser->current_rr.rdatas = parser->temporary_rdatas;
}

void
yyerror(const char *message)
{
	zc_error("%s", message);
}

static void
error_va_list(unsigned line, const char *fmt, va_list args)
{
	if (parser->filename) {
		char message[MAXSYSLOGMSGLEN];
		vsnprintf(message, sizeof(message), fmt, args);
		log_msg(LOG_ERR, "%s:%u: %s", parser->filename, line, message);
	}
	else log_vmsg(LOG_ERR, fmt, args);

	++parser->errors;
	parser->error_occurred = 1;
}

/* the line counting sux, to say the least
 * with this grose hack we try do give sane
 * numbers back */
void
zc_error_prev_line(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	error_va_list(parser->line - 1, fmt, args);
	va_end(args);
}

void
zc_error(const char *fmt, ...)
{
	/* send an error message to stderr */
	va_list args;
	va_start(args, fmt);
	error_va_list(parser->line, fmt, args);
	va_end(args);
}

static void
warning_va_list(unsigned line, const char *fmt, va_list args)
{
	if (parser->filename) {
		char m[MAXSYSLOGMSGLEN];
		vsnprintf(m, sizeof(m), fmt, args);
		log_msg(LOG_WARNING, "%s:%u: %s", parser->filename, line, m);
	}
	else log_vmsg(LOG_WARNING, fmt, args);
}

void
zc_warning_prev_line(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	warning_va_list(parser->line - 1, fmt, args);
	va_end(args);
}

void
zc_warning(const char *fmt, ... )
{
	va_list args;
	va_start(args, fmt);
	warning_va_list(parser->line, fmt, args);
	va_end(args);
}

#ifdef NSEC3
static void
nsec3_add_params(const char* hashalgo_str, const char* flag_str,
	const char* iter_str, const char* salt_str, int salt_len)
{
	zadd_rdata_wireformat(zparser_conv_byte(parser->region, hashalgo_str));
	zadd_rdata_wireformat(zparser_conv_byte(parser->region, flag_str));
	zadd_rdata_wireformat(zparser_conv_short(parser->region, iter_str));

	/* salt */
	if(strcmp(salt_str, "-") != 0) 
		zadd_rdata_wireformat(zparser_conv_hex_length(parser->region, 
			salt_str, salt_len)); 
	else 
		zadd_rdata_wireformat(alloc_rdata_init(parser->region, "", 1));
}
#endif /* NSEC3 */

