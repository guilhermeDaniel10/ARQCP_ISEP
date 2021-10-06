# makefile for size_string
prog_avc: size_string.o main2.o
		gcc size_string.o main2.o -o prog_avc
		
size_string.o: size_string.c
		gcc -g -Wall -c size_string.c -o size_string.o
		
main2.o: main2.c
		gcc -g -Wall -c main2.c -o main2.o
		
clean:
		rm -f *.o prog_avc
		
run: prog_avc
		./prog_avc
