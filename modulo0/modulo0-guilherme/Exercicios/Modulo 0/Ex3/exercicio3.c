#include <stdio.h>

void fill_array(int *vec){

  printf("Insira 30 números:");

  for(int i=0;i<30;i++){
    scanf("%d", &vec[i]);
  }

}

float average(int *vec){
  int sum = 0;
  float ave;
  for(int i = 0; i < 30; i++){
    sum = sum + vec[i];
  }
  ave = sum / 30;

  return (ave);
}

int main(){

  int vec[30];
  fill_array(vec);
  int i;

  for(i = 0; i < 30; i++){
    printf("%d",vec[i]);
  }


  float result = average(vec);
  printf("\nAverage: %f", (double)result);

  return 0;
}
