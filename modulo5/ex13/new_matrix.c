#include <stdlib.h>

int **new_matrix(int lines, int columns){
  int i;
  int **matrix = (int **) malloc(lines * sizeof(int));

  int **copy = matrix;

  for(i = 0; i < lines; i++){
    *copy = (int *) malloc(columns * sizeof(int));
    copy++;
  }
  return matrix;
}
