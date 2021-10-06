# makefile
main: main.o add_byte.o
	gcc -Wall -g main.o add_byte.o -o main

main.o: main.c add_byte.h
	gcc -g -Wall -c main.c

add_byte.o: add_byte.c
	gcc -Wall -g -c add_byte.c

clean:
		rm *.o main

run: main
	./main
