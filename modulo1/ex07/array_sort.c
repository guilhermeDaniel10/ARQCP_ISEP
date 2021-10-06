void array_sort1(int *vec,int n){
	int maior, i, j;
	for (i = 0; i < n ; i++){
		maior = vec[i];
		for (j = i + 1; j < n ; j++){
			if(maior>vec[j]){
				vec[i]=vec[j];
				vec[j] = maior;
				maior = vec[i];
			}
		}
	}
}
