#include <stdio.h>
int string_to_int(char []);

int main()
{
  char a[100];
  int n;

  printf("Introduza uma String válida: \n");
  scanf("%s", a);

  n = string_to_int(a);

  printf("String  = %s\nInteger = %d\n", a, n);

  return 0;
}

int string_to_int(char a[]) {
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

  // /0 significa null

  for (c = inicial; a[c] != '\0'; c++) {

    n = n * 10 + a[c] - '0'; // a[c] é o valor da posição do array e -'0' transforma em integer
  }

  if (sinal == -1) {
    n = -n;
  }

  return n;
}
