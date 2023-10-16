#include "main.h"

/**
 * print_diagonal - this functional draws a diagonal line
 * on the terminal
 *
 * @n: number of times the diagonal line should be printed
 * return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
