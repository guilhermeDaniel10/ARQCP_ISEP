#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(){

    int lines = 4;
    int columns = 3;
    int i;
    structA ** ptrmatrix = (structA **) malloc(lines * sizeof(structA*));
    structA ** ptrmatrix1 = ptrmatrix;
    for(i=0; i < lines; i++){
        *ptrmatrix1 = (structA *) calloc(columns, sizeof(structA));
        ptrmatrix1++;
    }




    return 0;

}
