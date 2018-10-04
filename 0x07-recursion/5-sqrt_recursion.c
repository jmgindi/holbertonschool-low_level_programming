#include "holberton.h"

/**
 * factors - checks for perfect square factors of number
 * @n: number to check 
 * @x: recursive checks
 *
 * Return: square root factor of n, -1 otherwise
 */

int factors(int n, int f)
{
	if ((f * f) == n)
		return (f);

	if (f > (n / f))
		return (-1);

	return (factors(n, (f + 1)));
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number to find square root of
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (factors(n, 1));
}
