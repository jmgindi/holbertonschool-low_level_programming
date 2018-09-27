#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int count, p;

	p = 0;
	n--;

	for (count = 0; count < n; count++)
	{
		p = a[n];
		a[n] = a[count];
		a[count] = p;
		n--;
	}
}
