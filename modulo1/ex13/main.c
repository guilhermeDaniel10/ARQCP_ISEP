#include <stdio.h>
#include "where_is.h"

int main(){
  char str[30];
  int vec[30];
  char c;

  printf("Insert a string: ");
  fgets(str, sizeof(str), stdin);

  printf("Insert character to search: ");
  scanf("%c", &c);

  int n = where_is(str, c, &vec[0]);




  printf("\nThe character %c was found %d times.", c, n);

  return 0;
}
