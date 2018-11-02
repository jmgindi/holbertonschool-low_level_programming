#include "holberton.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: base number
 * @m: number to flip bits to
 *
 * Return: number of bits to flip in order to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_num = 0, xor;

	for (xor = n ^ m; xor != 0; xor = xor >> 1)
		bit_num += xor & 1;

	return (bit_num);
}
