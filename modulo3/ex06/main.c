#include <stdio.h>
#include "asm.h"

char str[] = " Abba ";
char *ptr1 = str;

int main(){
    int nAlteracoes;

    printf("Frase antes de encriptacao: %s\n", str);

    nAlteracoes = encrypt();

    printf("Frase depois de encriptacao:");
    while(*ptr1 != '\0'){
      printf("%c", *ptr1);
      ptr1++;
    }

    printf("\nNúmero de alterações: %d", nAlteracoes);


  return 0;
}
