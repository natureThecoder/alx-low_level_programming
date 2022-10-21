#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int m = 0;

	while (m < 10)
		_putchar(m++ + '0');

	_putchar('\n');
}
