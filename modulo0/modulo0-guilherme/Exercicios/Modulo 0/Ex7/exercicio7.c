#include <stdio.h>

int count_words(char []);

int main(){

  char frase[100];
  printf("Insira uma frase:");
  scanf("%[^\n]", frase);

  printf("Frase: %s\n", frase);

  int d = count_words(frase);

  printf("O número de palavras é: %d\n", d);

  return 0;
}

int count_words(char *str) {
int i;
int totalWords = 1;

for(i = 0; str[i] != '\0'; i++){ // \0 é null
  if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
  totalWords++;
    }
  }

return totalWords;
}
