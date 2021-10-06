int sort_without_reps(int *src, int n, int *dest){

  int temp, i , j, k;
  //int count = 0;

  for( i = 0;i < n; i++){
    *(dest + i) = *(src + i);
  }

  for( i = 0; i < n; i++){
    for( j = i + 1; j < n; j++){

        if(*(dest + i) > *(dest + j)){
          temp = *(dest + i);
          *(dest + i) = *(dest + j);
          *(dest + j) = temp;
        }
    }
  }

  for( i = 0; i < n; i++){
    for( j = i + 1; j < n; j++){
      if(*(dest + i) == *(dest + j)){
        for( k = j; k < n; k++){
          *(dest + k) = *(dest + k + 1);
        }
        n--;
        j--;
      }
    }
  }

  return n;
}
