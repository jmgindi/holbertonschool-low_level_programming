#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from string 2 to concatenate
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i1, i2;
	unsigned int l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* increment counters to find size of mem to allocate */
	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	/* check constraint - n > length of s2 */
	if (n > l2)
		n = l2;

	/* allocate memory and check */
	new = malloc((l1 + (n + 1)));

	if (new == NULL)
		return (NULL);

	/* copy s1 & n bytes of s2 into new */
	for (i1 = 0; i1 < l1; i1++)
		new[i1] = s1[i1];

	for (i2 = 0, i2 < l2; i2++)
	{
		new[i1] = s2[i2];
		i1++;
	}

	new[i1] = '\0';

	return (new);
}
