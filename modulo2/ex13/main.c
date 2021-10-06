#include <stdio.h>
#include "asm.h"

  int base = 0;
  int height = 0;

  int main(){
    int res;
    printf("Altura: ");
    scanf("%d", &base);
    printf("Base: ");
    scanf("%d", &height);

    res = getArea();
    printf("Área do Triângulo: %d\n", res);


  return 0;
  }
