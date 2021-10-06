#include <stdio.h>

int count(int *array, int n, int value);

int main(){

	int n;
	int value;

	printf("Elemento que procura?\n");
	scanf("%d", &value);

	printf("Número de elementos do array?\n");
	scanf("%d", &n);

	int array[n];

	printf("Existem %d elementos de valor %d no vetor\n",count(array,n,value),value);

	return 0;
}

int count(int *array, int n, int value){

	int i;
	int cont=0;

	for(i=0;i<n;i++){
		printf("Introduza o %dº elemento do vetor:",i+1);
		scanf("%d", &array[i]);
	}
	for(i=0;i<n;i++){
		if(array[i]==value){
			cont++;
		}
	}
	
	return cont;
}
