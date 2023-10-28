#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function multiplies two numbers
 * @argc: counts the number of arguments in the program
 * @argv: an array of pointers to the argument
 *
 * Return: 0 if succesful
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
		int prd;
                int j;
                int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		j = atoi(argv[1]);
                k = atoi(argv[2]);
		prd = j * k;

		printf("%d\n", prd);
		return (0);
}
