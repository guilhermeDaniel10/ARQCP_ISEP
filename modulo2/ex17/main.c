#include <stdio.h>
#include "asm.h"

int num1 = 0;
int num2 = 0;
  int main(){
    char operator;

    while(operator != '.'){
    printf("Enter an operator (+, -, *, /, 2, 3): ");
    scanf("%c", &operator);


    int som, sub, mult, div, p2, p3;


    switch(operator)
    {

        case '+':
        printf("\nEnter two operands: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
            som = sum();
            printf("%d + %d = %d",num1, num2, som);
            break;

        case '-':
        printf("\nEnter two operands: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
            sub = subtraction();
            printf("%d - %d = %d",num1, num2, sub);
            break;

        case '*':
        printf("\nEnter two operands: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
            mult = multiplication();
            printf("%d * %d = %d",num1, num2, mult);
            break;

        case '/':
        printf("\nEnter two operands: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
            div = division();
            printf("%d / %d = %d",num1, num2, div);
            break;

        case '2':
        printf("\nEnter one operands: ");
        scanf("%d", &num1);

            p2 = power2();
            printf("%d ^2 = %d",num1, p2);
            break;

        case '3':
        printf("\nEnter one operands: ");
        scanf("%d", &num1);

            p3 = power3();
            printf("%d ^3 = %d",num1, p3);
            break;

    }
}
    return 0;
}
