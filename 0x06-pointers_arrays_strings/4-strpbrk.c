#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a series of characters
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: pointer to first of bytes from accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int count, a_count;

	for (count = 0; s[count]; count++)
	{
		for (a_count = 0; accept[a_count] != '\0'; a_count++)
		{
			if (s[count] == accept[a_count])
			{
				s = &s[count];
				return (s);
			}
		}
	}

	return ('\0');
}
