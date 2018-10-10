#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new concatenated string 
 * or NULL upon failure
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i = 0;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	l2++;

	dest = malloc((l1 + l2) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		dest[i] = s1[i];

	for (i = 0; i < l2; i++)
		dest[i + l1] = s2[i];

	return (dest);
}
