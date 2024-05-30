//program to Find the Size of Variables
#include<stdio.h>
int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;

	// sizeof evalutes the size of a variable
	printf("\nSize of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n\n", sizeof(charType));
	
	return 0;
}

