#include <stdio.h>

#define MAX_ARRAYSIZE (7)

int string_to_int(char *str);

float average_ofTwo_strings(int num1, int num2);

int main(){

	char str1[MAX_ARRAYSIZE];
	char str2[MAX_ARRAYSIZE];

	printf("Introduza o 1º número que será transformado:");
	scanf("%s",str1);

	printf("Introduza o 2º número que será transformado:");
	scanf("%s",str2);
	
	printf("A média dos dois números é: %f\n",average_ofTwo_strings(string_to_int(str1), string_to_int(str2)));

	return 0;
}

int string_to_int(char *str){

	int i;
	int value=0;
	char operator;

	for(i =0; str[i]!='\0'; i++ ){
		//if(str[i]!='\0'){
			operator = str[i];
			switch(operator){
				case '1':
					value = value*10 + 1;
				break;
			
				case '2':
					value = value*10 + 2;
				break;
				
				case '3':
					value = value*10 + 3;
				break;
				
				case '4':
					value = value*10 + 4;
				break;
				
				case '5':
					value = value*10 + 5;
				break;
				
				case '6':
					value = value*10 + 6;
				break;
			
				case '7':
					value = value*10 + 7;
				break;
				
				case '8':
					value = value*10 + 8;
				break;
				
				case '9':
					value = value*10 + 9;
				break;
				
				case '0':
					value = value*10;
				break;
				
				default:
					printf("Não %c é um dígito de um número\n",str[i]);
				break;
			}
		//}			
	}
	return value;	
}

float average_ofTwo_strings(int num1, int num2){
	float average = ((num1+num2)/2);
	return average;
}
