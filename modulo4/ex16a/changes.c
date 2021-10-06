void changes(int * ptr){
	
	int mascara = 0xF;
	mascara = mascara << 20;
	
	int numero = *(ptr) & mascara;
	numero = numero >> 20;
	
	if(numero > 7){
		*ptr = *ptr ^ mascara;
	}
		
}
