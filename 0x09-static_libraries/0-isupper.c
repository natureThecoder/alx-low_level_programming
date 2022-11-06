#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: variable test
 * Return: Always 0
 */
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
		return (i);
	}
	else
	{
		i = 0;
		return (i);
	}
}
