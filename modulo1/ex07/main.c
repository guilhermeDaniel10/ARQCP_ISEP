#include <stdio.h>
#include "array_sort.h"

int main(){

  int n, i;

  printf("Insert the array size: ");
  scanf("%d", &n);

  int vec[n];

  printf("Insert the array values: ");

  for(i = 0; i < n; i++){
    scanf("%d", &vec[i]);
  }

  array_sort1(vec, n);

  printf("Ordered array:\n");

  for(i = 0; i < n; i++){
    printf("%d\n", vec[i]);
  }


  return 0;
}
