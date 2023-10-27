#include "main.h"

/**
 * wildcmp - this function compares two strings to check
 * if they are identical
 * @s1: 1st string character to be compared
 * @s2: 2nd string character to be compared
 * Return: returns 1 if identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{

		return (1);
	}

	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
