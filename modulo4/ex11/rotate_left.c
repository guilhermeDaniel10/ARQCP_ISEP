#include <stdio.h>

int rotate_left(int num, int nbits){

  int num2;
	num2 = num << nbits;
	int num3;
	num3 = num >> (32-nbits);
	int num4;
	num4 = num3 | num2;
	return num4;
}
