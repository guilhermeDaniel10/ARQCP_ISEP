#include <stdio.h>
#include "join_bits.h"

int main(){
	
    int a = 0;
    int b = -1;
    int pos = 8;
	int sum = join_bits(a, b, pos);
	
	printf("A soma foi %d\n",sum);
	
  return 0;
}
