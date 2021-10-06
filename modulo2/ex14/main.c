#include <stdio.h>
#include "asm.h"

  int main(){
    int res;

    res = getArea();
    printf("Área do Triângulo: %d\n", res);
    printf("Altura: ");
    scanf("%d", &base);
    printf("Base: ");
    scanf("%d", &height);

    res = getArea();
    printf("Área do Triângulo: %d\n", res);


  return 0;
  }
