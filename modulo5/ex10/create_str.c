#include <stdlib.h>
#include <stdio.h>


void copiarString(char * ptr, char * str, int tamanho);

char * create_str(char str[80]){

	char* new_str;
	int i = 0;
	
	while(str[i] != 0){									//contador do numero de elementos da string
		i++;
	}
	
	new_str = (char *) calloc( i+1, sizeof(char));		//reserva um pedaço da memoria com o tamanho do char
		if(new_str == NULL){
			return NULL;
		}				
	
	copiarString(new_str, str, i);						//executa a copia da string
	
	return new_str;
}

void copiarString(char * new_str, char * str, int tamanho){
	int j;
	
	for (j = 0; j < tamanho; j++){
		*new_str = str[j];									//faz a copia da string char a char
		new_str++;
	}
}
