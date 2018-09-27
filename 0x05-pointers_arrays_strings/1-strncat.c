#include "holberton.h"

/**
 * _strncat - concatenates n bytes of src to dest
 * @dest: string to be concatenated to
 * @src: string to concatenate n bytes of to dest
 * @n: number of bytes to concatenate
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_count = 0;
	int src_count = 0;

	while (dest[dest_count] != '\0')
		dest_count++;

	while (src_count < n && src[src_count] != '\0')
	{
		*(dest + dest_count) = *(src + src_count);
		dest_count++;
		src_count++;
	}

	return (dest);
}
