#include "holberton.h"

/**
 * print_alphabet - prints a-z followed by a new line
 */

void print_alphabet(void);
{
	char let = 'a';

	while (let <= 'z')
	{
		_putchar(let);
		let++;
	}

	putchar('\n');
}
