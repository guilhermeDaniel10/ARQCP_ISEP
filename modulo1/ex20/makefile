#makefile
ex20: find_all_words.o main.o
	gcc find_all_words.o main.o -o ex20

find_all_words.o: find_all_words.c
	gcc -g -Wall -c find_all_words.c -o find_all_words.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex20

run:
	./ex20
