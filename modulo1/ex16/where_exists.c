#include <stdio.h>

char* where_exists(char* str1, char* str2){

	int i,j, flag=0,x=0,y=0;
	
	char *pointer;
	
	for(i = 0; *(str1+i) != '\0'; i++){
		x++;
	}
	
	for(i = 0; *(str2+i) != '\0'; i++){
		y=x;
		if(*(str2+i) == *(str1)){
		flag=1;
			for(j = 0; *(str1+j) != '\0'; j++){
				if(*(str2+i+j) == *(str1+j)){
					if(flag==1){
						pointer = str2+i+j;
					}
					y--;
					flag=0;
				} else {
					break;
				}
			}
		}
		if(y==0){
			break;
		}
	}
	
	if(y==0){
		return pointer;
	}
	
	return NULL;
}
