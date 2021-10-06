#include <stdio.h>

#define MAX_ARRAYSIZE (10)

int integer_part(char *x);
int fractional_part(char *x);


int main(){
	char x[MAX_ARRAYSIZE];

	printf("Introduza um número real:");
	scanf("%s",x);

	printf("A parte inteira é %i e a real é %i",integer_part(x),fractional_part(x));

	return 0;
}

int integer_part(char *x){
	
int i;
int inteiro=0;
char operator;

	for(i=0;x[i]!='\0';i++){
		if(x[i]=='.'){
			return inteiro;
		}
		operator = x[i];
			switch(operator){
				case '1':
					inteiro = inteiro*10 + 1;
				break;
			
				case '2':
					inteiro = inteiro*10 + 2;
				break;
				
				case '3':
					inteiro = inteiro*10 + 3;
				break;
				
				case '4':
					inteiro = inteiro*10 + 4;
				break;
				
				case '5':
					inteiro = inteiro*10 + 5;
				break;
				
				case '6':
					inteiro = inteiro*10 + 6;
				break;
			
				case '7':
					inteiro = inteiro*10 + 7;
				break;
				
				case '8':
					inteiro = inteiro*10 + 8;
				break;
				
				case '9':
					inteiro = inteiro*10 + 9;
				break;
				
				case '0':
					inteiro = inteiro*10;
				break;
				
				default:
					printf("%c não é um dígito de um número\n",x[i]);
				break;
			}
	}
	return inteiro;	
}

int fractional_part(char *x){
int i;
int position;
int real=0;
char operator;

	for(i=0;x[i]!='\0';i++){
		if(x[i]=='.'){
			position=i;
		}
	}
	for(i=position;x[i]!='\0';i++){
		operator = x[i];
			switch(operator){
				case '1':
					real = real*10 + 1;
				break;
			
				case '2':
					real = real*10 + 2;
				break;
				
				case '3':
					real = real*10 + 3;
				break;
				
				case '4':
					real = real*10 + 4;
				break;
				
				case '5':
					real =real*10 + 5;
				break;
				
				case '6':
					real = real*10 + 6;
				break;
			
				case '7':
					real = real*10 + 7;
				break;
				
				case '8':
					real = real*10 + 8;
				break;
				
				case '9':
					real = real*10 + 9;
				break;
				
				case '0':
					real = real*10;
				break;
				
				default:
					printf("%c não é um dígito de um número\n",x[i]);
				break;
			}
	}
	return real;	
}
