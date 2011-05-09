#define YY_parse_h_included

/*  A Bison++ parser, made from parse.y  */

 /* with Bison++ version bison++ Version 1.21-7, adapted from GNU bison by coetmeur@icdc.fr
  */


#line 1 "/u/icdc/rdt/tools/lib/bison.cc"
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* HEADER SECTION */
#ifndef _MSDOS
#ifdef MSDOS
#define _MSDOS
#endif
#endif
/* turboc */
#ifdef __MSDOS__
#ifndef _MSDOS
#define _MSDOS
#endif
#endif

#ifndef alloca
#if defined( __GNUC__)
#define alloca __builtin_alloca

#elif (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc)  || defined (__sgi)
#include <alloca.h>

#elif defined (_MSDOS)
#include <malloc.h>
#ifndef __TURBOC__
/* MS C runtime lib */
#define alloca _alloca
#endif

#elif defined(_AIX)
#include <malloc.h>
#pragma alloca

#elif defined(__hpux)
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */

#endif /* not _AIX  not MSDOS, or __TURBOC__ or _AIX, not sparc.  */
#endif /* alloca not defined.  */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif
#ifdef __cplusplus
#ifndef YY_USE_CLASS
#define YY_USE_CLASS
#endif
#else
#ifndef __STDC__
#define const
#endif
#endif
#include <stdio.h>
#define YYBISON 1  

/* #line 77 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 89 "y.tab.c"
#line 6 "parse.y"

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef lint
static char rcsid[] =
    "@(#) $Header: /usr/fsys/odin/a/vern/flex/RCS/parse.y,v 2.7 90/06/27 23:48:31 vern Exp $ (LBL)";
#endif

#include "flexdef.h"
void yyerror();
void build_eof_action();

int pat, scnum, eps, headcnt, trailcnt, anyccl, lastchar, i, actvp, rulelen;
int trlcontxt, xcluflg, cclsorted, varlength, variable_trail_rule;
Char clower();

static int madeany = false;  /* whether we've made the '.' character class */
int previous_continued_action;	/* whether the previous rule's action was '|' */


#line 77 "/u/icdc/rdt/tools/lib/bison.cc"
/* %{ and %header{ and %union, during decl */
#define YY_parse_BISON 1
#ifndef YY_parse_COMPATIBILITY
#ifndef YY_USE_CLASS
#define  YY_parse_COMPATIBILITY 1
#else
#define  YY_parse_COMPATIBILITY 0
#endif
#endif

#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
#ifdef YYLTYPE
#ifndef YY_parse_LTYPE
#define YY_parse_LTYPE YYLTYPE
#endif
#endif
#ifdef YYSTYPE
#ifndef YY_parse_STYPE 
#define YY_parse_STYPE YYSTYPE
#endif
#endif
#ifdef YYDEBUG
#ifndef YY_parse_DEBUG
#define  YY_parse_DEBUG YYDEBUG
#endif
#endif
#ifdef YY_parse_STYPE
#ifndef yystype
#define yystype YY_parse_STYPE
#endif
#endif
/* use goto to be compatible */
#ifndef YY_parse_USE_GOTO
#define YY_parse_USE_GOTO 1
#endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_parse_USE_GOTO
#define YY_parse_USE_GOTO 0
#endif

#ifndef YY_parse_PURE

/* #line 121 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 182 "y.tab.c"

#line 121 "/u/icdc/rdt/tools/lib/bison.cc"
/*  YY_parse_PURE */
#endif

/* section apres lecture def, avant lecture grammaire S2 */

/* #line 125 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 191 "y.tab.c"

#line 125 "/u/icdc/rdt/tools/lib/bison.cc"
/* prefix */
#ifndef YY_parse_DEBUG

/* #line 127 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 198 "y.tab.c"

#line 127 "/u/icdc/rdt/tools/lib/bison.cc"
/* YY_parse_DEBUG */
#endif


#ifndef YY_parse_LSP_NEEDED

/* #line 132 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 208 "y.tab.c"

#line 132 "/u/icdc/rdt/tools/lib/bison.cc"
 /* YY_parse_LSP_NEEDED*/
#endif



/* DEFAULT LTYPE*/
#ifdef YY_parse_LSP_NEEDED
#ifndef YY_parse_LTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YY_parse_LTYPE yyltype
#endif
#endif
/* DEFAULT STYPE*/
      /* We used to use `unsigned long' as YY_parse_STYPE on MSDOS,
	 but it seems better to be consistent.
	 Most programs should declare their own type anyway.  */

