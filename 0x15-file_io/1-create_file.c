#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: file name
 * @text_content: content of the text file
 * Return: int value, 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, writef;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[len])
		len++;

	writef = write(fd, text_content, len);
	if (writef == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
