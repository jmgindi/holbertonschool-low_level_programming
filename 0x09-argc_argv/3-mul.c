#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int mult, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mult = x * y;

	printf("%d\n", mult);

	return (0);
}
