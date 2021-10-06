void power_ref(int* x, int y){
  int i, num = *x;

  if(y < 1){
    num = 0;
  }
  if(y >= 1){
  for(i = 1; i <= y; i++){
  if(i > 1){
    num = num * *x;
      }
    }
  }
  if(y == 0){
    num = 1;
  }

  *x = num;
  }
