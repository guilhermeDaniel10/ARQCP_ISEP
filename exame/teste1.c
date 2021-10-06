#include <stdio.h>

int main(){

	char x = -1;
	char y = (unsigned)x >> 1;
	
	printf("valor x -> %d; valor y -> %d;\n",x,y);
	
	return 0;
}
