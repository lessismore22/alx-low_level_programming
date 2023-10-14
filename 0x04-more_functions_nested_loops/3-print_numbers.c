#include "main.h"

/**
 * print_numbers - this function prints numbers from 0 to 9,
 * followed by a new line.
 *
 * Return: void.
 */

int void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num ++)
	{
		_putchar(num);
	}
	
	_putchar('\n');
}	
