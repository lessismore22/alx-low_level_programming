#include "main.h"

/**
 * _isupper - This function checks for uppercase
 * character
 * @c: the character in ASCII code
 *
 * Return: 0 if successful.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
