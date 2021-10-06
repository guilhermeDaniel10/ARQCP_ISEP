#include <stdio.h>
#include "asm.h"

int main(){

  short vec[] = {1,2,3,4,5,6};
  int n = 6;

  int resultado = count_even(vec,n);

  printf("Even: %d", resultado);

  return 0;
}
