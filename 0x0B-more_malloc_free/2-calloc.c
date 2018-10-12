#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element in bytes
 *
 * Return: pointer to array, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		new[i] = 0;
		i++;
	}

	return (new);
}
