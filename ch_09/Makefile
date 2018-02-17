CC=gcc
STND=c99
CFLAGS=-std=$(STND) -Wall
LINKEROPTS=-ledit -lm

all:
	$(CC) $(CFLAGS) s_expressions.c mpc.c $(LINKEROPTS) -o s_expressions
	$(CC) $(CFLAGS) s_expressions_double.c mpc.c $(LINKEROPTS) -o s_expressions_double

clean:
	rm s_expressions
	rm s_expressions_double

