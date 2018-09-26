#include "holberton.h"

/**
 * *_strcpy - copies a string to a new buffer
 * @dest: destination for copy
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		dest[l] = src[l];
		l++;
	}

	return (dest);
}
