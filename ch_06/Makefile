CC=gcc
STND=c99
CFLAGS=-std=$(STND) -Wall
LINKEROPTS=-ledit -lm

all:
	$(CC) $(CFLAGS) parsing.c mpc.c $(LINKEROPTS) -o parsing

clean:
	rm parsing

