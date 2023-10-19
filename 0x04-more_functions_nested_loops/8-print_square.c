#include "main.h"

/**
 * print_square - this function prints a square followed
 * by a new line
 *
 * @size: size of the square
 * Return: void.
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j == i; j++)
		{
			_putchar(35);

		}

		_putchar(35);
		_putchar(35);

	}
	_putchar('\n');
}


