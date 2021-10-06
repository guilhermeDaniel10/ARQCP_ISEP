#include <stdio.h>
#include <string.h>

int count_words(char *str);

#define MAX_ARRAYSIZE (100)

int main(){

	char str[MAX_ARRAYSIZE];

	printf("Introduza o texto:");
	scanf("%s",str);

	printf("O número de palavras no texto foi de %d\n",count_words(str));

	return 0;
}

int count_words(char *str){

	int i;
	int cont=1;

	for(i=0;str[i]!='\0';i++){	
		if(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
			cont++;
		}
	}
return cont;
}
