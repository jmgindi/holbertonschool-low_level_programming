#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to first of character c in string
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int count, l;

	l = 0;

	while (s[l] != '\0')
		l++;

	for (count = 0; count <= l; count++)
		if (s[count] == c)
		{
			s = &s[count];
			return (s);
		}

	return ('\0');
}
