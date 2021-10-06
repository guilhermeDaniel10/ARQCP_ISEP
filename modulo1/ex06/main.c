#include <stdio.h>
#include "power.h"

int main(){

  int x, y;

  printf("Insert X value: ");
  scanf("%d", &x);
  printf("Insert Y value: ");
  scanf("%d", &y);

  power_ref(&x,y);

  printf("X^Y: %d\n", x);

  return 0;
}
