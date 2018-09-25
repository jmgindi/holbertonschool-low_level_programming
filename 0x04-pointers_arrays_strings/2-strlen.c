#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;

	return (l);
}
