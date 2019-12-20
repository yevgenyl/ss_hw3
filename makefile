CC = gcc
CFLAGS = -Wall -g
DEPS1 = insertionSort.h
DEPS2 = textSearch.h

%insertionSort.o: %insertionSort.c $(DEPS1)
	$(CC) -c $< $(CFLAGS)

%textSearch.o: %textSearch.c $(DEPS2)
	$(CC) -c $< $(CFLAGS)

all: isort txtfind 

isort: main.c insertionSort.c
	$(CC) -c -Wall main.c insertionSort.c 
	$(CC) -o isort main.o insertionSort.o

txtfind: main2.c textSearch.c
	$(CC) -c -Wall main2.c textSearch.c 
	$(CC) -o txtfind main2.o textSearch.o

.PHONY: clean

clean:
	rm -f *.o *.out isort txtfind
