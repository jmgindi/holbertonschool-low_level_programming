#include "holberton.h"

/**
 * leet - translates a string to leet
 * @s: string
 *
 * Return: pointer to string
 */

char *leet(char *s)
{
	int count, gcount;

	char gr[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (count = 0; s[count] != '\0'; count++)
	{
		for (gcount = 0; gcount <= 10; gcount++)
		{
			if (s[count] == gr[gcount])
				s[count] = leet[gcount];
		}
	}

	return (s);
}
