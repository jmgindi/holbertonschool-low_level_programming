#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times
 */

void more_numbers(void)
{
	int c = 1;
	int n = 0;
	int x = 0;
	int y = 0;

	while (x <= 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n < 10)
			{
				y = n;
			}
			else
			{
				x = (n / 10);
				y = (n % 10);

				_putchar(x + '0');
			}
			_putchar(y + '0');
			n++;
		}
		_putchar('\n');
		n++;
	}
}
