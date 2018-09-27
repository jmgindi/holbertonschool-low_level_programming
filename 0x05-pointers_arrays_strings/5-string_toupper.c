#include "holberton.h"

/**
 * string_toupper - changes lowercase letters in a string to upper
 * @s: target string
 *
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
			*(s + count) -= 32;
		count++;
	}

	return (s);
}
