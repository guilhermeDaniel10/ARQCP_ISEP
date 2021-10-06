#include "stdio.h"
#include "asm.h"

int op1 = 2147483647;
int op2 = 2147483647;

long long int sum =0;

int main(){
	
	sum = sum2ints();
	
	printf("\nTransformado:%lld\n",sum);

	return 0;
}
