#include <stdio.h>
 
int main(void)
{

	int a; 
	long int b; 
	long long int c; 
	char d; 
	float f;

	printf("Size of a char: %lu bytes\n", (char type)sizeof(d));
	printf("Size of an int: %lu bytes\n", (int type)sizeof(a));
	printf("Size of a long int: %lu bytes\n", (long int type)sizeof(b));
	printf("Size of a long long int: %lu bytes\n", (long long int type)sizeof(c));
	printf("Size of a float: %lu bytes\n", (int type)sizeof(f));
	return (0);

