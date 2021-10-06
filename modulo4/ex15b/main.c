#include <stdio.h>
#include "asm.h"

unsigned int build_date( int year , int month , int day ) {

	return  (year << 8)  | (month <<24 ) |  day ;
}

int main(){

  unsigned int date1 = build_date(2015,11,11);
	unsigned int date2 = build_date(2015,11,10);
	unsigned int resultado = greater_date(date1,date2);

  printf("\nDate 1: %x", date1);
  printf("\nDate 2: %x", date2);
	printf("\nResultado: %x", resultado);

  if(resultado == date1){
    printf("\nA maior data é a 1");
  } else {
    printf("\nA maior data é a 2");
  }


  return 0;
}
