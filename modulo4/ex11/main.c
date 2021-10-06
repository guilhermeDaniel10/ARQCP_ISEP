#include <stdio.h>
#include "rotate_left.h"
#include "rotate_right.h"

int main(){
  int num =10;

	int nbits =1;
	printf("%d\n",num);
	num=rotate_right(num,nbits);
	printf("%d\n",num);
	num=rotate_left(num,nbits);
	printf("%d\n",num);


  return 0;
}
