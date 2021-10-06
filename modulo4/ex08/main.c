#include <stdio.h>
#include "asm.h"

int main(){
	int a =2;
	int num =1;
	int c =4;
	
	int *b = &num;
	int resultado = calc(a, b, c);
	
	printf("O resultado final = %d",resultado);
	
	return(0);
}
