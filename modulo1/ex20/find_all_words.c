#include <stdio.h>

void find_all_words(char* str, char* word, char** addrs){
	int i,j,x=0,y=0,cont=0;
	char *p;

	for(i = 0; *(word+i) != '\0'; i++){
		x++;
	}
	
	for(i = 0; *(str+i) != '\0'; i++){	
		y=x;
		for(j = 0; *(word+j) != '\0'; j++){
			if(!(*(str+i+j) == *(word+j) || *(str+i+j) == *(word+j)-32 || *(str+i+j) == *(word+j)+32)){
				break;
			}
			y--;
			if(y == 0){
				p=str+i;
				(*(addrs+cont)) = p;
				cont++;
			}
		}
		
	}	
	
	if(cont!=0){
		printf("\nA palavra \"%s\" foi encontrada na frase \"%s\" no endereco ->",word,str);
		for(i=0; i < cont; i++){
			printf("%p\n",(*(addrs+i)));
		}
	}
}





