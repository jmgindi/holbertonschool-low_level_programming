#include "holberton.h"

/**
 * _factorcheck - checks for a prime number by division
 * @n: number to check
 * @f: possible factor
 *
 * Return: 1 if prime, 0 otherwise
 */

int _factorcheck(int n, int f)
{
	if (f == 1)
		return (1);

	if (n % f == 0)
		return (0);

	return (_factorcheck(n, (f - 1)));
}

/**
 * is_prime_number - checks for prime number
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int x;
	x = (n - 1);

	if (n <= 1)
		return (0);

	return (_factorcheck(n, x));
}
