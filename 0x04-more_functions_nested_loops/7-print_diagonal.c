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
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
		}
	}

	_putchar('\n');
}
