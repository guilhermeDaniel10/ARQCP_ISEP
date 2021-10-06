#include <stdio.h>
#include "asm.h"

int main(){
	
	int x = 0x0f0f0f0f;
	int countX = count_bits_zero(x);
	printf("O numero %d tem %d bits a zero\n",x,countX);
	
  return 0;
}

