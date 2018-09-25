#include "holberton.h"

/**
 * swap_int - swaps the values of a and b
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
