int count_bits_zero(int x){
	
	int mascara = 1;
	int count =0;
	int incr;
	
	for(incr = 0; incr<32; incr++){
		int transformado = x >> incr;
		int resultado = mascara & transformado;
		if(resultado != 1){
			count++;
		}
	}
	
	return count;	
}
