#include <string.h>
#include <stdio.h>

int palindrome(char *str1){
  int k, size = 0, i = 0;
  char str[100];
  char dest[100];
  strcpy(str,str1);

  for(i = 0; i < 100; i++){
    if(str[i] == '\0'){
      break;
    }
    if(str[i]>='A' && str[i]<='Z'){
      str[i] -= 'A' - 'a';
    }
    if(!(str[i] == ' ')){
      if(str[i] >= 'a' && str[i] <= 'z'){
      dest[size] = str[i];
      size++;
    }
  }
  dest[size] = 0;

  }

  if(size == 0){
    return 0;
  }


for(k = 0;k < size ;k++){
    if(dest[k] != dest[size-k-1]){
      printf("\n%c", dest[k]);
      printf("%c", dest[k]);
    return 0;
   }
 }
return 1;

}
