#include "stdio.h"
#include "asm.h"

char byte1= 0;
char byte2= 0;
short s=0;

int main(){
	short singleS =0;
	
	printf("Introduce first char:");
	scanf("%c",&byte1);
	
	printf("Introduce second char:");
	scanf(" %c",&byte2);

	singleS = concatBytes();
	
	printf("A conquetenacao dos dois bytes = %c", singleS);

	return 0;
}
