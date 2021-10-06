
 int average_array (int v [], int n){
  int sum = 0, average = 0;

  for(int i = 0; i < n; i++){
    sum = sum + v[i];
  }
  average = sum / n;

  return average;

}
