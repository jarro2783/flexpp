#ifndef YY_parse_h_included
#define YY_parse_h_included

#line 1 "/u/icdc/rdt/tools/lib/bison.h"
/* before anything */
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
#endif
#include <stdio.h>

/* #line 14 "/u/icdc/rdt/tools/lib/bison.h" */
#line 21 "y.tab.h"

#line 14 "/u/icdc/rdt/tools/lib/bison.h"
 /* %{ and %header{ and %union, during decl */
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
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
/* use %define LTYPE */
#endif
#endif
#ifdef YYSTYPE
#ifndef YY_parse_STYPE 
#define YY_parse_STYPE YYSTYPE
/* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
/* use %define STYPE */
#endif
#endif
#ifdef YYDEBUG
#ifndef YY_parse_DEBUG
#define  YY_parse_DEBUG YYDEBUG
/* WARNING obsolete !!! user defined YYDEBUG not reported into generated header */
/* use %define DEBUG */
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

/* #line 63 "/u/icdc/rdt/tools/lib/bison.h" */
#line 75 "y.tab.h"

#line 63 "/u/icdc/rdt/tools/lib/bison.h"
/* YY_parse_PURE */
#endif

/* #line 65 "/u/icdc/rdt/tools/lib/bison.h" */
#line 82 "y.tab.h"

#line 65 "/u/icdc/rdt/tools/lib/bison.h"
/* prefix */
#ifndef YY_parse_DEBUG

/* #line 67 "/u/icdc/rdt/tools/lib/bison.h" */
#line 89 "y.tab.h"

#line 67 "/u/icdc/rdt/tools/lib/bison.h"
/* YY_parse_DEBUG */
#endif
#ifndef YY_parse_LSP_NEEDED

/* #line 70 "/u/icdc/rdt/tools/lib/bison.h" */
#line 97 "y.tab.h"

#line 70 "/u/icdc/rdt/tools/lib/bison.h"
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

/* TOKEN C */
#ifndef YY_USE_CLASS

#ifndef YY_parse_PURE
extern YY_parse_STYPE YY_parse_LVAL;
#endif


/* #line 143 "/u/icdc/rdt/tools/lib/bison.h" */
#line 175 "y.tab.h"
#define	CHAR	258
#define	NUMBER	259
#define	SECTEND	260
#define	SCDECL	261
#define	XSCDECL	262
#define	WHITESPACE	263
#define	NAME	264
#define	PREVCCL	265
#define	EOF_OP	266


#line 143 "/u/icdc/rdt/tools/lib/bison.h"
 /* #defines token */
/* after #define tokens, before const tokens S5*/
#else
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

/* #line 182 "/u/icdc/rdt/tools/lib/bison.h" */
#line 229 "y.tab.h"
static const int CHAR;
static const int NUMBER;
static const int SECTEND;
static const int SCDECL;
static const int XSCDECL;
static const int WHITESPACE;
static const int NAME;
static const int PREVCCL;
static const int EOF_OP;


#line 182 "/u/icdc/rdt/tools/lib/bison.h"
 /* decl const */
#else
enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0

/* #line 185 "/u/icdc/rdt/tools/lib/bison.h" */
#line 247 "y.tab.h"
	,CHAR=258
	,NUMBER=259
	,SECTEND=260
	,SCDECL=261
	,XSCDECL=262
	,WHITESPACE=263
	,NAME=264
	,PREVCCL=265
	,EOF_OP=266


#line 185 "/u/icdc/rdt/tools/lib/bison.h"
 /* enum token */
     }; /* end of enum declaration */
#endif
public:
 int YY_parse_PARSE(YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
#ifdef YY_parse_PURE
#ifdef YY_parse_LSP_NEEDED
 virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
#else
 virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
#endif
#else
 virtual int YY_parse_LEX() YY_parse_LEX_BODY;
 YY_parse_STYPE YY_parse_LVAL;
#ifdef YY_parse_LSP_NEEDED
 YY_parse_LTYPE YY_parse_LLOC;
#endif
 int YY_parse_NERRS;
 int YY_parse_CHAR;
#endif
#if YY_parse_DEBUG != 0
public:
 int YY_parse_DEBUG_FLAG;	/*  nonzero means print parse trace	*/
#endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#endif


#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
#ifndef YYSTYPE
#define YYSTYPE YY_parse_STYPE
#endif

#ifndef YYLTYPE
#define YYLTYPE YY_parse_LTYPE
#endif
#ifndef YYDEBUG
#ifdef YY_parse_DEBUG 
#define YYDEBUG YY_parse_DEBUG
#endif
#endif

#endif
/* END */

/* #line 236 "/u/icdc/rdt/tools/lib/bison.h" */
#line 313 "y.tab.h"
#endif
