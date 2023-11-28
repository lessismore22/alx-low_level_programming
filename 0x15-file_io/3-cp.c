#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another
 * @argc: argument count parameter
 * @argv: argument vector parameter
 * Return: 0 when succesful or an exit
 */
int main(int argc, char *argv[])
{
	int src, dst, readf;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((readf = read(src, buff, BUFSIZ)) > 0)
		if (dst == -1 || (write(dst, buff, readf) != readf))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (readf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", src);
		exit(100);
	}
	if (close(dst) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", dst);
		exit(100);
	}
	return (0);
}
