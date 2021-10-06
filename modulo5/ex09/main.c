#include <stdio.h>
#include "main.h"

int main(){
  structA stcA;
  structA stcA2;
  structB stcB;


  structB *s = &stcB;
  structA *b = &stcA2;

  stcA.x = 15;
  stcA.y = 2;

  b->x=99;
  b->y=4;
  s->a=stcA;
  s->b=b;


  short res1;
	res1= fun1(s);
	printf("\nFUN 1: %d\n", res1);

  s->z=10;
	short res2;
	res2 = fun2(s);
	printf("\nFUN 2: %d", res2);

	short * res3;
	res3 = fun3(s);
	printf("\n%p\n", res3);
	printf("\n%p\n", &s->z);


	short res4;
	res4 = fun4(s);
	printf("\nFUN 4: %d", res4);


  return 0;
}
