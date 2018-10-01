#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (s);
}
