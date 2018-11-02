#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary string to convert
 *
 * Return: converted number, or 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;

	for (conv = 0; *b; b++)
	{
		if (*b == '1')
			conv = (conv << 1) | 1;
		else if (*b == '0')
			conv <<= 1;
		else
			return (0);
	}

	return (conv);
}
