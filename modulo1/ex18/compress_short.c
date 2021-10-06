void compress_shorts(short* shorts, int n_shorts, int* integers){

  int size = sizeof(int) / sizeof(short);
  int n = n_shorts/size;
  int i;

  for(i = 0; i < n; i++){
    *(integers + i) = *((int*) (shorts + size*i));
  }



}
