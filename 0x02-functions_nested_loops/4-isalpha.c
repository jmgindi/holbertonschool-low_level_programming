#include "holberton.h"

/**
 * _isalpha - checks for an alphabetic character
 *
 * @c: variable to check
 *
 * Return: 1 if alphabetic, 0 otherwise
 */

int isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
