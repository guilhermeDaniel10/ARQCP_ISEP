#include <stdio.h>
#include "asm.h"

int num;
int *ptrvec;


int main(){
	num = 10;
	int i;
    int array[] = {-300,5,-10,10,-5,498,10001,-45,56,2};
    ptrvec = array;
    
    keep_positives();

	for(i=0;i<num;i++){
		printf("array[%d] = %d, ", i,array[i]);
	}

	printf("\n");

  return 0;
}
