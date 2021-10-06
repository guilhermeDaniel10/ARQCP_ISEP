#include <stdio.h>
#include "asm.h"

int* ptrvec;
int num = 10;

int main(){
	
	int i;
	
    int array[] = {13,-21,501,-1,5,7,11,37,1101,255};
    
    ptrvec = array;
    
    vec_add_one();

	for(i=0;i<num;i++){
		printf("array[%d] = %d, ", i,array[i]);
	}

	printf("\n");
  return 0;
}
