#include "main.h"

/**
 * _strcmp - this function compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 0 if strings equal and otherwuse if not.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;


	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];

		}


		{
			 j = s1[i] - s2[i];

		}
	}
	return (j);
	
}	
