#include "stdio.h"
#include "asm.h"

int op1 = 2147483647;
int op2 = 1;

int main(){

	 long long int sum = 0;

	 int flag = 0;
	
 	 sum =(long long int) op1 +(long long int) op2;
	
	 flag = test_flags();
	   
	 if(flag==1){
		printf("\nHouve carry e ou Overflow resultado foi de %lld\n",sum);
	 }else{
		printf("\nNao houve carry e o resultado foi de %lld\n",sum);
	 }

	return 0;
}