#ifndef YY_parse_STYPE
#define YY_parse_STYPE int
#endif
/* DEFAULT MISCELANEOUS */
#ifndef YY_parse_PARSE
#define YY_parse_PARSE yyparse
#endif
#ifndef YY_parse_LEX
#define YY_parse_LEX yylex
#endif
#ifndef YY_parse_LVAL
#define YY_parse_LVAL yylval
#endif
#ifndef YY_parse_LLOC
#define YY_parse_LLOC yylloc
#endif
#ifndef YY_parse_CHAR
#define YY_parse_CHAR yychar
#endif
#ifndef YY_parse_NERRS
#define YY_parse_NERRS yynerrs
#endif
#ifndef YY_parse_DEBUG_FLAG
#define YY_parse_DEBUG_FLAG yydebug
#endif
#ifndef YY_parse_ERROR
#define YY_parse_ERROR yyerror
#endif
#ifndef YY_parse_PARSE_PARAM
#ifndef __STDC__
#ifndef __cplusplus
#ifndef YY_USE_CLASS
#define YY_parse_PARSE_PARAM
#ifndef YY_parse_PARSE_PARAM_DEF
#define YY_parse_PARSE_PARAM_DEF
#endif
#endif
#endif
#endif
#ifndef YY_parse_PARSE_PARAM
#define YY_parse_PARSE_PARAM void
#endif
#endif
#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
#ifdef YY_parse_LTYPE
#ifndef YYLTYPE
#define YYLTYPE YY_parse_LTYPE
#else
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
#endif
#endif
#ifndef YYSTYPE
#define YYSTYPE YY_parse_STYPE
#else
/* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
#endif
#ifdef YY_parse_PURE
#ifndef YYPURE
#define YYPURE YY_parse_PURE
#endif
#endif
#ifdef YY_parse_DEBUG
#ifndef YYDEBUG
#define YYDEBUG YY_parse_DEBUG 
#endif
#endif
#ifndef YY_parse_ERROR_VERBOSE
#ifdef YYERROR_VERBOSE
#define YY_parse_ERROR_VERBOSE YYERROR_VERBOSE
#endif
#endif
#ifndef YY_parse_LSP_NEEDED
#ifdef YYLSP_NEEDED
#define YY_parse_LSP_NEEDED YYLSP_NEEDED
#endif
#endif
#endif
#ifndef YY_USE_CLASS
/* TOKEN C */

/* #line 240 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 321 "y.tab.c"
#define	CHAR	258
#define	NUMBER	259
#define	SECTEND	260
#define	SCDECL	261
#define	XSCDECL	262
#define	WHITESPACE	263
#define	NAME	264
#define	PREVCCL	265
#define	EOF_OP	266


#line 240 "/u/icdc/rdt/tools/lib/bison.cc"
 /* #defines tokens */
#else
/* CLASS */
#ifndef YY_parse_CLASS
#define YY_parse_CLASS parse
#endif
#ifndef YY_parse_INHERIT
#define YY_parse_INHERIT
#endif
#ifndef YY_parse_MEMBERS
#define YY_parse_MEMBERS 
#endif
#ifndef YY_parse_LEX_BODY
#define YY_parse_LEX_BODY  
#endif
#ifndef YY_parse_ERROR_BODY
#define YY_parse_ERROR_BODY  
#endif
#ifndef YY_parse_CONSTRUCTOR_PARAM
#define YY_parse_CONSTRUCTOR_PARAM
#endif
#ifndef YY_parse_CONSTRUCTOR_CODE
#define YY_parse_CONSTRUCTOR_CODE
#endif
#ifndef YY_parse_CONSTRUCTOR_INIT
#define YY_parse_CONSTRUCTOR_INIT
#endif
/* choose between enum and const */
#ifndef YY_parse_USE_CONST_TOKEN
#define YY_parse_USE_CONST_TOKEN 0
/* yes enum is more compatible with flex,  */
/* so by default we use it */ 
#endif
#if YY_parse_USE_CONST_TOKEN != 0
#ifndef YY_parse_ENUM_TOKEN
#define YY_parse_ENUM_TOKEN yy_parse_enum_token
#endif
#endif

class YY_parse_CLASS YY_parse_INHERIT
{
public: 
#if YY_parse_USE_CONST_TOKEN != 0
/* static const int token ... */

/* #line 284 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 380 "y.tab.c"
static const int CHAR;
static const int NUMBER;
static const int SECTEND;
static const int SCDECL;
static const int XSCDECL;
static const int WHITESPACE;
static const int NAME;
static const int PREVCCL;
static const int EOF_OP;


#line 284 "/u/icdc/rdt/tools/lib/bison.cc"
 /* decl const */
#else
enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0

/* #line 287 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 398 "y.tab.c"
	,CHAR=258
	,NUMBER=259
	,SECTEND=260
	,SCDECL=261
	,XSCDECL=262
	,WHITESPACE=263
	,NAME=264
	,PREVCCL=265
	,EOF_OP=266


#line 287 "/u/icdc/rdt/tools/lib/bison.cc"
 /* enum token */
     }; /* end of enum declaration */
