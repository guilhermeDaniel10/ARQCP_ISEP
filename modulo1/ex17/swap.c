void swap(int *vec1, int *vec2, int n){
	int troca, i;

for(i = 0; i < n; i++){
	troca = *(vec1 + i);
	*(vec1 + i) = *(vec2 + i);
	*(vec2 + i) = troca;
}
}
