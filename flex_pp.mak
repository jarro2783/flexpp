ORIGIN = PWB
ORIGIN_VER = 2.0
PROJ = FLEX_PP
PROJFILE = FLEX_PP.MAK
DEBUG = 1

CC  = cl
CFLAGS_G  = /AL /W4 /Za /DMS_DOS /BATCH /Gt8
CFLAGS_D  = /f /Od /Zi /Zr
CFLAGS_R  = /f- /Ot /Ol /Og /Oe /Oi /Gs
CXX  = cl
CXXFLAGS_G  = /W2 /BATCH
CXXFLAGS_D  = /f /Zi /Od
CXXFLAGS_R  = /f- /Ot /Oi /Ol /Oe /Og /Gs
MAPFILE_D  = NUL
MAPFILE_R  = NUL
LFLAGS_G  = /NOI /STACK:32000 /BATCH /ONERROR:NOEXE
LFLAGS_D  = /CO /FAR /PACKC
LFLAGS_R  = /EXE /FAR /PACKC
LINKER	= link
ILINK  = ilink
LRF  = echo > NUL
ILFLAGS  = /a /e
RUNFLAGS  = -d8 -hscanner.h -oscanner.cpp scanner.l

FILES  = CCL.C DFA.C ECS.C MAIN.C MISC.C NFA.C PARSE.C SCAN.C SYM.C TBLCMP.C\
	YYLEX.C GEN.C
OBJS  = CCL.obj DFA.obj ECS.obj MAIN.obj MISC.obj NFA.obj PARSE.obj SCAN.obj\
	SYM.obj TBLCMP.obj YYLEX.obj GEN.obj

all: $(PROJ).exe

.SUFFIXES:
.SUFFIXES: .obj .c
.SUFFIXES: .obj .c

CCL.obj : CCL.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoCCL.obj CCL.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoCCL.obj CCL.C
<<
!ENDIF

DFA.obj : DFA.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoDFA.obj DFA.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoDFA.obj DFA.C
<<
!ENDIF

ECS.obj : ECS.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoECS.obj ECS.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoECS.obj ECS.C
<<
!ENDIF

MAIN.obj : MAIN.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoMAIN.obj MAIN.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoMAIN.obj MAIN.C
<<
!ENDIF

MISC.obj : MISC.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoMISC.obj MISC.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoMISC.obj MISC.C
<<
!ENDIF

NFA.obj : NFA.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoNFA.obj NFA.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoNFA.obj NFA.C
<<
!ENDIF

PARSE.obj : PARSE.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoPARSE.obj PARSE.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoPARSE.obj PARSE.C
<<
!ENDIF

SCAN.obj : SCAN.C flexdef.h parse.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCAN.obj SCAN.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCAN.obj SCAN.C
<<
!ENDIF

SYM.obj : SYM.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSYM.obj SYM.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSYM.obj SYM.C
<<
!ENDIF

TBLCMP.obj : TBLCMP.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoTBLCMP.obj TBLCMP.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoTBLCMP.obj TBLCMP.C
<<
!ENDIF

YYLEX.obj : YYLEX.C flexdef.h parse.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoYYLEX.obj YYLEX.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoYYLEX.obj YYLEX.C
<<
!ENDIF

GEN.obj : GEN.C flexdef.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoGEN.obj GEN.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoGEN.obj GEN.C
<<
!ENDIF


$(PROJ).exe : $(OBJS)
!IF $(DEBUG)
	$(LRF) @<<$(PROJ).lrf
$(RT_OBJS: = +^
) $(OBJS: = +^
)
$@
$(MAPFILE_D)
$(LIBS: = +^
) +
$(LLIBS_G: = +^
) +
$(LLIBS_D: = +^
)
$(DEF_FILE) $(LFLAGS_G) $(LFLAGS_D);
<<
!ELSE
	$(LRF) @<<$(PROJ).lrf
$(RT_OBJS: = +^
) $(OBJS: = +^
)
$@
$(MAPFILE_R)
$(LIBS: = +^
) +
$(LLIBS_G: = +^
) +
$(LLIBS_R: = +^
)
$(DEF_FILE) $(LFLAGS_G) $(LFLAGS_R);
<<
!ENDIF
	$(LINKER) @$(PROJ).lrf


.c.obj :
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /Fo$@ $<
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /Fo$@ $<
<<
!ENDIF


run: $(PROJ).exe
	$(PROJ).exe $(RUNFLAGS)

debug: $(PROJ).exe
	CV $(CVFLAGS) $(PROJ).exe $(RUNFLAGS)

# << User_supplied_information >>
YACC=bison_pp -y
YACC_FLAGS=
LEX=flex_pp
LEX_FLAGS= -ist8
.y.c	:
	$(YACC) $(YACC_FLAGS)  -d $*.y
	rename y_tab.c $*.c
	rename y_tab.h $*.h
.y.h	:
	$(YACC) $(YACC_FLAGS) -d	$*.y
	rename y_tab.c $*.c
	rename y_tab.h $*.h

.l.c	:
	$(LEX) $(LEX_FLAGS) $*.l   >$*.c
