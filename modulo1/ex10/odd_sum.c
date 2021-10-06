int odd_sum(int *p){
  int first = *p;
  int i,sum = 0;
  p++;

  for(i = 0; i < first; i++){

    if(*p % 2 != 0){
      sum = sum + *p;
    }

    p++;
  }

  return sum;
}
