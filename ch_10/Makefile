CC=gcc
STND=c99
CFLAGS=-std=$(STND) -Wall
LINKEROPTS=-ledit -lm

all:
	indent q_expressions.c
	$(CC) $(CFLAGS) q_expressions.c mpc.c $(LINKEROPTS) -o q_expressions

clean:
	rm q_expressions

