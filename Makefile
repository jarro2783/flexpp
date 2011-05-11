# make file for "flex" tool

# @(#) $Header: /home/tguthrie/projects/parser/flex++/RCS/Makefile,v 1.3 2011/05/11 09:35:24 tguthrie Exp tguthrie $ (LBL)

# Porting considerations:
#
#    For System V Unix machines, add -DUSG to CFLAGS (if it's not
#         automatically defined)
#    For Vax/VMS, add "-DVMS -DUSG" to CFLAGS.
#    For MS-DOS, add "-DMS_DOS -DUSG" to CFLAGS.  Create \tmp if not present.
#	  See MSDOS.notes for more info.
#    For Amiga, add "-DAMIGA -DUSG" to CFLAGS.
#    For SCO Unix, add "-DSCO_UNIX" to CFLAGS.
#
#    For C compilers which don't know about "void", add -Dvoid=int to CFLAGS.
#
#    If your C compiler is ANSI standard but does not include the <stdlib.h>
#    header file (some installations of gcc have this problem), then add
#    -DDONT_HAVE_STDLIB_H to CFLAGS.
#
# By default, flex will be configured to generate 8-bit scanners only
# if the -8 flag is given.  If you want it to always generate 8-bit
# scanners, add "-DDEFAULT_CSIZE=256" to CFLAGS.  Note that doing
# so will double the size of all uncompressed scanners.
# 
# If on your system you have trouble building flex due to 8-bit
# character problems, remove the -8 from FLEX_FLAGS and the
# "#define FLEX_8_BIT_CHARS" from the beginning of flexdef.h.


# the first time around use "make first_flex"


# Installation targeting.  Files will be installed under the tree rooted
# at DESTDIR.  User commands will be installed in BINDIR, library files
# in LIBDIR (which will be created if necessary), auxiliary files in
# AUXDIR, manual pages will be installed in MANDIR with extension MANEXT.
# Raw, unformatted troff source will be installed if INSTALLMAN=man, nroff
# preformatted versions will be installed if INSTALLMAN=cat.
DESTDIR = /opt/gnu/
BINDIR = bin
LIBDIR = lib
AUXDIR = lib
MANDIR = man/man1
MANEXT = 1
INSTALLMAN = man
.SUFFIXES : .dman
.dman :
	dman <$*.dman >$@
	pman -t $@ >$*.ps

# MAKE = make


SKELETON_FILE = $(DESTDIR)$(AUXDIR)/flexskel.cc
HEADERSKELETON_FILE = $(DESTDIR)$(AUXDIR)/flexskel.h
SKELFLAGS = -DDEFAULT_SKELETON_FILE=\"$(SKELETON_FILE)\" -DDEFAULT_SKELETONHEADER_FILE=\"$(HEADERSKELETON_FILE)\"
CFLAGS = -O -DDEFAULT_CSIZE=256
LDFLAGS = -s

COMPRESSION =
FLEX_FLAGS = -ist8
# which "flex" to use to generate scan.c from scan.l
FLEX = flex++
YACC= bison++ -y
CC = gcc

AR = ar
RANLIB = ranlib

FLEXOBJS = \
	ccl.o \
	dfa.o \
	ecs.o \
	gen.o \
	main.o \
	misc.o \
	nfa.o \
	parse.o \
	scan.o \
	sym.o \
	tblcmp.o \
	yylex.o

FLEX_C_SOURCES = \
	ccl.c \
	dfa.c \
	ecs.c \
	gen.c \
	main.c \
	misc.c \
	nfa.c \
	parse.c \
	scan.c \
	sym.c \
	tblcmp.c \
	yylex.c

FLEX_LIB_OBJS = \
	libmain.o

FLEXLIB = flexlib.a


all : flex++ $(FLEXLIB)

flex++ : $(FLEXOBJS)
	$(CC) $(CFLAGS) -o $@ $(LDFLAGS) $(FLEXOBJS)

first_flex:
	cp initscan.c scan.c
	$(MAKE) $(MFLAGS) flex++

parse.h parse.c : parse.y 
	$(YACC) -d parse.y 
	@sed '/extern char.*malloc/d' <y.tab.c >parse.c 
	@rm -f y.tab.c
	@mv y.tab.h parse.h

