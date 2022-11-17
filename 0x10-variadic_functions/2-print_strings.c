#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: a string with strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *s;

	va_start(arguments, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(arguments, char*);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < n)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(arguments);
}
