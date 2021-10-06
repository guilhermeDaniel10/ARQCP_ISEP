#include <stdio.h>
#include "inc_sets.h"
#include "check.h"
#include "populate.h"

int main(){

  int i, size = 100, nSets = 0;
  int arr[size];
	populate(arr,size,20);

  for(i = 0; i < size - 2; i++){
    if(check(arr[i], arr[i + 1], arr[i + 2]) == 1){
      nSets++;
    }
    inc_nsets(arr);
  }


	printf(" %d sets satisfy.\n",nSets);
	return 0;

}
