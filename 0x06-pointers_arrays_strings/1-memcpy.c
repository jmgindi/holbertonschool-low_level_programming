#include "holberton.h"

/**
 * _memcpy - copies area of memory
 * @dest: area in memory to be copied to
 * @src: source area to be copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

	return (dest);
}
