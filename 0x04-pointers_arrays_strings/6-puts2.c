#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		if (l % 2 == 0)
		{
			_putchar(*(str + l));
			l++;
		}
	}

	_putchar('\n');
}
