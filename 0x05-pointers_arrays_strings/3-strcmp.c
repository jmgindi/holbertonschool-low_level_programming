#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between 2 strings (s1 - s2) or 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		if (s1[count] < s2[count])
			return (s1[count] - s2[count]);

		else if (s1[count] > s2[count])
			return (s1[count] - s2[count]);
	}

	return (0);
}
