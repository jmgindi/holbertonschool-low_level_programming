#include "holberton.h"

/**
 * print_binary - prints a binary number
 * @n: decimal to convert and print
 */

void print_binary(unsigned long int n)
{
	int y, z;

	if (n < 0)
		n = -n;

	if (n < 2 && n >= 0)
	{
		_putchar(n + '0');
		return;
	}

	for (z = 31; z >= 0; z--)
	{
		y = n >> z;

		if (y != 0)
		{
			if (y & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
