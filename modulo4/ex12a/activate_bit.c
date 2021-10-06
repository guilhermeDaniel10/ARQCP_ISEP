int activate_bit(int * ptr, int pos){
	
	int mascara = 1 << (pos);
	int changed = *(ptr) & mascara;
	
	if(changed == 0){
		*(ptr) = *(ptr) | mascara;
		return 1;
	}

	return 0;	
}
