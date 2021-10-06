#makefile
determine_set: check.o inc_sets.o populate.o main.o
	gcc check.o inc_sets.o populate.o main.o -o determine_set

check.o: check.c
	gcc -g -Wall -c check.c -o check.o

inc_sets.o: inc_sets.c
	gcc -g -Wall -c inc_sets.c -o inc_sets.o

populate.o: populate.c
	gcc -g -Wall -c populate.c -o populate.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o determine_set

run:
	./determine_set
