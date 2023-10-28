#include <stdio.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: the number of arguments supplied to the program
 * @argv:An array of pointer to the arguments
 *
 * Return: 0 if succesful
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
