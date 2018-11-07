#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to append to
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, acount, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != 0; i++)
		;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	acount = write(fd, text_content, i);
	if (acount == -1)
		return (-1);

	close(fd);
	return (1);
}
