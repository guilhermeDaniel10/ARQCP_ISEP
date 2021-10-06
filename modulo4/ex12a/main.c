#include <stdio.h>

#include "activate_bit.h"

int main(){
	
	int x = 0x0f0f0f0f;
	int pos=3;
	int *ptr = &x;
	int changed = activate_bit(ptr,pos);
	
	if(changed == 1){
		printf("O numero %d foi alterado\n",x);
	} else {
		printf("O numero %d esta igual\n",x);
	}
	

  return 0;
}
