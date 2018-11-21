#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1 
 * @s2: string 2
 *
 * Return: pointer to new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int l, l2, t;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	new = malloc(sizeof(char) * (l + l2 + 1));

	if (new == NULL)
		return (NULL);

	for (t = 0; t < l; t++)
		new[t] = s1[t];

	for (t = t; t < (l + l2); t++)
		new[t] = s2[t];

	t++;
	new[t] = '\0';

	return (new);
}
