#include "main.h"

/**
 * _puts_recursion - this function prints a string
 * followed by a new line
 * @s: string character to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	else
	{	
		_putchar(*s);
		s++;
	}
	_puts_recursion(s);	
	
}
