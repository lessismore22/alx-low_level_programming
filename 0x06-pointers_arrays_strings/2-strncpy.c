#include "main.h"

/**
 * _strncpy - this function copies the content of string
 *
 * @dest: the string to be copied into
 * @src: the string to be copied from
 * @n: size of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

