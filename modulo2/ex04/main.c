#include <stdio.h>
#include "asm.h"

int op1=0,op2=0;

int main(){
	int rest = 0;
	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	printf("Valor op3:");
	scanf("%d",&op3);
	printf("Valor op4:");
	scanf("%d",&op4);
	rest = sum_v3();
	printf("sum = %d\n",rest);
	return 0;
}
