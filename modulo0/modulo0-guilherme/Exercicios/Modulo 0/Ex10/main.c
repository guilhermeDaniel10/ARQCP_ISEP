#include <stdio.h>
#include "average.h"

int main(){

  int n;


  printf("Please enter the limit of the array: ");
  scanf("%d", &n);
  int vec[n];
  printf("Please enter the values of the array: ");

  for(int i = 0; i < n; i++){
    scanf("%d", &vec[i]);
  }

  int r = 0;

  r = average_array(vec, n);
  printf("Average is = %d\n", r);

  return 0;
}
