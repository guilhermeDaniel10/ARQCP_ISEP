#include <stdio.h>
#include "asm.h"

char *ptr1;

int main(){
	
	int num1, num2;
	
    char string[] = "Ola eu sou o Lucas";
    ptr1 = string;
    
    num1 = encrypt();
    	printf("%s \n %d\n", string, num1);

	num2 = decrypt();
		printf("%s \n %d\n", string, num2);

  return 0;
}
