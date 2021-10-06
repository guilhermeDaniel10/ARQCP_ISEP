int greater_date(unsigned int date1, unsigned int date2){

  //Todos os bits nao necessarios a cada campo devem ser ignorados, dai usar AND com 1 nos valores necessarios
  unsigned int ano1 = date1 & 0b00000000111111111111111100000000;
  unsigned int ano2 = date2 & 0b00000000111111111111111100000000;

  unsigned int mes1 = date1 & 0b11111111000000000000000000000000;
  unsigned int mes2 = date2 & 0b11111111000000000000000000000000;

  unsigned int dia1 = date1 & 0b00000000000000000000000011111111;
  unsigned int dia2 = date2 & 0b00000000000000000000000011111111;

  if(ano1 > ano2){
    return date1;
  }
  else if(ano1 < ano2){
    return date2;
  }else{
    if(mes1 > mes2){
      return date1;
    } else if(mes1 < mes2) {
      return date2;
    } else {
      if(dia1>dia2){
        return date1;
      } else if(dia1< dia2){
        return date2;
      } else {
        return date1; //de acordo com os testes unitários deve ser a primeira data returnada caso as datas sejam iguais
      }
    }
  }

}
