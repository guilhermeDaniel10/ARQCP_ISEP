#makefile
change_capital: capitalize.o main.o
	gcc capitalize.o main.o -o change_capital

capitalize.o: capitalize.c
	gcc -g -Wall -c capitalize.c -o capitalize.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o change_capital

run:
	./change_capital
