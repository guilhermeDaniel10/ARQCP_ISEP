#include <stdio.h>
#include "asm.h"


void print_result(char op, int o1, int o2, int res)
{
printf("%d %c %d = %d\n", o1, op, o2, res);
}

int main(){
  int a = 2;
  int b = 3;
  int resultado;
  resultado = calculate(a,b);
  printf("Resultado: %d", resultado);

  return 0;
}
