#include "holberton.h"

/**
 * _puts - prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(*(str + l));
		l++;
	}
	_putchar('\n');
}
