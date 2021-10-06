#include <stdio.h>
#include "asm.h"

int op1=0,op2=0;

int main(){
	int rest = 0;
	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	rest = sum_v2();
	printf("sum = %d",rest);
	return 0;
}
