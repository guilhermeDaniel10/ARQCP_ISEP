# A simple Makefile
prog_avg: average.o main.o
		gcc average.o main.o -o prog_avg
		
average.o: average.c
		gcc -g -Wall -c average.c -o average.o
		
main.o: main.c
		gcc -g -Wall -c main.c -o main.o
		
clean:
		rm -f *.o prog_avg
		
run: prog_avg
		./prog_avg
