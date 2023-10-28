#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments in the program
 * @argv: an array of pointers to the argument
 *
 * Return: 0 if succesful
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

