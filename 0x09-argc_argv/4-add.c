#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
		x = atoi(argv[i]);
		if (argv[i][0] != '0' && x == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += x;
	}
	printf("%d\n", sum);

	return (0);
}
