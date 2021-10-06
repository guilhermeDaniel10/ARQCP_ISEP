#include <stdio.h>
#include "asm.h"

int current = 0;
int desired = 0;
  int main(){
    int res;


    printf("Temperatura atual:");
    scanf("%d", &current);
    printf("Temperatua esperada:");
    scanf("%d", &desired);
    res = needed_time();
    printf("\nTempo que demora a atingir a temperatura esperada: %d", res);


  return 0;
  }
