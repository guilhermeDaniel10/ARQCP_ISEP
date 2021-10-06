#include <stdio.h>
#include "asm.h"

int code = 0; 
int currentSalary = 0;

int main(){

	int newSalary = 0;

	printf("Enter the employee code:");
	scanf("%d",&code);

	printf("Enter the current salary:");
	scanf("%d",&currentSalary);

	newSalary = new_salary();

	printf("The employee new salary is %d€\n", newSalary);

	return 0;
}
