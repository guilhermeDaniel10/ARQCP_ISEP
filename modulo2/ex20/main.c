#include <stdio.h>
#include "asm.h"

int num = 0;
  int main(){
    int res;


    printf("Insira um número:");
    scanf("%d", &num);

    res = check_num();

    if(res == 1){
      printf("Num is even and negative");
    }
    if(res == 2){
      printf("Num is odd and negative");
    }
    if(res == 3){
      printf("Num is even and positive");
    }
    if(res == 4){
      printf("Num is odd and positive");
    }

  return 0;
  }
