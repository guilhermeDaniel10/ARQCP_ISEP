#include <stdio.h>
int where_is(char *str, char c, int *p){
  int count = 0;
  int index = 0;

  while(*str != '\0'){
    if(*str == c){
      *p = index;
      count++;
      p++;
    }
    index++;
    str++;
  }

  return count;
}
