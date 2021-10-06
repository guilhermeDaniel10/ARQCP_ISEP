#include <stdio.h>
#include "asm.h"

char* ptr1;
char* ptr2;


int main(){
    char str1[] = "vvvb ola bvv";
    char str2[MAX_CHAR];
    
    ptr1 = str1;
    ptr2 = str2;
    
    
    str_copy_porto();


	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	
  return 0;
}
