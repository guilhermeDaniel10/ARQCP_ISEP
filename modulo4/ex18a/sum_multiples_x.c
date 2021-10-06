int sum_multiples_x(char * vec, int x){
	
	int mascara = 0xFF;
	mascara = mascara << 8;
	
	int numero = x & mascara;
	numero = numero >> 8;
	
	
	int i=0, sumElement=0;
	
	while(*(vec+i) != 0){
		if(*(vec+i) % numero == 0){
			sumElement = *(vec+i) + sumElement;
		}
		i++;
	}
	
	return sumElement;
}
