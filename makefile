CC = gcc -std=c11 -Wall -Wint-conversion
DEST = ./bin/
FILE = test

all: buildlib

build: example.c flags.c
	${CC} -o ${DEST}${FILE} example.c flags.c

mko: example.c flags.c
	gcc -std=c11 -c $<

runexample: example.o flags.o mko
	gcc -o example example.o flags.o

clean:
	rm *.o *.out bin/* *.a

buildlib: mkstatlib
	gcc -std=c99 -o ./bin/test ./example/example.c -L./ -lcflags

mkstatlib: flags.c
	gcc -std=c99 -c flags.c
	ar r ./libcflags.a *.o
	rm *.o
