#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array containing arguments
 *
 * Return: pointer to new string of concatenated args
 * or NULL on failure (includes ac == 0, av == NULL)
 */

char *argstostr(int ac, char **av)
{
	//declare variables
	int x, z, i;
	char *str;

	i = 0;

	//check constraints
	if (ac == 0 || av == NULL)
		return (NULL);

	//find size of string = number of chars to allocate
	for (i = 0; i <= ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
			z++;
		//allocate space for the newline
		z++;
	}

	//allocate memory for new string plus null byte and check
	str = malloc(sizeof(char *) * (i + 1));

	if (str == NULL)
		return (NULL);

	//copy the args into the new string, separated by newlines 
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			str[i] = av[i][x];
			i++;
		str[x] = '\n';
		x++;
	}

	//add terminating null
	str[x] = '\0';

	return (str);
}
