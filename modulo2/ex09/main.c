#include "stdio.h"
#include "asm.h"

char A = 0;
short B = 0;
long C = 0;
long D = 0;

long long int value = 0;

int main(){
 
	printf("Valor de A:");
	scanf("%s",&A);
	
	printf("\nValor de B:");
	scanf("%hu",&B);
	
	printf("\nValor de C:");
	scanf("%lu",&C);
	
	printf("\nValor de D:");
	scanf("%lu",&D);
	
	value = sum_and_subtract();
	
	printf("\nTransformado:%llu\n",value);

	return 0;
}
