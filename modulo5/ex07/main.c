#include <stdio.h>
#include "main.h"

int main(){
  s1 stu;
  s1 *ptr = &stu;
  int a = 31;
  char b = '3';
  int c = 43;
  char d = '5';

  fill_s1(ptr, a,b,c,d);

  printf("%d", ptr->i);
  printf("\n%c", ptr->c);
  printf("\n%d", ptr->j);
  printf("\n%c", ptr->d);



  return 0;
}
