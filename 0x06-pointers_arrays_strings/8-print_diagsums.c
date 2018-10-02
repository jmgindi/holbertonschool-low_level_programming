#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of diagonals
 * for a square matrix of integers
 * @a: matrix
 * @size: side size of square
 */

void print_diagsums(int *a, int size)
{
	int sumrl = 0;
	int sumlr = 0;
	int i1 = 0;
	int i2 = 0;

	while (i1 < size)
	{
		sumrl += a[(size + 1) * i1];
		i1++;
	}

	while (i2 < size)
	{
		sumlr += a[(size - 1) * i2];
		i2++;
	}

	printf("%i, %i\n", sumrl, sumlr);
}
