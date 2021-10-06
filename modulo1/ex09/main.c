#include <stdio.h>
#include "sort.h"

int main(){

  int n, i;
  printf("Insert the size of the array: ");
  scanf("%d", &n);

  int src[n];
  int dest[n];

  printf("Insert the array:\n");

  for(i = 0; i < n; i++){
    scanf("%d", &src[i]);
  }
  int size;

  size = sort_without_reps(src, n, dest);
  printf("SIZE: %d\n", size);

  printf("Second array:\n");

  for(i = 0; i < size; i++){
    printf("%d\n",dest[i]);
  }
  return 0;
}
