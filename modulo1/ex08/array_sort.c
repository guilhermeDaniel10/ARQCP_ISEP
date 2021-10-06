#include <stdio.h>

void array_sort2(int *vec, int n){

	int i,j,z;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( *(vec+j) < *(vec+i) ){
				z = *(vec+i);
				*(vec+i) = *(vec+j);
				*(vec+j) = z;
			}
		}
	}
}
