#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1)
}
