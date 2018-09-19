#include "holberton.h"

/**
 * jack_bauer - prints 00:00 - 23:59
 */

void jack_bauer(void)
{
	int h;
	int m;

	while (h < 24)
	{
		while (m < 60)
		{

			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}
