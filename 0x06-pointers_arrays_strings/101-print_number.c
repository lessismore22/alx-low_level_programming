#include "main.h"

/**
 * print_number - this function prints an integer
 * @n: integer parameter to be printed
 *
 * Return: integer value
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');

	}

	{
	if ( n == 0)
		_putchar(48);
	}

	if (num / 10)
		print_number(n/10);

}
