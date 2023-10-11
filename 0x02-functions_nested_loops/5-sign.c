#include "main.h"
/**
 * print_sign - this function prints the sign of an integer
 *if it is positive, negative or zero
 * @n: character type
 *
 * Return: 1 if positive -1 if negative or 0 if zero.
 *
 */
int print_sign(int n)
{
	char c;
	int i;

	if (n > 0)
	{
		_putchar(43);

		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);

		return (-1);
	}

	else
	{
		_putchar(48);

		return (0);
	}
}
