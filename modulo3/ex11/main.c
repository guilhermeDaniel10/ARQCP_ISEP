#include <stdio.h>
#include "asm.h"

int num;
long long *ptrvec;


int main(){
	num = 11;
	
    long long array[] = {1300,0,5011,11,90,498,10001,7,56,90,2};
    ptrvec = array;
    
    int greater = vec_greater20();

	printf("%d\n", greater);

  return 0;
}
