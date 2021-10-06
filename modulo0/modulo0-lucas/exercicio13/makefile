# makefile
prog_avg: line.o multiplication_table.o multiplication_table_n.o main.o
		gcc line.o multiplication_table_n.o multiplication_table.o main.o -o prog_avg
		
line.o: line.c
		gcc -g -Wall -c line.c -o line.o
		
multiplication_table_n.o: multiplication_table_n.c
		gcc -g -Wall -c multiplication_table_n.c -o multiplication_table_n.o
		
multiplication_table.o: multiplication_table.c
		gcc -g -Wall -c multiplication_table.c -o multiplication_table.o
		
main.o: main.c
		gcc -g -Wall -c main.c -o main.o
		
clean:
		rm -f *.o prog_avg
		
run: prog_avg
		./prog_avg
