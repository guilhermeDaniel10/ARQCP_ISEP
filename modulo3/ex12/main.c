#include <stdio.h>
#include "asm.h"

short vec[] = {1,120,140,5,6,19,110,98,111,32};
short *ptrvec = vec;
int num = 10;

int main(){
  int resultado;
  int i = 0;
  for(i = 0; i < 10; i++){
    printf("%u", vec[i]);
  }

  resultado = vec_zero();

  while(*ptrvec != '\0'){
    printf("%u\n", *vec);
    ptrvec++;
  }
  printf("Alteracoes: %d", resultado);

    short *ptr; // note that this is a far pointer
    printf( "TAMANHO%d\n", sizeof( ptr));

  return 0;
}
