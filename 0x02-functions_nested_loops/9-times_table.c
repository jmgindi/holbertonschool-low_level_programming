#include "holberton.h"

/**
 * times_table - prints 0*0 - 9*9 formatted for readability
 */

void times_table(void)
{
	int a = 0;
	int b = 1;

	while (a < 10)
	{
		_putchar('0');
		{
			b = 1;
			while (b < 10)
			{
				int m = (a * b);

				if (m < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
