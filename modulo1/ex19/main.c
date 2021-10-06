#include <stdio.h>
#include "find_Word.h"

int main(){
	char str[150],word[150];
	char *initial_addr = str;

	printf("\nIntroduza o texto:");
	scanf("%[^\n]%*c",str);

	printf("\nIntroduza a palavra que procura:");
	scanf("%s",word);

	if(find_word(str,word,initial_addr) != NULL){
		printf("\nA palavra \"%s\" foi encontrada na frase \"%s\" no endereco -> %p\n",word,str,find_word(str, word, initial_addr));
	} else {
		printf("\nA palavra \"%s\" nao existe na frase \"%s\"",word,str);
	}

	return 0;
}
