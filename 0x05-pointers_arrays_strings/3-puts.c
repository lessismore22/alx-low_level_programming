#include "main.h"

/**
 * _puts - this function prints a string, followed by a new
 * line to the stdout
 *
 * @str: the pointer value of the string to be printed
 *
 * Return: 0 if succesful
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
