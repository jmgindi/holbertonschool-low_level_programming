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
	int i2 = 1;

	while (i1 < size)
	{
		s1 += a[(size + 1) * i1];
		i1++;
	}

	while (i2 < size)
	{
		s2 += a[(size - 1) * i2];
		i2++;
	}

	printf("%i, %i\n", s1, s2);
}
