#include <stdio.h>
void frequencies(float *grades, int n, int *freq){

  int tmp = 0;
  int i, j;
  float *grades2 = grades;

  for(i = 0; i <= 20; i++){
    for(j = 0; j < n; j++){
      if(*grades >= i && *grades < i + 1){
        tmp++;
      }
      grades++;
    }
    *freq = tmp;
    freq++;
    grades = grades2;
    tmp = 0;
  }
}
