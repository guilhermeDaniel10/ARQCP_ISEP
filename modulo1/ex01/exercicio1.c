#include <stdio.h>

int main(){

	int x =5;
	int* xPtr = &x;
	float y = *xPtr +3;
	int vec[] ={10,11,12,13};
	
	printf("valor x -> %d; valor y -> %f;\n",x,y);
	printf("address x -> %p; address xPtr -> %p;\n",&x,&xPtr);
	printf("valor xPtr -> %d;\n", *xPtr);
	printf("address vec -> %p;\n",&vec);
	
	int i;
	for(i=0;i<4;i++){
		printf("valor vec[%d] -> %d; endereço vec[%d] -> %p;\n",i+1,vec[i],i+1,&vec[i]);
	}
	
	/*b) Os endereços estão com separação de 4 bytes uma vez que o tipo do vetor é int logo necessita de 4 bytes para agrupar cada valor
	 *c) Se o programa fosse noutro pc o valor dos endereços seria diferente uma vez que são atribuidos pelo pc em questão*/
	
	
	return 0;
}
