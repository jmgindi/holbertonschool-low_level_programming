#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer
 * @r: number to check
 *
 * Return: absolute value of r
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
