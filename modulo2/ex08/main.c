#include "stdio.h"
#include "asm.h"

int main(){
	short singleS =0;
	
	printf("Introduce first short value:");
	scanf("%hu",&s1);
	
	printf("Introduce second short value:");
	scanf("%hu",&s2);

	singleS = crossSumBytes();
	
	printf("A soma dos dois valores = %hu\n", singleS);

	return 0;
}
