#makefile
ex04: upper1.o main.o
	gcc upper1.o main.o -o ex04

upper1.o: upper1.c
	gcc -g -Wall -c upper1.c -o upper1.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex04

run:
	./ex04
