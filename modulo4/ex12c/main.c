#include <stdio.h>
#include "asm.h"

int main(){
	
	int x = 0x0f0f0f0f;
	
	printf("Numero inicial %d\n",x);
	
	int pos=3;
	int *ptr = &x;
	activate_2bits(ptr,pos);
	
	printf("Novo numero %d\n",x);
	
  return 0;
}
