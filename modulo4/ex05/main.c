#include <stdio.h>
#include "asm.h"

int main(){

  int n;
  int *v1 = &n;
  int v2;

  printf("Insira um número:");
  scanf("%d",&v2);
  printf("Antes do incremento: %d", *v1);
  int resultado = inc_and_square(v1,v2);
  printf("Quadrado do número: %d", resultado);
  printf("\nIncremento: %d", *v1);

  return 0;
}
