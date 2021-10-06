#include <stdio.h>
#include "where_exists.h"

int main(){
	
  char *p;
  
  char str1[20];
  char str2[40];
  
  printf("Insert the first string:\n");
  scanf("%[^\n]%*c",str1);
  
  printf("Insert the second string:\n");
  scanf("%[^\n]%*c",str2);

  p = where_exists(str1,str2);

  if(p==NULL){
	printf("There wasnt an occurrence of \"%s\" within \"%s\" !!!\n", str1, str2);
  }else{
	printf("There was an occurrence of \"%s\" within \"%s\" in this address --> %p\n", str1, str2, p);
  }
  
  return 0;
}
