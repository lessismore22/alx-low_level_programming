#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer the dest
 */

char *cap_string(char *s)
{
		int i;
		int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}

		if (s[counter] == 44 || s[counter] == 59 || s[counter] == 46 ||
			s[counter] == 33 || s[counter] == 63 || s[counter] == 34
			|| s[counter] == 40 || s[counter] == 41 || s[counter] == 123
			 || s[counter] == 125  || s[counter] == 32 || s[counter] == '\n'
			 || s[counter] == '\t')
			if (s[counter + 1] >= 'a' && s[counter + 1] <= 'z')
				s[counter + 1]	= s[counter + 1] - 32;
		counter++;
	}

	return (s);
}

