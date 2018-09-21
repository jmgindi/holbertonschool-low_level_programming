#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 (except 2 & 4) followed by a new line
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 && n != 4)
		{
			_putchar(num + '0');
		}
		num++;
	}

	_putchar('\n');
}
