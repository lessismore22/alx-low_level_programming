#include "main.h"

/**
 * read_textfile - this function reads the textfile
 * @filename: The source of file
 * @letters: Number of letters to read and print
 * Return: returns the number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readf;
	char *buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readf = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, readf);

	free(buffer);
	close(fd);

	return (readf);

}
