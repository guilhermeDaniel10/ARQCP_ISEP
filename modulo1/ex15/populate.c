#include <stdlib.h>
#include <time.h>

void populate( int *vec , int num, int limit){
  int i;
  for( i = 0 ; i < num ; i++ ){
      *(vec + i) = rand() % limit;
   }
}
