#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument counter
 * @argv: array of arguments
 * Return: return 0 when succesful
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(a, b));
	return (0);
}


