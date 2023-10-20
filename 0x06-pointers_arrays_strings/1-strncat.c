#include "main.h"

/**
 * _strncat - this function concatenates two strings
 *
 * @dest: string character that will have another joined to itself
 * @src: string character that will be joined with the dest
 * @n: size of byte
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);

}
