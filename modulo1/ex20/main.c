#include <stdio.h>
#include "find_all_words.h"

int main(){
	char str[150],word[150];
	char *addrs[20];

	printf("\nIntroduza o texto:");
	scanf("%[^\n]%*c",str);

	printf("\nIntroduza a palavra que procura:");
	scanf("%s",word);

	find_all_words(str,word,addrs);

	return 0;
}
