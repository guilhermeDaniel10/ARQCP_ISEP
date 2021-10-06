#include <stdio.h>
#include "array_sort.h"

int main(){

	int n;
	int i;
	
	printf("Quantidade de elementos que vai introduzir:");
	scanf("%d",&n);
	
	int vec[n];
	
	for(i=0;i<n;i++){
		printf("Introduza o elemento %d/%d:",i+1,n);
	    scanf("%d",vec+i);
	}
	
	array_sort2(vec,n);
	
	for(i=0;i<n;i++){
		printf("Elemento %d/%d = %d\n",i+1,n,*(vec+i));
	}

	return 0;
}
