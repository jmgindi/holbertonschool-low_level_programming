#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - initializes an array with all bytes a specific char
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: pointer to the array, or NULL if fail/size 0
 */

char *create_array(unsigned int size, char c)
{
	char *dest;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	dest = malloc(size * (sizeof(char)));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dest[i] = c;

	return (dest);
}
