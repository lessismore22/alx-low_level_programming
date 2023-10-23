#include "main.h"

/**
 * _memcpy - this function copies a memory area
 * @dest: where the byte will be copied to
 * @src: where the byte will be copied from
 * @n: number of bytes from the memory area.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	int temp;

	for (i = 0; i < n; i++)
	{
		dest[i] = temp; 
		temp = src[i];

	}

	return (dest);
}
