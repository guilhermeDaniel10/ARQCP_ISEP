#include <stdio.h>
#include "asm.h"

int main(){

  char s2[] = "sou igual";
  char s1[] = "sou igual";

  char *a = s1;
  char *b = s2;

  int resultado = test_equal(a,b);

  if(resultado == 0){
    printf("Não são iguais\n");
  } else {
    printf("São iguais\n");
  }
  return 0;
}
