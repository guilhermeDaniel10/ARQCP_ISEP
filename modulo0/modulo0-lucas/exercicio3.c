#include <stdio.h>

#define MAX_ARRAYSIZE (30)

void fill_array(int *vec);

int main(){

	int vec[MAX_ARRAYSIZE];

	fill_array(vec);

	return 0;
}

void fill_array(int *vec){

	int i;
	int sum;
	float average = 0.0f;

	for (i = 0; i<MAX_ARRAYSIZE; i++){
		printf("Introduza o numero:");
		scanf("%d", &vec[i]);
		sum += vec[i];
	}

	average = (float) sum/MAX_ARRAYSIZE;
	printf("A média das %d variaveis é %f \n",MAX_ARRAYSIZE,average);
}
