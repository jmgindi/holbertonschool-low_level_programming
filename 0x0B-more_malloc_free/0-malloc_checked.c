#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: 98 on failure, pointer to memory otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *am;

	am = malloc(b);

	if (am == NULL)
		exit(98);
	else
		return (am);
}
