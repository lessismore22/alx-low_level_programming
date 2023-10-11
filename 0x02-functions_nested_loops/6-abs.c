#include "main.h"
/**
 * _abs - this function prints the absolute value of a digit
 * @x: character type
 * Return: 0 if succesful
 *
 */
int _abs(int x)
{

	if (x > 0)
	{
		_putchar(x);
	}

	else if (x < 0)
	{
		_putchar(x);
	}

	else
	{
		_putchar(0);
	}

	return (0);
}
