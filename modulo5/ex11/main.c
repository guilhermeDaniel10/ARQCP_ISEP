#include <stdio.h>
#include "new_matrix.h"

int main(){

  int **matriz = new_matrix(4,6);
  printf("Address of matrix = %p\n", matriz);

  return 0;
}
