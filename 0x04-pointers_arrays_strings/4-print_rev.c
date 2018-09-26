#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;

	l--;

	while (l >= 0)
	{
		_putchar(*(s + l));
		l--;
	}

	_putchar('\n');
}
