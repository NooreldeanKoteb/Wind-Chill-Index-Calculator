# simple Makefile
# Nooreldean Koteb
CFLAGS=-g -Wall

all: WindChillIndex.c
	gcc -g -Wall -o WindChillIndex WindChillIndex.c -lm

clean:
	rm WindChillIndex
