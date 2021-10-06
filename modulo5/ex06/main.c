#include <stdio.h>
#include <string.h>
#include "asm.h"

int main(void){

	Student stdnt;

    stdnt.number = 117;
	stdnt.age = 23;
	strcpy(stdnt.name, "Lucas");
	strcpy(stdnt.address, "Rua Professora Alzira");
    
    Student *ptr = &stdnt;
    
    int grades[10] = {15, 17, 15, 16, 14, 13, 12, 19, 19, 17};

    update_grades(ptr, grades);
    
    int newGrades[10] = {20, 20, 20, 20, 20, 20, 20, 20, 20, 7};

    update_grades(ptr, newGrades);
    
    int minimum = 10;
    int greaterGrades[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    int result = locate_greater(ptr, minimum, greaterGrades);

    printf("Quantidade de notas superiores a %d foi %d sendo essas as seguintes:", minimum ,result);
    
    int i = 0;
    while (i < 10){
		if(greaterGrades[i]>0){
			printf("\n->%d ", greaterGrades[i]);
		}
        i++;
    }
    return 0;
}
