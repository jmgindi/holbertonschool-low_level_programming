#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of array a
 * @a: array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

		if (x < n - 1)
			printf(", ");
	}

	printf('\n');
}