#endif
public:
 int YY_parse_PARSE (YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
#ifdef YY_parse_PURE
#ifdef YY_parse_LSP_NEEDED
 virtual int  YY_parse_LEX (YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
#else
 virtual int  YY_parse_LEX (YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
#endif
#else
 virtual int YY_parse_LEX() YY_parse_LEX_BODY;
 YY_parse_STYPE YY_parse_LVAL;
#ifdef YY_parse_LSP_NEEDED
 YY_parse_LTYPE YY_parse_LLOC;
#endif
 int   YY_parse_NERRS;
 int    YY_parse_CHAR;
#endif
#if YY_parse_DEBUG != 0
 int YY_parse_DEBUG_FLAG;   /*  nonzero means print parse trace     */
#endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#if YY_parse_USE_CONST_TOKEN != 0

/* #line 318 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 444 "y.tab.c"
const int YY_parse_CLASS::CHAR=258;
const int YY_parse_CLASS::NUMBER=259;
const int YY_parse_CLASS::SECTEND=260;
const int YY_parse_CLASS::SCDECL=261;
const int YY_parse_CLASS::XSCDECL=262;
const int YY_parse_CLASS::WHITESPACE=263;
const int YY_parse_CLASS::NAME=264;
const int YY_parse_CLASS::PREVCCL=265;
const int YY_parse_CLASS::EOF_OP=266;


#line 318 "/u/icdc/rdt/tools/lib/bison.cc"
 /* const YY_parse_CLASS::token */
#endif
/*apres const  */
YY_parse_CLASS::YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM) YY_parse_CONSTRUCTOR_INIT
{
#if YY_parse_DEBUG != 0
YY_parse_DEBUG_FLAG=0;
#endif
YY_parse_CONSTRUCTOR_CODE;
};
#endif

/* #line 329 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 470 "y.tab.c"


#define	YYFINAL		81
#define	YYFLAG		-32768
#define	YYNTBASE	32

#define YYTRANSLATE(x) ((unsigned)(x) <= 266 ? yytranslate[x] : 51)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    12,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    26,     2,    17,     2,     2,     2,    27,
    28,    20,    21,    16,    31,    25,    19,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    14,
     2,    15,    22,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    29,     2,    30,    13,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    23,    18,    24,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11
};

#if YY_parse_DEBUG != 0
static const short yyprhs[] = {     0,
     0,     6,     7,    13,    14,    17,    19,    21,    23,    27,
    29,    31,    36,    37,    38,    42,    45,    48,    50,    53,
    55,    57,    61,    65,    67,    69,    72,    76,    79,    81,
    85,    87,    90,    93,    95,    98,   101,   104,   111,   117,
   122,   124,   126,   128,   132,   136,   138,   142,   147,   152,
   155,   156,   159
};

static const short yyrhs[] = {    33,
    34,    35,    38,    39,     0,     0,    34,    36,     8,    37,
    12,     0,     0,     1,    12,     0,     5,     0,     6,     0,
     7,     0,    37,     8,     9,     0,     9,     0,     1,     0,
    38,    39,    40,    12,     0,     0,     0,    41,    13,    43,
     0,    41,    43,     0,    13,    43,     0,    43,     0,    41,
    11,     0,    11,     0,     1,     0,    14,    42,    15,     0,
    42,    16,     9,     0,     9,     0,     1,     0,    45,    44,
     0,    45,    44,    17,     0,    44,    17,     0,    44,     0,
    44,    18,    46,     0,    46,     0,    44,    19,     0,    46,
    47,     0,    47,     0,    47,    20,     0,    47,    21,     0,
    47,    22,     0,    47,    23,     4,    16,     4,    24,     0,
    47,    23,     4,    16,    24,     0,    47,    23,     4,    24,
     0,    25,     0,    48,     0,    10,     0,    26,    50,    26,
     0,    27,    44,    28,     0,     3,     0,    29,    49,    30,
     0,    29,    13,    49,    30,     0,    49,     3,    31,     3,
     0,    49,     3,     0,     0,    50,     3,     0,     0
};

#endif

#if YY_parse_DEBUG != 0
static const short yyrline[] = { 0,
    52,    76,    85,    86,    87,    91,    94,   104,   108,   111,
   114,   118,   119,   122,   133,   153,   164,   188,   199,   202,
   221,   225,   228,   238,   247,   251,   308,   311,   363,   379,
   385,   390,   415,   423,   427,   434,   441,   448,   474,   488,
   506,   528,   545,   552,   555,   558,   569,   572,   586,   614,
   626,   634,   645
};

static const char * const yytname[] = {   "$","error","$illegal.","CHAR","NUMBER",
"SECTEND","SCDECL","XSCDECL","WHITESPACE","NAME","PREVCCL","EOF_OP","'\\n'",
"'^'","'<'","'>'","','","'$'","'|'","'/'","'*'","'+'","'?'","'{'","'}'","'.'",
"'\"'","'('","')'","'['","']'","'-'","goal","initlex","sect1","sect1end","startconddecl",
"namelist1","sect2","initforrule","flexrule","scon","namelist2","rule","re",
"re2","series","singleton","fullccl","ccl","string",""
};
#endif

static const short yyr1[] = {     0,
    32,    33,    34,    34,    34,    35,    36,    36,    37,    37,
    37,    38,    38,    39,    40,    40,    40,    40,    40,    40,
    40,    41,    42,    42,    42,    43,    43,    43,    43,    44,
    44,    45,    46,    46,    47,    47,    47,    47,    47,    47,
    47,    47,    47,    47,    47,    47,    48,    48,    49,    49,
    49,    50,    50
};

static const short yyr2[] = {     0,
     5,     0,     5,     0,     2,     1,     1,     1,     3,     1,
     1,     4,     0,     0,     3,     2,     2,     1,     2,     1,
     1,     3,     3,     1,     1,     2,     3,     2,     1,     3,
     1,     2,     2,     1,     2,     2,     2,     6,     5,     4,
     1,     1,     1,     3,     3,     1,     3,     4,     4,     2,
     0,     2,     0
};

static const short yydefact[] = {     2,
     0,     0,     0,     5,     6,     7,     8,    13,     0,    14,
     0,     0,    11,    10,     0,    21,    46,    43,    20,     0,
     0,    41,    53,     0,    51,     0,     0,    18,    29,     0,
    31,    34,    42,     0,     3,    17,    25,    24,     0,     0,
     0,    51,     0,    12,    19,     0,    16,    28,     0,    32,
    26,    33,    35,    36,    37,     0,     9,    22,     0,    52,
    44,    45,     0,    50,    47,    15,    30,    27,     0,    23,
    48,     0,     0,    40,    49,     0,    39,    38,     0,     0,
     0
};

static const short yydefgoto[] = {    79,
     1,     3,     8,     9,    15,    10,    12,    26,    27,    39,
    28,    29,    30,    31,    32,    33,    43,    40
};

static const short yypact[] = {-32768,
    55,    -2,    63,-32768,-32768,-32768,-32768,-32768,    16,-32768,
    12,     1,-32768,-32768,    51,-32768,-32768,-32768,-32768,    19,
    33,-32768,-32768,    19,    -6,     8,    28,-32768,    54,    19,
    19,    44,-32768,    38,-32768,-32768,-32768,-32768,    34,    14,
   -10,-32768,     2,-32768,-32768,    19,-32768,-32768,    19,-32768,
    57,    44,-32768,-32768,-32768,    48,-32768,-32768,    49,-32768,
-32768,-32768,     3,     6,-32768,-32768,    19,-32768,    27,-32768,
-32768,    73,    -1,-32768,-32768,    53,-32768,-32768,    78,    79,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -11,    -5,-32768,    31,   -31,-32768,    39,-32768
};


#define	YYLAST		81


static const short yytable[] = {    52,
    -1,    16,    76,    17,    64,    64,    42,    49,    36,     4,
    18,    19,    13,    20,    21,    47,    60,    62,    41,    44,
    14,    17,    77,    11,    51,    22,    23,    24,    18,    25,
    17,    65,    71,    37,    66,    52,    72,    18,    45,    61,
    46,    38,    73,    22,    23,    24,    57,    25,    58,    59,
    74,    69,    22,    23,    24,     2,    25,    70,    34,    -4,
    -4,    -4,    35,    53,    54,    55,    56,     5,     6,     7,
    48,    49,    50,    68,    49,    75,    78,    80,    81,    67,
    63
};

static const short yycheck[] = {    31,
     0,     1,     4,     3,     3,     3,    13,    18,    20,    12,
    10,    11,     1,    13,    14,    27,     3,    28,    24,    12,
     9,     3,    24,     8,    30,    25,    26,    27,    10,    29,
     3,    30,    30,     1,    46,    67,    31,    10,    11,    26,
    13,     9,    16,    25,    26,    27,     9,    29,    15,    16,
    24,     4,    25,    26,    27,     1,    29,     9,     8,     5,
     6,     7,    12,    20,    21,    22,    23,     5,     6,     7,
    17,    18,    19,    17,    18,     3,    24,     0,     0,    49,
    42
};

#line 329 "/u/icdc/rdt/tools/lib/bison.cc"
 /* fattrs + tables */

/* parser code folow  */


/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: dollar marks section change
   the next  is replaced by the list of actions, each action
   as one case of the switch.  */ 

#if YY_parse_USE_GOTO != 0
/* 
 SUPRESSION OF GOTO : on some C++ compiler (sun c++)
  the goto is strictly forbidden if any constructor/destructor
  is used in the whole function (very stupid isn't it ?)
 so goto are to be replaced with a 'while/switch/case construct'
 here are the macro to keep some apparent compatibility
*/
#define YYGOTO(lb) {yy_gotostate=lb;continue;}
#define YYBEGINGOTO  enum yy_labels yy_gotostate=yygotostart; \
                     for(;;) switch(yy_gotostate) { case yygotostart: {
#define YYLABEL(lb) } case lb: {
#define YYENDGOTO } } 
#define YYBEGINDECLARELABEL enum yy_labels {yygotostart
#define YYDECLARELABEL(lb) ,lb
#define YYENDDECLARELABEL  };
#else
/* macro to keep goto */
#define YYGOTO(lb) goto lb
#define YYBEGINGOTO 
#define YYLABEL(lb) lb:
#define YYENDGOTO
#define YYBEGINDECLARELABEL 
#define YYDECLARELABEL(lb)
#define YYENDDECLARELABEL 
#endif
/* LABEL DECLARATION */
YYBEGINDECLARELABEL
  YYDECLARELABEL(yynewstate)
  YYDECLARELABEL(yybackup)
/* YYDECLARELABEL(yyresume) */
  YYDECLARELABEL(yydefault)
  YYDECLARELABEL(yyreduce)
  YYDECLARELABEL(yyerrlab)   /* here on detecting error */
  YYDECLARELABEL(yyerrlab1)   /* here on error raised explicitly by an action */
  YYDECLARELABEL(yyerrdefault)  /* current state does not do anything special for the error token. */
  YYDECLARELABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */
  YYDECLARELABEL(yyerrhandle)  
YYENDDECLARELABEL

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (YY_parse_CHAR = YYEMPTY)
#define YYEMPTY         -2
#define YYEOF           0
#define YYACCEPT        return(0)
#define YYABORT         return(1)
#define YYERROR         YYGOTO(yyerrlab1)
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL          YYGOTO(yyerrlab)
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do                                                              \
  if (YY_parse_CHAR == YYEMPTY && yylen == 1)                               \
    { YY_parse_CHAR = (token), YY_parse_LVAL = (value);                 \
      yychar1 = YYTRANSLATE (YY_parse_CHAR);                                \
      YYPOPSTACK;                                               \
      YYGOTO(yybackup);                                            \
    }                                                           \
  else                                                          \
    { YY_parse_ERROR ("syntax error: cannot back up"); YYERROR; }   \
while (0)

#define YYTERROR        1
#define YYERRCODE       256

#ifndef YY_parse_PURE
/* UNPURE */
#define YYLEX           YY_parse_LEX()
#ifndef YY_USE_CLASS
/* If nonreentrant, and not class , generate the variables here */
int     YY_parse_CHAR;                      /*  the lookahead symbol        */
YY_parse_STYPE      YY_parse_LVAL;              /*  the semantic value of the */
				/*  lookahead symbol    */
int YY_parse_NERRS;                 /*  number of parse errors so far */
#ifdef YY_parse_LSP_NEEDED
YY_parse_LTYPE YY_parse_LLOC;   /*  location data for the lookahead     */
			/*  symbol                              */
#endif
#endif


#else
/* PURE */
#ifdef YY_parse_LSP_NEEDED
#define YYLEX           YY_parse_LEX(&YY_parse_LVAL, &YY_parse_LLOC)
#else
#define YYLEX           YY_parse_LEX(&YY_parse_LVAL)
#endif
#endif
#ifndef YY_USE_CLASS
#if YY_parse_DEBUG != 0
int YY_parse_DEBUG_FLAG;                    /*  nonzero means print parse trace     */
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif
#endif



/*  YYINITDEPTH indicates the initial size of the parser's stacks       */

#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif


#if __GNUC__ > 1                /* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)       __builtin_memcpy(TO,FROM,COUNT)
#else                           /* not GNU C or C++ */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */

#ifdef __cplusplus
static void __yy_bcopy (char *from, char *to, int count)
#else
#ifdef __STDC__
static void __yy_bcopy (char *from, char *to, int count)
#else
static void __yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
#endif
#endif
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}
#endif

int
#ifdef YY_USE_CLASS
 YY_parse_CLASS::
#endif
     YY_parse_PARSE(YY_parse_PARSE_PARAM)
#ifndef __STDC__
#ifndef __cplusplus
#ifndef YY_USE_CLASS
/* parameter definition without protypes */
YY_parse_PARSE_PARAM_DEF
#endif
#endif
#endif
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YY_parse_STYPE *yyvsp;
  int yyerrstatus;      /*  number of tokens to shift before error messages enabled */
  int yychar1=0;          /*  lookahead token as an internal (translated) token number */

  short yyssa[YYINITDEPTH];     /*  the state stack                     */
  YY_parse_STYPE yyvsa[YYINITDEPTH];        /*  the semantic value stack            */

  short *yyss = yyssa;          /*  refer to the stacks thru separate pointers */
  YY_parse_STYPE *yyvs = yyvsa;     /*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YY_parse_LSP_NEEDED
  YY_parse_LTYPE yylsa[YYINITDEPTH];        /*  the location stack                  */
  YY_parse_LTYPE *yyls = yylsa;
  YY_parse_LTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YY_parse_PURE
  int YY_parse_CHAR;
  YY_parse_STYPE YY_parse_LVAL;
  int YY_parse_NERRS;
#ifdef YY_parse_LSP_NEEDED
  YY_parse_LTYPE YY_parse_LLOC;
#endif
#endif

  YY_parse_STYPE yyval;             /*  the variable used to return         */
				/*  semantic values from the action     */
				/*  routines                            */

  int yylen;
/* start loop, in which YYGOTO may be used. */
YYBEGINGOTO

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Starting parse\n");
#endif
  yystate = 0;
  yyerrstatus = 0;
  YY_parse_NERRS = 0;
  YY_parse_CHAR = YYEMPTY;          /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YY_parse_LSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
YYLABEL(yynewstate)

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YY_parse_STYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YY_parse_LSP_NEEDED
      YY_parse_LTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YY_parse_LSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YY_parse_LSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  YY_parse_ERROR("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YY_parse_STYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YY_parse_LSP_NEEDED
      yyls = (YY_parse_LTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YY_parse_LSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  YYGOTO(yybackup);
YYLABEL(yybackup)

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* YYLABEL(yyresume) */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yydefault);

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (YY_parse_CHAR == YYEMPTY)
    {
#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Reading a token: ");
#endif
      YY_parse_CHAR = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (YY_parse_CHAR <= 0)           /* This means end of input. */
    {
      yychar1 = 0;
      YY_parse_CHAR = YYEOF;                /* Don't call YYLEX any more */

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(YY_parse_CHAR);

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	{
	  fprintf (stderr, "Next token is %d (%s", YY_parse_CHAR, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, YY_parse_CHAR, YY_parse_LVAL);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    YYGOTO(yydefault);

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	YYGOTO(yyerrlab);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrlab);

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Shifting token %d (%s), ", YY_parse_CHAR, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (YY_parse_CHAR != YYEOF)
    YY_parse_CHAR = YYEMPTY;

  *++yyvsp = YY_parse_LVAL;
#ifdef YY_parse_LSP_NEEDED
  *++yylsp = YY_parse_LLOC;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  YYGOTO(yynewstate);

/* Do the default action for the current state.  */
YYLABEL(yydefault)

  yyn = yydefact[yystate];
  if (yyn == 0)
    YYGOTO(yyerrlab);

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
YYLABEL(yyreduce)
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


/* #line 783 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 1096 "y.tab.c"

  switch (yyn) {

case 1:
#line 53 "parse.y"
{ /* add default rule */
			int def_rule;

			pat = cclinit();
			cclnegate( pat );

			def_rule = mkstate( -pat );

			finish_rule( def_rule, false, 0, 0 );

			for ( i = 1; i <= lastsc; ++i )
			    scset[i] = mkbranch( scset[i], def_rule );

			if ( spprdflt )
			    fputs( "YY_FATAL_ERROR( \"flex scanner jammed\" )",
				   temp_action_file );
			else
			    fputs( "ECHO", temp_action_file );

			fputs( ";\n\tYY_BREAK\n", temp_action_file );
			;
    break;}
case 2:
#line 77 "parse.y"
{
			/* initialize for processing rules */

			/* create default DFA start condition */
			scinstal( "INITIAL", false );
			;
    break;}
case 5:
#line 88 "parse.y"
{ synerr( "unknown error processing section 1" ); ;
    break;}
case 7:
#line 95 "parse.y"
{
			/* these productions are separate from the s1object
			 * rule because the semantics must be done before
			 * we parse the remainder of an s1object
			 */

			xcluflg = false;
			;
    break;}
case 8:
#line 105 "parse.y"
{ xcluflg = true; ;
    break;}
case 9:
#line 109 "parse.y"
{ scinstal( nmstr, xcluflg ); ;
    break;}
case 10:
#line 112 "parse.y"
{ scinstal( nmstr, xcluflg ); ;
    break;}
case 11:
#line 115 "parse.y"
{ synerr( "bad start condition list" ); ;
    break;}
case 14:
#line 123 "parse.y"
{
			/* initialize for a parse of one rule */
			trlcontxt = variable_trail_rule = varlength = false;
			trailcnt = headcnt = rulelen = 0;
			current_state_type = STATE_NORMAL;
			previous_continued_action = continued_action;
			new_rule();
			;
    break;}
case 15:
#line 134 "parse.y"
{
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				     headcnt, trailcnt );

			for ( i = 1; i <= actvp; ++i )
			    scbol[actvsc[i]] =
				mkbranch( scbol[actvsc[i]], pat );

			if ( ! bol_needed )
			    {
			    bol_needed = true;

			    if ( performance_report )
				pinpoint_message( 
			    "'^' operator results in sub-optimal performance" );
			    }
			;
    break;}
case 16:
#line 154 "parse.y"
{
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				     headcnt, trailcnt );

			for ( i = 1; i <= actvp; ++i )
			    scset[actvsc[i]] =
				mkbranch( scset[actvsc[i]], pat );
			;
    break;}
case 17:
#line 165 "parse.y"
{
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				     headcnt, trailcnt );

			/* add to all non-exclusive start conditions,
			 * including the default (0) start condition
			 */

			for ( i = 1; i <= lastsc; ++i )
			    if ( ! scxclu[i] )
				scbol[i] = mkbranch( scbol[i], pat );

			if ( ! bol_needed )
			    {
			    bol_needed = true;

			    if ( performance_report )
				pinpoint_message(
			    "'^' operator results in sub-optimal performance" );
			    }
			;
    break;}
case 18:
#line 189 "parse.y"
{
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				     headcnt, trailcnt );

			for ( i = 1; i <= lastsc; ++i )
			    if ( ! scxclu[i] )
				scset[i] = mkbranch( scset[i], pat );
			;
    break;}
case 19:
#line 200 "parse.y"
{ build_eof_action(); ;
    break;}
case 20:
#line 203 "parse.y"
{
			/* this EOF applies to all start conditions
			 * which don't already have EOF actions
			 */
			actvp = 0;

			for ( i = 1; i <= lastsc; ++i )
			    if ( ! sceof[i] )
				actvsc[++actvp] = i;

			if ( actvp == 0 )
			    pinpoint_message(
		"warning - all start conditions already have <<EOF>> rules" );

			else
			    build_eof_action();
			;
    break;}
case 21:
#line 222 "parse.y"
{ synerr( "unrecognized rule" ); ;
    break;}
case 23:
#line 229 "parse.y"
{
			if ( (scnum = sclookup( nmstr )) == 0 )
			    format_pinpoint_message(
				"undeclared start condition %s", nmstr );

			else
			    actvsc[++actvp] = scnum;
			;
    break;}
case 24:
#line 239 "parse.y"
{
			if ( (scnum = sclookup( nmstr )) == 0 )
			    format_pinpoint_message(
				"undeclared start condition %s", nmstr );
			else
			    actvsc[actvp = 1] = scnum;
			;
    break;}
case 25:
#line 248 "parse.y"
{ synerr( "bad start condition list" ); ;
    break;}
case 26:
#line 252 "parse.y"
{
			if ( transchar[lastst[yyvsp[0]]] != SYM_EPSILON )
			    /* provide final transition \now/ so it
			     * will be marked as a trailing context
			     * state
			     */
			    yyvsp[0] = link_machines( yyvsp[0], mkstate( SYM_EPSILON ) );

			mark_beginning_as_normal( yyvsp[0] );
			current_state_type = STATE_NORMAL;

			if ( previous_continued_action )
			    {
			    /* we need to treat this as variable trailing
			     * context so that the backup does not happen
			     * in the action but before the action switch
			     * statement.  If the backup happens in the
			     * action, then the rules "falling into" this
			     * one's action will *also* do the backup,
			     * erroneously.
			     */
			    if ( ! varlength || headcnt != 0 )
				{
				fprintf( stderr,
    "%s: warning - trailing context rule at line %d made variable because\n",
					 program_name, linenum );
				fprintf( stderr,
					 "      of preceding '|' action\n" );
				}

			    /* mark as variable */
			    varlength = true;
			    headcnt = 0;
			    }

			if ( varlength && headcnt == 0 )
			    { /* variable trailing context rule */
			    /* mark the first part of the rule as the accepting
			     * "head" part of a trailing context rule
			     */
			    /* by the way, we didn't do this at the beginning
			     * of this production because back then
			     * current_state_type was set up for a trail
			     * rule, and add_accept() can create a new
			     * state ...
			     */
			    add_accept( yyvsp[-1], num_rules | YY_TRAILING_HEAD_MASK );
			    variable_trail_rule = true;
			    }
			
			else
			    trailcnt = rulelen;

			yyval = link_machines( yyvsp[-1], yyvsp[0] );
			;
    break;}
case 27:
#line 309 "parse.y"
{ synerr( "trailing context used twice" ); ;
    break;}
case 28:
#line 312 "parse.y"
{
			if ( trlcontxt )
			    {
			    synerr( "trailing context used twice" );
			    yyval = mkstate( SYM_EPSILON );
			    }

			else if ( previous_continued_action )
			    {
			    /* see the comment in the rule for "re2 re"
			     * above
			     */
			    if ( ! varlength || headcnt != 0 )
				{
				fprintf( stderr,
    "%s: warning - trailing context rule at line %d made variable because\n",
					 program_name, linenum );
				fprintf( stderr,
					 "      of preceding '|' action\n" );
				}

			    /* mark as variable */
			    varlength = true;
			    headcnt = 0;
			    }

 			if ( varlength && headcnt == 0 )
 			    {
 			    /* again, see the comment in the rule for "re2 re"
 			     * above
 			     */
 			    add_accept( yyvsp[-1], num_rules | YY_TRAILING_HEAD_MASK );
 			    variable_trail_rule = true;
 			    }

 			else
 			    {
 			    if ( ! varlength )
 				headcnt = rulelen;

 			    ++rulelen;
 			    trailcnt = 1;
 			    }

			trlcontxt = true;

			eps = mkstate( SYM_EPSILON );
			yyval = link_machines( yyvsp[-1],
				 link_machines( eps, mkstate( '\n' ) ) );
			;
    break;}
case 29:
#line 364 "parse.y"
{
		        yyval = yyvsp[0];

			if ( trlcontxt )
			    {
			    if ( varlength && headcnt == 0 )
				/* both head and trail are variable-length */
				variable_trail_rule = true;
			    else
				trailcnt = rulelen;
			    }
		        ;
    break;}
case 30:
#line 380 "parse.y"
{
			varlength = true;
			yyval = mkor( yyvsp[-2], yyvsp[0] );
			;
    break;}
case 31:
#line 386 "parse.y"
{ yyval = yyvsp[0]; ;
    break;}
case 32:
#line 391 "parse.y"
{
			/* this rule is written separately so
			 * the reduction will occur before the trailing
			 * series is parsed
			 */

			if ( trlcontxt )
			    synerr( "trailing context used twice" );
			else
			    trlcontxt = true;

			if ( varlength )
			    /* we hope the trailing context is fixed-length */
			    varlength = false;
			else
			    headcnt = rulelen;

			rulelen = 0;

			current_state_type = STATE_TRAILING_CONTEXT;
			yyval = yyvsp[-1];
			;
    break;}
case 33:
#line 416 "parse.y"
{
			/* this is where concatenation of adjacent patterns
			 * gets done
			 */
			yyval = link_machines( yyvsp[-1], yyvsp[0] );
			;
    break;}
case 34:
#line 424 "parse.y"
{ yyval = yyvsp[0]; ;
    break;}
case 35:
#line 428 "parse.y"
{
			varlength = true;

			yyval = mkclos( yyvsp[-1] );
			;
    break;}
case 36:
#line 435 "parse.y"
{
			varlength = true;

			yyval = mkposcl( yyvsp[-1] );
			;
    break;}
case 37:
#line 442 "parse.y"
{
			varlength = true;

			yyval = mkopt( yyvsp[-1] );
			;
    break;}
case 38:
#line 449 "parse.y"
{
			varlength = true;

			if ( yyvsp[-3] > yyvsp[-1] || yyvsp[-3] < 0 )
			    {
			    synerr( "bad iteration values" );
			    yyval = yyvsp[-5];
			    }
			else
			    {
			    if ( yyvsp[-3] == 0 )
 				{
 				if ( yyvsp[-1] <= 0 )
 				    {
 				    synerr( "bad iteration values" );
 				    yyval = yyvsp[-5];
 				    }
 				else
 				    yyval = mkopt( mkrep( yyvsp[-5], 1, yyvsp[-1] ) );
 				}
			    else
				yyval = mkrep( yyvsp[-5], yyvsp[-3], yyvsp[-1] );
			    }
			;
    break;}
case 39:
#line 475 "parse.y"
{
			varlength = true;

			if ( yyvsp[-2] <= 0 )
			    {
			    synerr( "iteration value must be positive" );
			    yyval = yyvsp[-4];
			    }

			else
			    yyval = mkrep( yyvsp[-4], yyvsp[-2], INFINITY );
			;
    break;}
case 40:
#line 489 "parse.y"
{
			/* the singleton could be something like "(foo)",
			 * in which case we have no idea what its length
			 * is, so we punt here.
			 */
			varlength = true;

			if ( yyvsp[-1] <= 0 )
			    {
			    synerr( "iteration value must be positive" );
			    yyval = yyvsp[-3];
			    }

			else
			    yyval = link_machines( yyvsp[-3], copysingl( yyvsp[-3], yyvsp[-1] - 1 ) );
			;
    break;}
case 41:
#line 507 "parse.y"
{
			if ( ! madeany )
			    {
			    /* create the '.' character class */
			    anyccl = cclinit();
			    ccladd( anyccl, '\n' );
			    cclnegate( anyccl );

			    if ( useecs )
				mkeccl( ccltbl + cclmap[anyccl],
					ccllen[anyccl], nextecm,
					ecgroup, csize, csize );

			    madeany = true;
			    }

			++rulelen;

			yyval = mkstate( -anyccl );
			;
    break;}
case 42:
#line 529 "parse.y"
{
			if ( ! cclsorted )
			    /* sort characters for fast searching.  We use a
			     * shell sort since this list could be large.
			     */
			    cshell( ccltbl + cclmap[yyvsp[0]], ccllen[yyvsp[0]], true );

			if ( useecs )
			    mkeccl( ccltbl + cclmap[yyvsp[0]], ccllen[yyvsp[0]],
				    nextecm, ecgroup, csize, csize );

			++rulelen;

			yyval = mkstate( -yyvsp[0] );
			;
    break;}
case 43:
#line 546 "parse.y"
{
			++rulelen;

			yyval = mkstate( -yyvsp[0] );
			;
    break;}
case 44:
#line 553 "parse.y"
{ yyval = yyvsp[-1]; ;
    break;}
case 45:
#line 556 "parse.y"
{ yyval = yyvsp[-1]; ;
    break;}
case 46:
#line 559 "parse.y"
{
			++rulelen;

			if ( caseins && yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
			    yyvsp[0] = clower( yyvsp[0] );

			yyval = mkstate( yyvsp[0] );
			;
    break;}
case 47:
#line 570 "parse.y"
{ yyval = yyvsp[-1]; ;
    break;}
case 48:
#line 573 "parse.y"
{
			/* *Sigh* - to be compatible Unix lex, negated ccls
			 * match newlines
			 */
#ifdef NOTDEF
			ccladd( yyvsp[-1], '\n' ); /* negated ccls don't match '\n' */
			cclsorted = false; /* because we added the newline */
#endif
			cclnegate( yyvsp[-1] );
			yyval = yyvsp[-1];
			;
    break;}
case 49:
#line 587 "parse.y"
{
			if ( yyvsp[-2] > yyvsp[0] )
			    synerr( "negative range in character class" );

			else
			    {
			    if ( caseins )
				{
				if ( yyvsp[-2] >= 'A' && yyvsp[-2] <= 'Z' )
				    yyvsp[-2] = clower( yyvsp[-2] );
				if ( yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				    yyvsp[0] = clower( yyvsp[0] );
				}

			    for ( i = yyvsp[-2]; i <= yyvsp[0]; ++i )
			        ccladd( yyvsp[-3], i );

			    /* keep track if this ccl is staying in alphabetical
			     * order
			     */
			    cclsorted = cclsorted && (yyvsp[-2] > lastchar);
			    lastchar = yyvsp[0];
			    }

			yyval = yyvsp[-3];
			;
    break;}
case 50:
#line 615 "parse.y"
{
			if ( caseins )
			    if ( yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			ccladd( yyvsp[-1], yyvsp[0] );
			cclsorted = cclsorted && (yyvsp[0] > lastchar);
			lastchar = yyvsp[0];
			yyval = yyvsp[-1];
			;
    break;}
case 51:
#line 627 "parse.y"
{
			cclsorted = true;
			lastchar = 0;
			yyval = cclinit();
			;
    break;}
case 52:
#line 635 "parse.y"
{
			if ( caseins )
			    if ( yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			++rulelen;

			yyval = link_machines( yyvsp[-1], mkstate( yyvsp[0] ) );
			;
    break;}
case 53:
#line 646 "parse.y"
{ yyval = mkstate( SYM_EPSILON ); ;
    break;}
}

#line 783 "/u/icdc/rdt/tools/lib/bison.cc"
   /* the action file gets copied in in place of this dollarsign  */
  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YY_parse_LSP_NEEDED
  yylsp -= yylen;
#endif

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YY_parse_LSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = YY_parse_LLOC.first_line;
      yylsp->first_column = YY_parse_LLOC.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  YYGOTO(yynewstate);

YYLABEL(yyerrlab)   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++YY_parse_NERRS;

#ifdef YY_parse_ERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      YY_parse_ERROR(msg);
	      free(msg);
	    }
	  else
	    YY_parse_ERROR ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YY_parse_ERROR_VERBOSE */
	YY_parse_ERROR("parse error");
    }

  YYGOTO(yyerrlab1);
YYLABEL(yyerrlab1)   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (YY_parse_CHAR == YYEOF)
	YYABORT;

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Discarding token %d (%s).\n", YY_parse_CHAR, yytname[yychar1]);
#endif

      YY_parse_CHAR = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;              /* Each real token shifted decrements this */

  YYGOTO(yyerrhandle);

YYLABEL(yyerrdefault)  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) YYGOTO(yydefault);
#endif

YYLABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YY_parse_LSP_NEEDED
  yylsp--;
#endif

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

YYLABEL(yyerrhandle)

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yyerrdefault);

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    YYGOTO(yyerrdefault);

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	YYGOTO(yyerrpop);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrpop);

  if (yyn == YYFINAL)
    YYACCEPT;

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = YY_parse_LVAL;
#ifdef YY_parse_LSP_NEEDED
  *++yylsp = YY_parse_LLOC;
