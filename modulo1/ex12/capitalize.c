void capitalize(char *str){
  int index = 0;
  while(*str != '\0'){
    if(index == 0 && (*str >= 'a' && *str <= 'z')){
      *str -= 32;
    }
    index++;
    if(*str == ' ' && ((*(str + 1) >= 'a'&& *(str + 1) <= 'z') || (*(str + 1) >= 'A'&& *(str + 1) <= 'Z'))){
      if(*(str + 1) >= 'a'&& *(str + 1) <= 'z'){
        *(str + 1) -= 32;
      }
    
    }
      str++;
    }
  }
