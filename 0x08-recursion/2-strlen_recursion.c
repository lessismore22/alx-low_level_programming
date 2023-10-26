#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string
 * @s: the string character to be counted
 *
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\n')
	{
		return (0);
	}

	len = 1 + _strlen_recursion(s + 1);


	return (len);
}
