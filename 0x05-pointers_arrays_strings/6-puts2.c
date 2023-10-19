#include "main.h"

/**
 * puts2 - this function prints every other character of a string
 * starting with the fiest character
 *
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	int j;


	for (i = 0; i != '\0' ; i++)
	{
		for (j = 0; j == i + 2; j++)
		{
			_putchar(str[i]);
		}
	}

}
