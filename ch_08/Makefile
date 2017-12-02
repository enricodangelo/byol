CC=gcc
STND=c99
CFLAGS=-std=$(STND) -Wall
LINKEROPTS=-ledit -lm

all:
	$(CC) $(CFLAGS) evaluation.c mpc.c $(LINKEROPTS) -o evaluation

clean:
	rm evaluation

