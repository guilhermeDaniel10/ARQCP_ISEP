#include <stdio.h>
#include "upper1.h"

int main(){

  char str[20];
  printf("Insert a string:\n ");
  fgets(str, sizeof(str), stdin);

  printf("Initial String: %s", str);
  upper1(str);

  printf("To upper case String: %s", str);
  return 0;
}
