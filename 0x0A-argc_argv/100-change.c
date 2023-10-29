#include <stdio.h>
#include <stdlib.h>
/**
* main - main function
* @argc: argument counter
* @argv: argument vector
* Return: 0 if successful otherwise 1
*/
int main(int argc, char **argv)
{
	int cents, coins = 0;

	/* checking the number of arguments*/
	if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{

		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
