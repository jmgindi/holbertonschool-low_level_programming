#include "holberton.h"

/**
 * create_file - creates a file containing a string
 * @filename: file name
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int newfile, wcount, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != 0; i++)
		;

	newfile = open(filename, O_RDWR, O_TRUNC, O_CREAT, 00600);
	if (newfile == -1)
		return (-1);

	wcount = write(newfile, text_content, i);
	if (wcount == -1)
		return (-1);

	close(newfile);
	return (1);
}
