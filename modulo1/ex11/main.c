#include <stdio.h>
#include "palindrome.h"

int main(){

  char str[100];

  int check;
  
  printf("Insert a string:\n");
  fgets(str, sizeof(str), stdin);
  
  check = palindrome(str);

  if(check == 1){
    printf("Is palindrome");
  } else {
    printf("Is not palindrome");
  }


  return 0;
}
