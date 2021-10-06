# makefile
main: main.o asm.o asm1.o
	gcc -Wall -g main.o asm.o asm1.o -o main

main.o: main.c asm.h
	gcc -g -Wall -c main.c

asm.o: asm.s
	gcc -Wall -g -c asm.s
	
asm1.o: asm1.s
	gcc -Wall -g -c asm1.s

clean:
		rm *.o main

run: main
	./main