#endif

  yystate = yyn;
  YYGOTO(yynewstate);
/* end loop, in which YYGOTO may be used. */
  YYENDGOTO
}

/* END */

/* #line 982 "/u/icdc/rdt/tools/lib/bison.cc" */
#line 1918 "y.tab.c"
#line 649 "parse.y"



/* build_eof_action - build the "<<EOF>>" action for the active start
 *                    conditions
 */

void build_eof_action()

    {
    register int i;

    for ( i = 1; i <= actvp; ++i )
	{
	if ( sceof[actvsc[i]] )
	    format_pinpoint_message(
		"multiple <<EOF>> rules for start condition %s",
		    scname[actvsc[i]] );

	else
	    {
	    sceof[actvsc[i]] = true;
	    fprintf( temp_action_file, "case YY_STATE_EOF(%s):\n",
		     scname[actvsc[i]] );
	    }
	}

    line_directive_out( temp_action_file );
    }


/* synerr - report a syntax error */

void synerr( str )
char str[];

    {
    syntaxerror = true;
    pinpoint_message( str );
    }


/* format_pinpoint_message - write out a message formatted with one string,
 *			     pinpointing its location
 */

void format_pinpoint_message( msg, arg )
char msg[], arg[];

    {
    char errmsg[MAXLINE];

    (void) sprintf( errmsg, msg, arg );
    pinpoint_message( errmsg );
    }


/* pinpoint_message - write out a message, pinpointing its location */

void pinpoint_message( str )
char str[];

    {
    fprintf( stderr, "\"%s\", line %d: %s\n", infilename, linenum, str );
    }


/* yyerror - eat up an error message from the parser;
 *	     currently, messages are ignore
 */

void yyerror( msg )
char msg[];

    {
    }
