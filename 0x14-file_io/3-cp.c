#include "holberton.h"

/**
 * main - copies the contents of one file to another
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int cpcount, ocount, o2count;
	char *buf;

	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
		return (-1);

	ocount = open(argv[1], O_RDONLY);
	if (ocount == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", argv[1]);
		exit(98);
	}

	o2count = open(argv[2], O_RDWR | O_TRUNC);
	if (o2count == -1)
	{
		close(ocount);
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
		exit(99);
	}

	(void) cpcount;

	free(buf);
	return (0);
}
