#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print half of
 */

void puts_half(char *str)
{
	int l, half;

	for (l = 0; *(str + l) != '\0'; l++)
	{
	}

	if (l % 2 == 0)
		half = (l / 2);

	else
		half = (l - ((l - 1) / 2));

	while (half < l)
	{
		_putchar(*(str + half));
		half++;
	}

	_putchar('\n');
}
