#include "holberton.h"

/**
 * _strcat - concatenates src onto the end of dest
 * @dest: first string
 * @src: string to concatenate onto dest
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_count = 0;
	int src_count = 0;

	while (dest[dest_count] != '\0')
		dest_count++;

	while (src[src_count] != '\0')
	{
		*(dest + dest_count) = *(src + src_count);
		dest_count++;
		src_count++;
	}

	return (dest);
}
