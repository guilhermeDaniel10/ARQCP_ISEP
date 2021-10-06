#include <stdio.h>
#include <stdlib.h>
#include "search_matrix.h"

int main(){
	
	int a[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
	int **new_matrix = (int **) malloc(4 * sizeof(int*));
	int i;
	for(i = 0; i < 4; i++){
		new_matrix[i] = (int *) malloc(3 * sizeof(int));
		new_matrix[i] = a[i]; 
	}

	int numero;
	printf("Introduza número a procurar: ");
	scanf("%d", &numero);
	
	int res = search_matrix(new_matrix, numero, 4, 3);
	
	if(res == 1){
		printf("O número %d está na matriz\n", numero);
	}else{
		printf("O número %d não está na matriz\n", numero);
	}
	
	return 0;
	
}
