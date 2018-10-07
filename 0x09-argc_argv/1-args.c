#include <stdio.h>
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
	(void) **argv;

	printf("%d\n", (argc - 1));

	return (0);
}
