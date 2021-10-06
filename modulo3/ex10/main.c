#include <stdio.h>
#include "asm.h"

void str_cat(void);

char v1[] = "guilherme";
char v2[] = "daniel";
char v3[40];

char *ptr1 = v1;
char *ptr2 = v2;
char *ptr3 = v3;

int main(){

  str_cat();

  printf("Frase concatenada: ");

  while(*ptr3 != '\0'){
    printf("%c",*ptr3);
    ptr3++;
  }

  return 0;
}
