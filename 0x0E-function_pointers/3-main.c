#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculates basic math based on args
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 on success, exit code else 
 */

int main(int argc, char *argv[])
{
	int i, k;
	char *operator;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
		exit(99);

	i = atoi(argv[1]);
	operator = argv[2];
	k = atoi(argv[3]);

	result = (get_op_func(operator)(i, k));

	printf("%d\n", result);

	return (0);
}
