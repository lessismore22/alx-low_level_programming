#include "main.h"

/**
 * _memset - this function fills the memory with a constant byte.
 * @s: this is a string of characters
 * @b:constant byte
 * @n: number of bytes of the memory area
 *
 * Return: 0 always if succesful
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}	
