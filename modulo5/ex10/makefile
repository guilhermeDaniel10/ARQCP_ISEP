# makefile
main: create_str.o main.o
		gcc create_str.o main.o -o main
		
create_str.o: create_str.c create_str.h
		gcc -g -Wall -c create_str.c -o create_str.o
		
main.o: main.c create_str.h
		gcc -g -Wall -c main.c -o main.o
		
clean: 
	rm -f *.o main
		
run: main
	./main
