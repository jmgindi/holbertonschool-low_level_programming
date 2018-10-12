#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest number in array
 * @max: highest number in array
 *
 * Return: pointer to array, NULL on failure
 */

int *array_range(int min, int max)
{
	int *new;
	int i = 0, n;

	if (min > max)
		return (NULL);

	new = malloc(((max - min) + 1) * sizeof(int));

	if (new == NULL)
		return (NULL);

	for (n = min; n <= max; n++)
	{
		new[i] = n;
		i++;
	}

	return (new);
}
