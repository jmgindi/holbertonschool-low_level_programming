#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;
	char l;

	d = '0';
	l = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
