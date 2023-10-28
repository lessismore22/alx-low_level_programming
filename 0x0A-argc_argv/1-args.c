#include <stdio.h>

/**
 * main - this function prints the number of arguments
 * passed into it
 * @argc: the number of arguments supplied into the program
 * @argv: an array of pointers of string to the arguments
 *
 * Return: 0 if succesful.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	(void)argv;
	
	printf("%d", argc - 1);
	return (0);
}	
