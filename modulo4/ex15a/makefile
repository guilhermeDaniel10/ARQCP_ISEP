# makefile
main: main.o greater_date.o
	gcc -Wall -g main.o greater_date.o -o main

main.o: main.c greater_date.h
	gcc -g -Wall -c main.c

activate_bits.o: greater_date.c
	gcc -Wall -g -c greater_date.c

clean:
		rm *.o main

run: main
	./main
