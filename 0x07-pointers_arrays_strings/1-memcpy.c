#include "main.h"

/**
 * simple_print_buffer - this function copies a memory area
 * @dest: where the byte will be copied to
 * @src: where the byte will be copied from
 * n: number of bytes from the memory area.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];

	}
	
	return (dest);
}	
