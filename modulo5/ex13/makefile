main: new_matrix.o asm.o main.o
		gcc asm.o main.o new_matrix.o -o main

asm.o: asm.s
		gcc -g -Wall -c asm.s -o asm.o

new_matrix.o: new_matrix.c
		gcc -g -Wall -c new_matrix.c -o new_matrix.o

main.o: main.c
		gcc -g -Wall -c main.c -o main.o

clean:
		rm -f *.o main

run: main
		./main
