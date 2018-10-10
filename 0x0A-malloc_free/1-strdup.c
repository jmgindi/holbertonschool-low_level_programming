#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - allocate a space in memory containing a copy of a string
 * @str: string to copy
 *
 * Return: pointer to new string, or NULL if mem unavailable or str = NULL
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int i;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
		l++;

	l++;

	dest = malloc(l * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		dest[i] = str[i];

	dest[i] = '\0';

	return (dest);
}
