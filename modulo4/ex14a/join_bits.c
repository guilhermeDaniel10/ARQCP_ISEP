int join_bits(int a, int b, int pos){
	
	unsigned int TempA = (unsigned int) a;
    unsigned int TempB = (unsigned int) b;

    unsigned int MaskA = 1;
    int i;

	for (i=0; i< pos; i++){
        MaskA = MaskA << 1;
        MaskA++;
    }
    
    unsigned int MaskB = MaskA ^ 0xffffffff;

    TempA = TempA & MaskA;
    TempB = TempB & MaskB;

     
	return (TempA | TempB);
}
