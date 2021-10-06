#include <stdio.h>
#include "asm.h"


int num;
short *ptrvec;
short int x;

int main(void){ 
	x = 10001;
	num = 11;
		
    short int array[11] = {1300,0,5011,11,90,498,10001,7,56,90,2};
    ptrvec = array;

	printf("%d foi encontrado no endereco %p\n", x, vec_search());
	
  return 0;
}
