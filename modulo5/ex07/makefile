main: fill_s1.o main.o
		gcc -Wall -g fill_s1.o main.o -o main

fill_s1.o: fill_s1.s
		gcc -g -Wall -c fill_s1.s

main.o: main.c main.h
		gcc -g -Wall -c main.c -o main.o

clean:
		rm -f *.o main

run: main
		./main
