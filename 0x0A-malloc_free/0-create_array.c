#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - initializes an array of a specific char
 * @size: size of the array
 * @c: char to init with
 *
 * Return: pointer to the array, NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
