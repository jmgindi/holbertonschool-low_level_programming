#include "holberton.h"

/**
 * _pow_recursion - returns x to the y power
 * @x: number
 * @y: exponent
 *
 * Return: -1 if y is negative, x^y otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y-1);
}
