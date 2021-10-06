# makefile
main: main.o 
	gcc -Wall -g main.o -o main

main.o: main.c
	gcc -g -Wall -c main.c
	
clean:
		rm *.o main

run: main
	./main
