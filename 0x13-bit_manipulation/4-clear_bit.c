#include "holberton.h"

/**
 * clear_bit - clears a bit
 * @n: pointer to number to clear bit in
 * @index: index at which to clear bit
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 31)
		return (-1);

	bit = ~(1 << index);
	*n = *n & bit;

	return (1);
}
