#include <stdio.h>
#include "asm.h"

int main(){

	int arr1[] = {3, 1, 2, 3};
  int arr2[] = {0, 0, 0};
  int *vec1 = arr1;
  int *vec2 = arr2;
  char x = 1;
  int i;
  int tamanho = arr1[0];

  add_byte(x, vec1, vec2);

  for(i = 0; i < tamanho; i++){
    printf("Soma: %d", arr2[i]);

  }


  return 0;
}
