#include <stdio.h>
#include <string.h>
#include "main.h"
#include "update_grades.h"

int main() {

    Student stu;

    Student* ptr = &stu;

    int new_grades[10] = {1,2,3,4,5,6,7,8,9,10};

    update_grades(ptr, new_grades);
    int i = 0;
    printf("Notas: \n");
    for(i = 0; i < 10; i++){
      printf("%d ", ptr->grades[i]);
    }

    return 0;

}
