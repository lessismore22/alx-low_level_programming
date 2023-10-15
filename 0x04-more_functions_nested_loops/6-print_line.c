#include "main.h"

/**
 * print_line - this function prints a print line statement
 *
 *@n: the number of times the line should be printed
 *
 * Return:
 */

void print_line(int n)
{

	if (n <= 0)
        {
                _putchar('\n');
	}

	else
	{	
		int i;

		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
