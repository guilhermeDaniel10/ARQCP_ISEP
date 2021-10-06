# makefile
main: fill_student.o main.o
		gcc fill_student.o main.o -o main
		
ex3.o: fill_student.c
		gcc -g -Wall -c fill_student.c -o fill_student.o
		
main.o: main.c
		gcc -g -Wall -c main.c -o main.o
		
clean: 
	rm -f *.o main
		
run: main
	./main
