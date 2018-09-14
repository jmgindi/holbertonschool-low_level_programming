#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int na;
	int nb;

	na = 48;
	nb = 48;

	while (na <= 57 && nb <= 57)
	{
		putchar(na);
		putchar(nb);
		if (na < 57 || nb < 57)
		{
			putchar(',');
			putchar(' ');
			if (nb < 57)
			{
				nb++;
			}
			else
			{
				na++;
				nb = 48;
			}
		}
		else
		{
			na++;
			nb++;
			putchar('\n');
		}
	}
	return (0);
}
