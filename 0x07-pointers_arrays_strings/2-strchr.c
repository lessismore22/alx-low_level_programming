#include "main.h"

/**
 * _strchr - this function locates a character in a string
 * @s: string character
 * @c: character to be identified
 * Return: 0 if succesful
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
		
	}	
	return ('\0');
}
