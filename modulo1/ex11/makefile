#makefile
isPalindrome: palindrome.o main.o
	gcc palindrome.o main.o -o isPalindrome

palindrome.o: palindrome.c
	gcc -g -Wall -c palindrome.c -o palindrome.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o isPalindrome

run:
	./isPalindrome
