int sum_even(int *p, int num){
  int i,sum = 0;
  for(i = 0; i < num; i++){

    if(*p % 2 == 0){
      sum = sum + *p;
    }
    p++; //o pointer move-se para a próxima posição do inteiro
}

return sum;
}
