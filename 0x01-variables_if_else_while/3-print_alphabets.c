#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	char nu;

	n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	nu = 'A';

	while (nu <= 'Z')
	{
		putchar(nu);
		nu++;
	}

	putchar('\n');

	return (0);
}
