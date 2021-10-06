#include <stdio.h>
#include "changes.h"

int main(){
	
	int x = 0x00F00000;
	
	printf("Numero inicial %d\n",x);
	
	int *ptr = &x;
	changes(ptr);
	
	printf("Novo numero %d\n",x);
	
  return 0;
}
