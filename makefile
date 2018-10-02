all: construction.o
	gcc -o tests construction.o

construction.o: construction.c construction.h
	gcc -c construction

run:
	./tests

clean:
	rm *.o