# makefile
ex16a: changes.o main.o
		gcc changes.o main.o -o ex16a

changes.o: changes.c
		gcc -g -Wall -c changes.c -o changes.o
		
main.o: main.c
		gcc -g -Wall -c main.c -o main.o

clean:
		rm -f *.o ex16a
		
run: ex16a
		./ex16a
