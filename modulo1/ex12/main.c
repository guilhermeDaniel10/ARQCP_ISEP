#include <stdio.h>
#include "capitalize.h"

int main(){

  char str[100];

  printf("Insert a string: ");
  fgets(str, sizeof(str), stdin);

  capitalize(str);
  printf("String: %s", str);

  return 0;
}
