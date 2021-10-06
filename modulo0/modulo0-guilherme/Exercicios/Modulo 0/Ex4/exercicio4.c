#include <stdio.h>

int count(int *vec, int n, int value){

int counter = 0;

  for(int i = 0; i < n; i++){
    if(vec[i] == value){
      counter++;
    }
  }
  return counter;
}

int main(){
  int n, value, counter;

  printf("Insira o limite do array: ");
  scanf("%d", &n);

  int vec[n];

  printf("Insira os valores do array: \n");

  for(int i = 0; i < n; i++){
    scanf("%d", &vec[i]);
  }

  printf("Valor a procurar: ");
  scanf("%d", &value);
  counter = count(vec, n, value);

  printf("O valor %d, aparece %d vezes\n", value, counter);
}
