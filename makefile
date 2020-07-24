CC = gcc -std=c11 -Wall -Wint-conversion
DEST = ./bin/
FILE = test

all: build

build: example.c flags.c
	${CC} -o ${DEST}${FILE} example.c flags.c

mko: example.c flags.c
	gcc -std=c11 -c $<

runexample: example.o flags.o mko
	gcc -o example example.o flags.o

clean:
	rm *.o *.out bin/*
