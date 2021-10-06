#include <stdio.h>
#include "asm.h"

int num;
int *ptrvec;


int main(){
	num = 10;
	int soma;
    int array[] = {-300,5,-10,10,-5,498,10001,-45,56,2};
    ptrvec = array;
    
    soma = sum_first_byte();

	printf("%d\n", soma);

  return 0;
}
