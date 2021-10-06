#makefile
compress: compress_short.o main.o
	gcc compress_short.o main.o -o compress

compress_short.o: compress_short.c
	gcc -g -Wall -c compress_short.c -o compress_short.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o compress

run:
	./compress
