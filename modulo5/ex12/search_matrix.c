#include <stdio.h>
int search_matrix(int **new_matrix, int numero, int y, int k){
	int i;
	int j;
	for(i = 0; i < y; i++){
		for(j = 0; j < k; j++){
			if(*(*(new_matrix+i)+j) == numero){
				return 1;
			}
		}
	}
	return 0;
}
