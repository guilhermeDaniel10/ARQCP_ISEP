# makefile
main: main.o activate_bits.o
	gcc -Wall -g main.o activate_bits.o -o main

main.o: main.c activate_bits.h
	gcc -g -Wall -c main.c

activate_bits.o: activate_bits.c
	gcc -Wall -g -c activate_bits.c

rotate_right.o: rotate_right.c
	gcc -Wall -g -c rotate_right.c

clean:
		rm *.o main

run: main
	./main
