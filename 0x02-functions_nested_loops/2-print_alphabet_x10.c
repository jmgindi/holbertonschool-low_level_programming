#include "holberton.h"

/**
 * print_alphabet_x10 - prints a-z 10 times followed by a
 * new line each time
 */

void print_alphabet_x10(void);
{
	int i = 1
	char let = 'a';

	while (i < 11)
	{
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}

		putchar('\n');
		let = 'a';
		i++;
	}
}
