#include "holberton.h"

/**
 * set_bit - sets a bit at index to 1
 * @n: pointer to int to bit-set
 * @index: index to set bit at
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 31)
		return (-1);

	bit = 1 << index;
	*n = *n | bit;

	return (1);
}
