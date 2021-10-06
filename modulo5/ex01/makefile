main: main.o
	gcc -Wall -g main.o -o main

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

clean:
	rm -f *.o main

run: main
	./main
