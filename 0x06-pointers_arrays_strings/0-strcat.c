#include "main.h"

/**
 * _strcat - this function concatenates two strings
 *
 * @dest: string character that will have another joined to itself
 * @src: string character that will be joined with the dest
 *
 * Return:dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return(dest);

}	
