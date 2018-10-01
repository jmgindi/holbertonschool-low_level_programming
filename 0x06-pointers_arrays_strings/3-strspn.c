#include "holberton.h"

/**
 * _strspn - finds length of prefix substring
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: number of bytes if prefix of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, a_count, i, x;

	i = 0;

	for (count = 0; s[count]; count++)
	{
		x = i;
		for (a_count = 0; accept[a_count]; a_count++)
		{
			if (s[count] == accept[a_count])
				i++;
		}

		if (i == x)
			break;
	}

	return (i);
}
