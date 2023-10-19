#include "main.h"

/**
 * rev_string - this function reverses a string
 *
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = *s;
		*s = tmp;
		s--;

	}
}
