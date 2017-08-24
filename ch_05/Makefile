CC=gcc
STND=c99
CFLAGS=-std=$(STND) -Wall
LINKEROPTS=-ledit -lm

all: doge_code doge_grammar

doge_code:
	$(CC) $(CFLAGS) doge_code.c mpc.c $(LINKEROPTS) -o doge-code

doge_grammar:
	$(CC) $(CFLAGS) doge_grammar.c mpc.c $(LINKEROPTS) -o doge_grammar

clean:
	rm doge_code doge_grammar