scan.c : scan.l
	$(FLEX) $(FLEX_FLAGS) $(COMPRESSION) scan.l >scan.c

scan.o : scan.c parse.h flexdef.h

main.o : main.c flexdef.h
	$(CC) $(CFLAGS) -c $(SKELFLAGS) main.c

ccl.o : ccl.c flexdef.h
dfa.o : dfa.c flexdef.h
ecs.o : ecs.c flexdef.h
gen.o : gen.c flexdef.h
misc.o : misc.c flexdef.h
nfa.o : nfa.c flexdef.h
parse.o : parse.c flexdef.h
sym.o : sym.c flexdef.h
tblcmp.o : tblcmp.c flexdef.h
yylex.o : yylex.c flexdef.h

flex++.man : flex++.1
	nroff -man flex++.1 >flex++.man

$(FLEXLIB) : $(FLEX_LIB_OBJS)
	$(AR) cru $(FLEXLIB) $(FLEX_LIB_OBJS)

lint : $(FLEX_C_SOURCES)
	lint $(FLEX_C_SOURCES) > flex.lint
initscan : scan.c
	-mv  initscan.c initscan.c.`date '+%y%m%d%H%M'`
	cp  scan.c initscan.c
distrib :
	mv scan.c initscan.c
	chmod 444 initscan.c
	$(MAKE) $(MFLAGS) clean

install: flex++ $(DESTDIR)$(LIBDIR) flexskel.cc flexskel.h install.$(INSTALLMAN) install-lib
	install -s -m 755 flex++ $(DESTDIR)$(BINDIR)/flex++
	install -c -m 644 flexskel.cc $(SKELETON_FILE)
	install -c -m 644 flexskel.h $(HEADERSKELETON_FILE)

install-lib: $(DESTDIR)$(LIBDIR) $(FLEXLIB)
	#install -c -m 644 $(FLEXLIB) $(DESTDIR)$(LIBDIR)/libfl.a
	#$(RANLIB) $(DESTDIR)$(LIBDIR)/libfl.a

$(DESTDIR)$(LIBDIR):
	mkdir $@

install.man: flex++.1
	install -c -m 644 flex++.1 $(DESTDIR)$(MANDIR)

install.cat: flex++.1
	nroff -h -man flex++.1 > $(DESTDIR)$(MANDIR)/flex.$(MANEXT)
	chmod 644 $(DESTDIR)$(MANDIR)/flex++.$(MANEXT)

clean :
	rm -f core errs flex++ *.o parse.c *.lint parse.h flex.man flex++.man tags lex.backtrack \
		$(FLEXLIB)

tags :
	ctags $(FLEX_C_SOURCES)

vms :	flex++.man
	$(MAKE) $(MFLAGS) distrib
test : flex++
	echo "diff should only be on #line directive"
	-./flex++ $(FLEX_FLAGS) -S./flexskel.cc -H./flexskel.h $(COMPRESSION) scan.l | diff scan.c -
bigtest :
	echo "diff should only be on #line directive"
	-rm -f scan.c ; $(MAKE) COMPRESSION="-C" test
	echo "diff should only be on #line directive"
	-rm -f scan.c ; $(MAKE) COMPRESSION="-Ce" test
	echo "diff should only be on #line directive"
	-rm -f scan.c ; $(MAKE) COMPRESSION="-Cm" test
	echo this should fail because there is trailing context in the grammar
	-rm -f scan.c ; $(MAKE) COMPRESSION="-Cfe" test
	echo this should fail because there is trailing context in the grammar
	-rm -f scan.c ; $(MAKE) COMPRESSION="-CFe" test
	echo this should fail because there is trailing context in the grammar
	-rm -f scan.c ; $(MAKE) COMPRESSION="-Cf" test
	echo this should fail because there is trailing context in the grammar
	-rm -f scan.c ; $(MAKE) COMPRESSION="-CF" test
	echo "diff should only be on #line directive"
	-rm -f scan.c ; $(MAKE)
backup :
	find . \( -name '*.o' -o -name '*%' -o -name 'flex++' -o -name '.tar.excludes' \) -print >.tar.excludes
	tar cvfX - .tar.excludes . | compress -cv >../flex++.tar.Z

