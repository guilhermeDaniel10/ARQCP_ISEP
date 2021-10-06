# makefile
main: main.o asm.o
	gcc -Wall -g main.o asm.o -o main

main.o: main.c asm.h
	gcc -g -Wall -c main.c

asm.o: asm.s
	gcc -Wall -g -c asm.s
	
clean:
	rm *.o main

run: main
	./main
