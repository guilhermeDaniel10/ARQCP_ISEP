#include <stdio.h>
#include "asm.h"

int main(){

  int a = 3, b = 5, c = 2;
  int maior = greatest(a,b,c);

  printf("O maior valor é: %d", maior);


  return 0;
}
