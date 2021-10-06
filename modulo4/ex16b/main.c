#include <stdio.h>
#include "asm.h"

int main(){
	
	int x = 0x00F00000;;
	
	printf("Numero original %d\n",x);
	
	int *ptr = &x;
	changes(ptr);
	
	printf("Novo numero %d\n",x);
	
  return 0;
}
