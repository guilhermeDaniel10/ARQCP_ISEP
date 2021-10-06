#include <stdio.h>
#include "asm.h"

int main(){
	
	int x[] = {0,0xffffffff,0xff,0xff0fffff,0xff8fffff,0xff7fffff,0x700000,0x800000};
	int num = 8;
	int i;
	int *ptrvec = x;
		
	printf("Vec inicial\n");
	for(i=0;i<num;i++){
		printf("[%d], ",x[i]);
	}
	

	changes_vec(ptrvec,num);
	
	printf("\nVec apos funcao\n");
	for(i=0;i<num;i++){
		printf("[%d], ",x[i]);
	}
	printf("\n");
	
  return 0;
}
