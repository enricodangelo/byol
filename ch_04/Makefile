CC=gcc
STND=c99
CFLAGS=-std=$(STND) -Wall
LINKEROPTS=-ledit -lm

all: prompt prompt-readline prompt-readline-portable

prompt:
	$(CC) $(CFLAGS) prompt.c -o prompt

prompt-readline:
	$(CC) $(CFLAGS) prompt-readline.c $(LINKEROPTS) -o prompt-readline

prompt-readline-portable:
	$(CC) $(CFLAGS) prompt-readline-portable.c $(LINKEROPTS) -o prompt-readline-portable

clean:
	rm prompt prompt-readline prompt-readline-portable

