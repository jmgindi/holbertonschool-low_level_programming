#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: array containing arguments
 *
 * Return: pointer to string containing arguments
 * or NULL if ac == 0 || av == NULL || failure
 */

char *argstostr(int ac, char **av)
{
	char *arg_string;
	int string_size, i = 0;
	int i1, i2;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2]; i2++)
			string_size++;
		string_size++;
	}

	string_size++;

	arg_string = malloc(string_size * sizeof(char));

	if (arg_string == NULL)
		return (NULL);

	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2]; i2++)
		{
			arg_string[i] = av[i1][i2];
			i++;
		}
	}

	arg_string[i3] = '\0';

	return(arg_string);
}
