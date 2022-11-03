#include "main.h"

/**
 * _sqrt_recursion - return the sqrt of a natural number
 * @n: the natural number
 *
 * Return: sqrt 0 if not a natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_result(n, 1));
	}
}
/**
 * sqrt_result - calculate the result of the sqrt of a bumber
 * @n: the natural number
 * @i: number to be multiply
 *
 * Return: sqrt 0 if sqrt is not natural
 */
int sqrt_result(int n, int i)
{
	if (i * i == n)
	{
		return (1);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_result(n, i + i));
	}
}
