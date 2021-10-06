#include <stdio.h>
#include "average.h"

int main(){

int n;

printf("introduza o número de elementos:");
scanf("%i",&n);

int array[n];
int media=0;
int i;


for(i=0;i<n;i++){
printf("Introduza o %dº numero:",i+1);
scanf("%d", &array[i]);
}

media = average(array,n);
printf("A média dos elementos é: %d\n",media);
return 0;

}
