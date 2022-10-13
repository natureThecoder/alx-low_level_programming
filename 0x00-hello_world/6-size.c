#include <stdio.h>
/**
 * main- Print sizeof var type
 *
 * Return: 0 to end the function
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	

	printf("Size of char: %d bytes \n", sizeof(a));
	printf("Size of int: %d bytes \n", sizeof(b));
	printf("Size of long int: %d bytes \n", sizeof(c));
	printf("Size of long long int: %d bytes \n", sizeof(d));
	printf("Size of float: %d bytes \n", sizeof(e));
	return (0);
}
