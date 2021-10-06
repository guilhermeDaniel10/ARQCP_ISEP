#include <stdio.h>
#include "main.h"

int main( void ) {

	Student stdnt;
	Student* ptr = &stdnt;

	fill_student(ptr, 117, 23, "Lucas","Rua Professora Alzira");
	printf("%s\n", ptr->name);

	printf("%d\n", ptr->age);
    printf("%d\n", ptr->number);
    printf("%s\n", ptr->name);
    printf("%s\n", ptr->address);

	return 0;
}
