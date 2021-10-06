int activate_bits(int a, int left, int right){
  int n, j, mascara, copia_a = a;

  for(n = 0; n < left; n++){
    mascara = 0x80000000 >> n;
    copia_a = copia_a | mascara;
  }

  for(j = 0; j < right; j++){
    mascara = 1 << j;
    copia_a = copia_a | mascara;
  }

  return copia_a;



}
