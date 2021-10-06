#include <stdio.h>
#include "asm.h"

short int vec[] = {1, 2, 3, 4, 1, 5, 6, 9};
short int *ptrvec = vec;
int num = 8;
short int x = 1;

int main(){

  int resultado = exists();

  printf("%d\n", resultado);
  if(resultado == 1){
    printf("O valor x existe mais que uma vez no array.\n");
  }
  else {
    printf("O valor não existe mais que uma vez no array.\n");
  }

  int diferenca = vec_diff();

  printf("Diferenca: %d", diferenca);

  return 0;
}
