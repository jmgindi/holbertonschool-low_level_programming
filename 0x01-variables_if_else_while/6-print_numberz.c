#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;

	d = 48;

	while (d <= 57)
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
