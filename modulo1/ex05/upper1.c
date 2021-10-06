void upper2(char *str){
	while(*str!='\0'){
		if(*str >= 97 && *str<= 122){ /* Posicao do a = 97 ate z = 122 */
			*str = *str-32; /* A letra minuscula esta 32 posicoes a baixo */
		}
		str = str + 1;
	} 
}
