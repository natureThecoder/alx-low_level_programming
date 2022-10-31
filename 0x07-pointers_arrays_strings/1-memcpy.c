#include "main.h"

/**
 * _memcpy - copies byte from src to dest
 * @dest: The place we copy to
 * @src: we copy from
 * @n: how much we copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	return (dest);
}
