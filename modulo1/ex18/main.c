#include <stdio.h>
#include "compress_short.h"

int main(){
  short arrs[] = {0, 1, 2, 3};
  int n = 4;
  int i;
  int arri[2];

  compress_shorts(arrs, n, arri);
  for(i = 0; i < 2; i++){
    printf("%d", arri[i]);
  }
return 0;
}
