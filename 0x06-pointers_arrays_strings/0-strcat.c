#include "main.h"

/**
 * _strcat - this function concatenates two strings
 *
 * @dest: string character that will have another joined to it
 * @src: string character that will be joined with the dest
 *
 * return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		++dest;
		i++;
	}
	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}

	dest[i] = '\0';

	return(dest);
}
