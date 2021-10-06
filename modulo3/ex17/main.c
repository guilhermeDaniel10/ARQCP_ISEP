#include <stdio.h>
#include "asm.h"

int num;
int *ptrvec;


int main(){
	num = 3;
    int array[] = {2,0,1};
    int i;
    ptrvec = array;
    
    array_sort();

	for(i=0;i<num;i++){
		printf("array[%d] = %d, ", i,(*ptrvec)+i);
	}

	printf("\n");

  return 0;
}
