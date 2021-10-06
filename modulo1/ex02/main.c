#include <stdio.h>
#include "copy_vec.h"
#include "print_vec.h"

int main(){
	
	int n;
	printf("Introduza o tamanho do vetor:");
	scanf("%d",&n);
	
	int i;
	int vec1[n];
	int vec2[n];
	for(i=0;i<n;i++){
		printf("Introduza o %dº valor do vetor:",i+1);
		scanf("%d",&vec1[i]);
	}
	
	copy_vec(vec1,vec2,n);
	
	print_vec(vec2,n);
	
	return 0;
}
