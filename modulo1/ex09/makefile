#makefile
sorter: sort.o main.o
	gcc sort.o main.o -o sorter

sort.o: sort.c
	gcc -g -Wall -c sort.c -o sort.o

main.o: main.c
	gcc -c -Wall -g main.c -o main.o

clean:
	rm -f *.o sorter

run:
	./sorter
