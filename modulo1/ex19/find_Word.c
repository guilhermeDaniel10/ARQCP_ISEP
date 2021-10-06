#include <stdio.h>

char* find_word(char* str, char* word,char* initial_addr){
	
    int i,j,x=0,y=0,z=0;
    char *first_addr=NULL;

	for(i = 0; *(word+i) != '\0'; i++){
		x++;
	}
	
	if (x==0){
		return NULL;
	}
	
	for(i = 0; *(str+i) != '\0'; i++){
		z++;
	}
	
	if (z==0){
		return NULL;
	}
	
	for(i = 0; *(initial_addr+i) != '\0'; i++){			
		y=x;
		for(j = 0; *(word+j) != '\0'; j++){
			if(!(*(initial_addr+i+j) == *(word+j) || *(initial_addr+i+j) == *(word+j)-32 || *(initial_addr+i+j) == *(word+j)+32)){
				break;
			}
			y--;
			if(y == 0){
				first_addr = initial_addr+i;
				return first_addr;
			}
		}
	}	
		return NULL;
	}

	

