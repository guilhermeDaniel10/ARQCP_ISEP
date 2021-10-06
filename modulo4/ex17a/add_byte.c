void add_byte(char x, int *vec1, int *vec2){

  int i = 0;
  int firstByte;
  int otherBytes;
  char sum;
  int finalSum;
  int size = *vec1;
  *vec2 = size;

  for(i = 1; i <= size; i++){
    firstByte = *(vec1 + i) & 0b00000000000000000000000011111111;
    sum = x + firstByte ;


    otherBytes = *(vec1 + i) & 0b11111111111111111111111100000000;
    finalSum = otherBytes + sum;

    *(vec2 + i) = finalSum;

  }
}
