# Makefile for the lab1 driver (based on that of hello).

COMPILER_TYPE= gnu

CC=gcc

PROG=	lab5
SRCS=	lab5.c video_gr.c vbe.c test5.c keyboard.c kbc.c timer.c xpm.c pixmap.c vector2D.c sprite.c
CCFLAGS= -Wall

DPADD+=	${LIBDRIVER} ${LIBSYS}
LDADD+= -llm -ldriver -lsys

LDFLAGS+= -L .

MAN=

.include <bsd.prog.mk>
.include <bsd.gcc.mk>
