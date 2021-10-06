# makefile
main: main.o rotate_left.o rotate_right.o
	gcc -Wall -g main.o rotate_left.o rotate_right.o -o main

main.o: main.c rotate_left.h rotate_right.h
	gcc -g -Wall -c main.c

rotate_left.o: rotate_left.c
	gcc -Wall -g -c rotate_left.c

rotate_right.o: rotate_right.c
	gcc -Wall -g -c rotate_right.c

clean:
		rm *.o main

run: main
	./main
