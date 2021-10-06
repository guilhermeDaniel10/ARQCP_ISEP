exercicio: size_string.o main.o
	gcc size_string.o main.o -o exercicio

string.o: size_string.c
	gcc -g -Wall -c size_string.c -o size_string.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o exercicio

run: exercicio
	./exercicio
