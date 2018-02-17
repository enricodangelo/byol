CC=gcc
STND=c99
CFLAGS=-std=$(STND) -Wall
LINKEROPTS=-ledit -lm

all:
	$(CC) $(CFLAGS) s_expressions.c mpc.c $(LINKEROPTS) -o s_expressions

clean:
	rm s_expressions

