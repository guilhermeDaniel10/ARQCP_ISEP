#include <stdio.h>

char* find_word(char* str, char* word,char* initial_addr){
	
    int i,j,flag=0,x=0,y=0;
    char *first_addr=NULL;

	for(i = 0; *(word+i) != '\0'; i++){
		x++;
	}
	
	if (x==0){
		return NULL;
	}
	
	for(i = 0; *(str+i) != '\0'; i++){			
		y=x;
		for(j = 0; *(word+j) != '\0'; j++){
			if(!(*(str+i+j) == *(word+j) || *(str+i+j) == *(word+j)-32 || *(str+i+j) == *(word+j)+32)){
				break;
			}
			y--;
			if(y == 0){
				first_addr = str+i;
				return first_addr;
				/*flag=1;*/
			}
		}
	}
		if(flag == 1){
			return first_addr;
		}
		return NULL;
	}
