#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates an array
 * @array: pointer to the array.
 * @size: is the size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	for (i = 0; i < size; i++)
		action(*(array + i));
}
