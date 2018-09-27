#include "holberton.h"

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @s: string
 *
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int count, spec;

	char specgroup[13] = {' ', '\t', '\n', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}'};

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;

		for (spec = 0; spec < 13; spec++)
		{
			if (s[count] == specgroup[spec])
			{
				if (s[count + 1] >= 'a' && s[count + 1] <= 'z')
					s[count + 1] -= 32;
			}
		}
	}

	return (s);
}
