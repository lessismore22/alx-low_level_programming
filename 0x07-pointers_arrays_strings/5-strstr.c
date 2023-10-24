#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: the string
 * @needle: the substring being searched for
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
		int i;

		int j;

		for (i = 0; haystack[i] != '\0'; i++)
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}

			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}

			if (*needle == '\0')
			{
				return (haystack);
			}

		}
	return ('\0');
}
