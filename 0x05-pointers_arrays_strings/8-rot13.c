#include "holberton.h"

/**
 * leet - translates a string to leet
 * @s: string
 *
 * Return: pointer to string
 */

char *leet(char *s)
{
	int count, lcount;

	char l[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		       'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		       'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
		       'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		       'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X'
		       'Y', 'Z'};
	char rot13[10] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
			 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
			 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q',
			 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
			 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			 'L', 'M'};

	for (count = 0; s[count] != '\0'; count++)
	{
		for (lcount = 0; lcount <= 51; lcount++)
		{
			if (s[count] == l[lcount])
			{
				s[count] = rot13[lcount];
				break;
			}
		}
	}

	return (s);
}
