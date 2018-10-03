#include "holberton.h"

/**
 * factorial - returns the factorial of a number
 * @n: number
 *
 * Return: -1 if n is negative, factorial otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
