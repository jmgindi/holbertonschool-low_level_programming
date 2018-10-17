#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to comparison function to use
 *
 * Return: index of first matching element or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);

	return (-1);
}
