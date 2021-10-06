#include <stdio.h>
#include "asm.h"

int main(){
	
	int num = 10;
	int array[] = {300,5,10,10,5,498,10001,45,56,2};
	int *ptr = array;
	int countX = vec_count_bits_zero(ptr, num);
	printf("O numero total de bits a zero = %d\n",countX);
	
  return 0;
}

