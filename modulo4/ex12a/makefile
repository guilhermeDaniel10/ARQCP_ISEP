# makefile
ex12a: activate_bit.o main.o
		gcc activate_bit.o main.o -o ex12a

activate_bit.o: activate_bit.c
		gcc -g -Wall -c activate_bit.c -o activate_bit.o
		
main.o: main.c
		gcc -g -Wall -c main.c -o main.o

clean:
		rm -f *.o ex12a
		
run: ex12a
		./ex12a
