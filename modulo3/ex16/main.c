#include <stdio.h>
#include "asm.h"

char vec1[] = {'a', 'b', 'c', 'd'};
char vec2[] = {'e','f','g','h'};
int num = 4;
char *ptr1 = vec1;
char *ptr2 = vec2;


int main(){

  int i = 0, j = 0;
  printf("Antes\n");
  for(i = 0; i < num; i++){
    printf("%c",vec1[i]);
  }
  printf("\n");
  for(j = 0; j < num; j++){
    printf("%c",vec2[j]);
  }
  swap();

printf("\nDepois\n");
  for(i = 0; i < num; i++){
    printf("%c",*(ptr1 + i));
  }
    printf("\n");
  for(j= 0; j < num; j++){
    printf("%c",*(ptr2 + j));
  }

  return 0;
}
