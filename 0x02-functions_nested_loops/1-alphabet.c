#include "main.h"
/**
 * print_alphabet - This function prints the alphabet in lowercase
 * using _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
	}

}



