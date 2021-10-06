#include <stdio.h>
#include "swap.h"

void print_vec(int *vec);

int main(){
    
    int vec1[10] = {3,5,7,8,3,4,7,9,4,0};
    int vec2[10] = {1,1,1,1,1,1,1,1,1,0};
	
	printf("vec1 original:");
	print_vec(vec1);
	
	printf("vec2 original:");
	print_vec(vec2);
		
	swap(vec1,vec2,10);
		
	printf("Novo vec1:");
	print_vec(vec1);
	
	printf("Novo vec2:");
	print_vec(vec2);

	return 0;
}

void print_vec(int *vec){
	
	int i;
	
	for(i=0;*(vec+i)!='\0';i++){
		printf("\n%dº valor do vetor = %d",i+1, *(vec+i));
	}	
	printf("\n");
}
