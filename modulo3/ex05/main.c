#include <stdio.h>
#include "asm.h"

int* ptrvec;
int num = 10;

int main(){
	
	int soma, media;
	
    int array[] = {13,40,501,5,5,7,11,37,1101,255};
    ptrvec = array;
    
    soma = vec_sum();	
	media = vec_avg();

	printf("Soma: %d \nMedia: %d\n", soma, media);

  return 0;
}
