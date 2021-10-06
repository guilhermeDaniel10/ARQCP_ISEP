#makefile
power_cal: power.o main.o
	gcc power.o main.o -o power_cal

power.o: power.c
	gcc -g -Wall -c power.c -o power.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o power_cal

run:
	./power_cal
