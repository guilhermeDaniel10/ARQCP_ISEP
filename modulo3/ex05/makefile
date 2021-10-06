# makefile
main: main.o asm.o asm2.o
	gcc -Wall -g main.o asm.o asm2.o -o main

main.o: main.c asm.h
	gcc -g -Wall -c main.c

asm.o: asm.s
	gcc -Wall -g -c asm.s
	
asm2.o: asm2.s
	gcc -Wall -g -c asm2.s

clean:
		rm *.o main

run: main
	./main
