#include "main.h"

/**
 * _strpbrk - this function searches a string for any set of bytes
 * @s: the string
 * @accept: the prefix to be measured
 * Return: 0 if succesful
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	int c;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; accept[c] != '\0'; c++)

			if (s[b] == accept[c])
			{
				return (s + b);
			}
	}
	return ('\0');
	
}

