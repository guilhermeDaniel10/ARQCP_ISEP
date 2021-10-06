#include <stdio.h>
#include "sum_even.h"

int main(){
  int i, n, even = 0;
  printf("Number of elements in the array:\n ");
  scanf("%d", &n);

  int vec[n];
  
  for(i = 0; i < n; i++){
    vec[i] = i;
  }
  even = sum_even(vec, n);

  printf("\nTotal: %d", even);

  return 0;
}
