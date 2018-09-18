#include "holberton.h"

/**
 * _islower - checks for a lowercase character
 *
 * @c: variable to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
