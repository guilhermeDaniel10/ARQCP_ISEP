#include <stdio.h>
#include "asm.h"

int main(){

  int num1, num2;
  int num3;
  int *smaller = &num3;

  printf("Insira um número:");
  scanf("%d", &num1);
  printf("\nInsira outro número:");
  scanf("%d", &num2);

  int resultado = sum_smaller(num1, num2, smaller);
  printf("\nResultado da soma: %d", resultado);
  printf("\nMenor número: %d", *smaller);

  return 0;
}
