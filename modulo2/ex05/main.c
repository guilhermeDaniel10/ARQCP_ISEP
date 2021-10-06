#include "stdio.h"
#include "asm.h"

short s=0;

int main(){
	short new_s = 0;

	printf("Valor de s:");
	scanf("%hu",&s);

	new_s = swapBytes();

	printf("Novo valor de s: %hu\n",new_s);

	return 0;
}
