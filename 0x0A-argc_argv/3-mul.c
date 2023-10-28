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
                int j = atoi(argv[1]);
                int k = atoi(argv[2]);

	if (argc != 3)
	{

		prd = j * k;

		printf("%d\n", prd);
	return (0);
	}
	else
	{
		printf("error\n");
	return (1);
	}
}
