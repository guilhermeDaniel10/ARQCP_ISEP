#include <stdio.h>

#define MAX_ARRAYSIZE (8)

int is_binary(char *num);
int is_octal(char *num);
int is_decimal(char *num);
int is_hexadecimal(char *num);

int main(){
	
	char num[MAX_ARRAYSIZE];

	printf("Introduza um número a ser transformado:");
	scanf("%s",num);

	if(is_binary(num)==1){
		printf("%s é um número binário\n",num);
		return 0;
	}
	if(is_octal(num)==1){
		printf("%s é um número octal\n",num);
		return 0;
	}
	if(is_decimal(num)==1){
		printf("%s é um número décimal\n",num);
		return 0;
	}
	if(is_hexadecimal(num)==1){
		printf("%s é um número hexadécimal\n",num);
		return 0;
	}
	
	return 0;
}

int is_binary(char *num){

	int i;

	for(i=0;num[i]!='\0';i++){	
		if(num[i]!='1' && num[i]!='0'){
			return 0;
		}
	}
	return 1;
}

int is_octal(char *num){

	int i;

	for(i=0;num[i]!='\0';i++){	
		if(num[i]!='1' && num[i]!='0' && num[i]!='2' && num[i]!='3' &&num[i]!='4' && num[i]!='5' && num[i]!='6' && num[i]!='7'){
			return 0;
		}
	}
	return 1;
}

int is_decimal(char *num){

	int i;

	for(i=0;num[i]!='\0';i++){	
		if(num[i]!='1' && num[i]!='0' && num[i]!='2' && num[i]!='3' &&num[i]!='4' && num[i]!='5' && num[i]!='6' && num[i]!='7' && num[i]!='8' && num[i]!='9'){
			return 0;
		}
	}
	return 1;
}

int is_hexadecimal(char *num){

	int i;

	for(i=0;num[i]!='\0';i++){	
		if(num[i]!='1' && num[i]!='0' && num[i]!='2' && num[i]!='3' &&num[i]!='4' && num[i]!='5' && num[i]!='6' && num[i]!='7' && num[i]!='8' && num[i]!='9'  && num[i]!='A' && num[i]!='B' && num[i]!='C' && num[i]!='D' && num[i]!='E' && num[i]!='F'){
			return 0;
		}
	}
	return 1;
}

