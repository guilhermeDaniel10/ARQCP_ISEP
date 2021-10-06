#include <stdio.h>

int main(){
  int a;
  int b;
  int sum = 11;

  while (sum >= 10){
    printf("Introduza um número: ");
    scanf("%d", &a);
    printf("Introduza outro número: ");
    scanf("%d", &b);

    sum = a + b;

    printf("A soma é: %d\n", sum);

}
return 0;

}
