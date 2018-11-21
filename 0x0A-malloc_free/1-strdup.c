#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to new duplicate or NULL if str = NULL
 */

char *_strdup(char *str)
{
	int l = 0;
	int x;
	char *new;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;
	l++;

	new = malloc(l * sizeof(char));

	for (x = 0; x < l; x++)
		new[x] = str[x];

	x++;
	new[x] = '\0';

	return (new);
}
