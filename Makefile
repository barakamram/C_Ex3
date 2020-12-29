CC = gcc
AR =ar
MAIN = main.o
TARGETS = isort.o
FLAGS = -Wall -g

all: main.o isort.o
        $(CC)  $(FLAGS) -o main main.o isort.o

isort.o: isort.c isort.h
        $(CC)  $(FLAGS) -c isort.c

main.o: main.c isort.h
        $(CC)  $(FLAGS) -c main.c

.PHONY: clean all

clean:
        rm -f *.o *.a main

