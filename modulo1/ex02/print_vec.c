#include <stdio.h>

void print_vec(int vec[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n%dº valor do vetor = %d",i+1, vec[i]);
	}	
	printf("\n");
}
