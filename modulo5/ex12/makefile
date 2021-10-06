# makefile
main: search_matrix.o main.o
		gcc search_matrix.o main.o -o main
		
search_matrix.o: search_matrix.c search_matrix.h
		gcc -g -Wall -c search_matrix.c -o search_matrix.o
		
main.o: main.c search_matrix.h
		gcc -g -Wall -c main.c -o main.o
		
clean: 
	rm -f *.o main
		
run: main
	./main
