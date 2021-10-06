#include <stdio.h>
#include "asm.h"

int main(){
    char input[MAX_CHAR] = {'0','a','A','0','3','H','0'};
    ptr1 = input;
    
    int res = zero_count();

	printf("Quantidade de 0 na String foi de %d\n", res);
  return 0;
}
