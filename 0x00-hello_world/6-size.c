#include <stdio.h>
/**
 * main- Print sizeof var type
 *
 * Return: 0 to end the function
 */
int main(void)
{
	int a;
	float b;
	double c;
	char d;

	printf("Size of int: %ld bytes \n",sizeof(a));
	printf("Size of float: %ld bytes \n",sizeof(b));
	printf("Size of double: %ld bytes \n",sizeof(c));
	printf("Size of char: %ld bytes \n",sizeof(d));
	return (0);
}
