#include <stdio.h>
/**
 * main- is a function for the program
 *
 * Return:Zero if no error, non-zero value iof errors
 */
int maiv(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));        
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}

	
