#include <stdio.h>
#include "odd_sum.h"

int main(){
  int sum;

  int vec[] = {9, 1, 2, 3, 4, 5, 6, 7, 8, 1};
  sum = odd_sum(vec);

  printf("Odd sum: %d", sum);

  return 0;
}
