#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array that contains a chessboard
 */

void print_chessboard(char (*a)[8])
{
	int row, col;
	char c;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			cell = a[row][col];
			_putchar(c);
		}

		_putchar('\n');
	}

}
