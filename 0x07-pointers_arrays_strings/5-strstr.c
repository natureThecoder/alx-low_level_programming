#include "main.h"
#include <stddef.h>

/**
 * _strstr - find the first occurrence of needle in haystack
 * @haystack: where we look
 * @needle: what we look for
 *
 * Return: pointer to beginning of located substring or Null
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (needle[point] != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
