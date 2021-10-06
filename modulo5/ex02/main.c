#include <stdio.h>
#include <string.h>

int main( void ){

/*union union_u1{
	char vec[32]; 
	float a;	  
	int b;		  
} u;*/

struct struct_s1{
	char vec[32]; 
	float a;	  
	int b;		  
} s;

	/*union union_u1 * ptr = &u;*/
	struct struct_s1 * ptr = &s;
	
	strcpy(ptr->vec, "arquitectura de computadores" );
	printf( "[1]=%s\n", ptr->vec );
	
	ptr->a = 123.5;
	printf( "[2]=%f\n", ptr->a );
	
	ptr->b = 2;
	printf( "[3]=%d\n", ptr->b );

	printf( "[1]=%s\n", ptr->vec );
	printf( "[2]=%f\n", ptr->a );
	printf( "[3]=%d\n", ptr->b );
	
	/*printf("Size Union: %d\n", sizeof(u));*/
	printf("Size of Struct: %d\n", sizeof(s));
	
	/*A structure is a user-defined data type available in C 
	 * that allows to combining data items of different kinds.*/
	
	/*A union is a special data type available in C that allows storing different 
	 * data types in the same memory location. You can define a union with many members, 
	 * but only one member can contain a value at any given time. Unions provide an efficient 
	 * way of using the same memory location for multiple purposes.	*/
	 
	 
return 0;
}
