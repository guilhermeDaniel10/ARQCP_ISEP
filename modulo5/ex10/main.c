#include <stdio.h>
#include <stdlib.h>
#include "create_str.h"

int main(void){
	char str[80] = "ARQCP is cooool";
		
	char *new_str = create_str(str);	
	
	if(new_str != NULL){
		printf("String sem espaço extra:%s", new_str);				
	}else{
		printf("ERROR!!!!");
	}
	free(new_str); 
																
	return 0;
}
