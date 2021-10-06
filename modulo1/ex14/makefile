#makefile
freq: frequencies.o main.o
	gcc frequencies.o main.o -o freq

frequencies.o: frequencies.c
	gcc -g -Wall -c frequencies.c -o frequencies.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm *.o freq

run:
	./freq
