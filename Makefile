CC = gcc
AR = ar
FLAGS = -Wall -g


all: isort txtfind

txtfind: txtfind.o
	$(CC) $(FLAGS) -o txtfind txtfind.o

isort: isort.o
	$(CC) $(FLAGS) -o isort isort.o

isort.o: isort.c
	$(CC) $(FLAGS) -c isort.c

txtfind.o: txtfind.c
	$(CC) $(FLAGS) -c txtfind.c

.PHONY: clean all

clean:
	rm -f *.o *.a isort txtfind
