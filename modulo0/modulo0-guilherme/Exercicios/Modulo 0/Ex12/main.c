#include <stdio.h>
#include "size_string.h"
int main() {
 char x[] = "I will master ARQCP";
 printf("Size =%lu\n", sizeof(x)); //número de bytes ocupado por um determinado tipo de variável.
 printf("Size =%u\n", size_string_wrong (x));
 printf("Size =%u\n", size_string_correct(x));
 char y[25] = "I will master ARQCP";
 printf("\nSize =%lu\n", sizeof(y)); //número de bytes ocupado por um determinado tipo de variável.
 printf("Size =%u\n", size_string_wrong (y));
 printf("Size =%u\n", size_string_correct(y));
 return 0;
}
