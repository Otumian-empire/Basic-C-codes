#include <stdio.h>

int main() {
	/*
	data types in C
	int - integers
	float - reals
	char - characters
	double - double precision real
	The size of each data type varies from one system to the other
	use the sizeof operator to get the memory requirement for each type
	*/

	printf("int: %ld\n", sizeof(int));
	printf("float: %ld\n", sizeof(float));
	printf("double: %ld\n", sizeof(double));
	printf("char: %ld\n", sizeof(char));
	
	return 0;
}
