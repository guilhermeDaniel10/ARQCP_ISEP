#include <stdio.h>
#include "asm.h"

int main(){
	int n = 10;
	int total;
    
    total = sum_n(n);

	printf("%d\n", total);

  return 0;
}
