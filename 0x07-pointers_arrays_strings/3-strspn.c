#include "main.h"

/**
 * _strspn - this function gets the length of a substring
 * @s:The string
 * @accept: The prefix to be measured
 * Return: 0 if succesful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;

	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (accept[b] == '\0')
		{
			return (a);
		}
	}
	return (a);
}
