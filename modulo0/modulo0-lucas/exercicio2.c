#include <stdio.h>

int sum(int a, int b);

int main(){

	int a;
	int b;

do{
    
    printf("Enter a:");
    scanf("%d", &a);
    
    printf("Enter b:");
    scanf("%d", &b);
    
    
	printf("%d + %d = %d \n",a,b,sum(a,b));

}while(sum(a,b)>10);

    return 0;

}

int sum(int a, int b){

	int c = a+b;

	return c;

}
