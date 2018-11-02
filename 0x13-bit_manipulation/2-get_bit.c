#include "holberton.h"

/**
 * get_bit - gets the value of a bit in a number
 * @n: decimal representation of number
 * @index: index to find bit value at
 *
 * Return: value of bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 31)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
