#include "stdio.h"
#include "asm.h"

int A = 0;
int B = 0;

int main(){

	 int multiple = 0;
	
	 printf("A:");
	 scanf("%d",&A);
	
	 printf("B:");
	 scanf("%d",&B);
	
	 multiple = isMultiple();
	   
	 if(multiple==1){
		printf("\nA(%d) is multiple of B(%d)\n",A,B);
	 }else{
		printf("\nA(%d) isnt multiple of B(%d)\n",A,B);
	 }

	return 0;
}
