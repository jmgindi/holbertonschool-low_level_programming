#include "holberton.h"

/**
 * _strstr - finds the first occurence of a substring in a string
 * @haystack: string
 * @needle: substring to find
 *
 * Return: pointer to location in string where needle begins
 */

char *_strstr(char *haystack, char *needle)
{
	char *s, *x, *y;

	s = haystack;

	while (*s != 0)
	{
		p = s;
		y = needle;

		if (*y == 0)
			return (s);

		while (*x != 0)
		{
			if (*y != *x)
				break;
			y++;
			x++;
			if (*y == 0)
				return (s);
		}

		s++;
	}

	return (0);
}
