#include <stdio.h>
#include <string.h>
#include "asm.h"

int main( void ) {

	Student stdnt;
	
	stdnt.number = 117;
	stdnt.age = 23;
	strcpy(stdnt.name, "Lucas");
	strcpy(stdnt.address, "Rua Professora Alzira");

	
	Student* ptr = &stdnt;
	
	char * new_address =  "Rua fernao magalhaes";

	printf("%s\n", ptr->name);
	printf("%d\n", ptr->age);
    printf("%d\n", ptr->number);
    printf("%s\n", ptr->name);
    printf("%s\n", ptr->address);

	update_address(ptr,new_address);
	
	printf("%s\n", ptr->name);
	printf("%d\n", ptr->age);
    printf("%d\n", ptr->number);
    printf("%s\n", ptr->name);
    printf("%s\n", ptr->address);

	
	return 0;
}
