#include <stdio.h>

int int_part(char[]);
int fractional_part(char[]);

int main(){

  char a[100];
  int n, m;

  printf("Introduza uma String válida: \n");
  scanf("%s", a);

  n = int_part(a);
  m = fractional_part(a);

  printf("Parte Inteira = %d\n", n);
  printf("Parte Decimal = %d\n", m);

  return 0;

}


int int_part(char a[]) {
  int c, sinal, inicial, n;
  sinal = 0;
  if (a[0] == '-') {  // Valores negativos
    sinal = -1;
  }

  if (sinal == -1) {  // Posição inicial para converter
    inicial = 1;
  }
  else {
    inicial = 0;
  }
  n = 0;
  for (c = inicial; a[c] != '\0'; c++) {
    if(a[c] == '.'){
      break;
    }
    n = n * 10 + a[c] - '0'; // a[c] é o valor da posição do array e -'0' transforma em integer

  }
  if (sinal == -1) {
    n = -n;
  }

  return n;
}

int fractional_part(char a[]){
  int c, sinal, inicial, n, counter = 0;
  sinal = 0;
  if (a[0] == '-') {  // Valores negativos
    sinal = -1;
  }

  if (sinal == -1) {  // Posição inicial para converter
    inicial = 1;
  }
  else {
    inicial = 0;
  }
  n = 0;
  for (c = inicial; a[c] != '\0'; c++) {

    if(counter >= 1){
      n = n * 10 + a[c] - '0';
    }
    if(a[c] == '.'){
      counter++;
    }
  }
  if (sinal == -1) {
    n = -n;
  }

  return n;
}
