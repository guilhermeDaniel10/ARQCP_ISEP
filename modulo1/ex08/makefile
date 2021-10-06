#  Makefile
ex7: array_sort.o main.o
		gcc array_sort.o main.o -o ex7
		
array_sort.o: array_sort.c
		gcc -g -Wall -c array_sort.c -o array_sort.o
		
main.o: main.c
		gcc -g -Wall -c main.c -o main.o
		
clean:
		rm -f *.o ex7
		
run: ex7
		./ex7
