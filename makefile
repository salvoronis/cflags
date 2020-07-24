CC = gcc -std=c11 -Wall

all: runexample

mko: example.c flags.c
	gcc -std=c11 -c $<

runexample: example.o flags.o mko
	gcc -o example example.o flags.o
