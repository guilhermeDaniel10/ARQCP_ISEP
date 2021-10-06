#include <stdio.h>
#include "activate_bits.h"

int main(){
  int a, left, right;

  a = 0b0101010;
	right = 0;
	left = 1;

	int resultado = activate_bits(a, left, right);
	printf("%d\n", a);
	printf("Resultado: %d\n", resultado);

  int c = 0;
  int masc = 1;
  for(c = 0; c < 10; c++){
    masc = masc << 1;
    printf("%d\n", masc);
  }
	return 0;



}
