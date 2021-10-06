main: update_grades.o main.o
		gcc -Wall -g update_grades.o main.o -o main

update_grades.o: update_grades.s
		gcc -g -Wall -c update_grades.s

main.o: main.c update_grades.h
		gcc -g -Wall -c main.c -o main.o

clean:
		rm -f *.o main

run: main
		./main
