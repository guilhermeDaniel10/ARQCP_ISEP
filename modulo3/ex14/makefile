# makefile
main: main.o exists.o vec_diff.o
	gcc -Wall -g main.o exists.o vec_diff.o -o main

main.o: main.c asm.h
	gcc -g -Wall -c main.c

exists.o: exists.s
	gcc -g -Wall -c exists.s

vec_diff.o: vec_diff.s
	gcc -g -Wall -c vec_diff.s

clean:
		rm *.o main

run: main
	./main
