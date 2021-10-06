# makefile
ex14a: join_bits.o main.o
		gcc join_bits.o main.o -o ex14a

join_bits.o: join_bits.c
		gcc -g -Wall -c join_bits.c -o join_bits.o
		
main.o: main.c
		gcc -g -Wall -c main.c -o main.o

clean:
		rm -f *.o ex14a
		
run: ex14a
		./ex14a
