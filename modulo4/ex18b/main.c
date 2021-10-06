#include <stdio.h>
#include "asm.h"

int main(){
	
    char v[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,0}; 
	char *vec = v;
	int x = 0x400;
	int sumMultiplos = sum_multiples_x(vec, x);
	
	printf("A quatidade de multiplos no vetor foi %d\n",sumMultiplos);
	
  return 0;
}
