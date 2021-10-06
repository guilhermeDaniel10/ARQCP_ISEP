#makefile
sortArray: array_sort.o main.o
	gcc array_sort.o main.o -o sortArray

array_sort.o: array_sort.c
	gcc -g -Wall -c array_sort.c -o array_sort.o

main.o: main.c
	gcc -c -Wall -c main.c -o main.o

clean:
	rm -f *.o sortArray

run:
	./sortArray
