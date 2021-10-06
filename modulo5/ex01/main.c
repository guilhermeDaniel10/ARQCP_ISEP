#include <stdio.h>

// unions, declared using the keyword union, allow a single variable to use several data types
typedef union {
char vec[32];
float a;
int b;
} union_u1;

//structures, declared using the keyword struct, aggregate multiple variables under
// the same name (como um construtor em java)
typedef struct {
  char vec[32];
  float a;
  int b;
} struct_s1;

// O tamanho da union tem que obedecer ao tamanho do maior membro, por isso o seu tamanho
// será o mesmo que o do maior maior, ou seja, 32 bytes
void tamanhoUnion(union_u1 u1){
  printf("Union size: %d", sizeof(u1));
}

// sendo o tamanho da struct a soma dos bytes que cada variável ocupa, por isso é de prever
// que o resultado do tamanho será 32 bytes + 4 bytes + 4 bytes = 40 bytes
void tamanhoStruct(struct_s1 s1){
  printf("\nStruct size: %d", sizeof(s1));
}

int main(void){
  union_u1 u1;
  struct_s1 s1;


  tamanhoUnion(u1);
  tamanhoStruct(s1);

  return 0;
}
