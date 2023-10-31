#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string if succesful, otherwise
 * NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *l;
	int i;
	int j = 0;
	int c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
	{
		c++;
	}
	l = malloc(sizeof(char) * c);
		if (l == NULL)
		{
			return (NULL);
		}
	for (i = 0; s1[i]; i++)
	{
		l[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		l[j++] = s2[i];
	}
	return (l);
}
