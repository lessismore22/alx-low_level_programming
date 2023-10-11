#include "main.h"
/**
 * print_last_digit - this function prints the last digit of a number
 * @x: character type
 * Return: the value of the last digit
 *
 */
int print_last_digit(int x)
{
	int n = x % 10;

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}	

	else
	{
		return (0);
	}
}
