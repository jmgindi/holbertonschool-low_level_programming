#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * numcheck - checks for digit-only arguments
 * @s: string to check
 *
 * Return: -1 if string contains non-digit, 0 otherwise
 */

int numcheck(char *s)
{
	char digit[] = "0123456789";
	int i, dig_i, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		r = 0;
		for (dig_i = 0; dig_i < 11; dig_i++)
		{
			if (s[i] == digit[dig_i])
				r++;
		}
		if (r == 0)
			return (-1);
	}

	return (0);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 (success), 1 (too many args)
 */

int main(int argc, char *argv[])
{
	int x, i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (numcheck(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
