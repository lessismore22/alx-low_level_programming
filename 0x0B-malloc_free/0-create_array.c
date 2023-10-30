#include <stdlib.h>
#include "main.h"

/**
 * create_array - this function creates an array of chars
 * and initializes it with a special char
 * @size: size of memory to print
 * @c: the character to be printed
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *) malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	*(s + i) = '\0';

	return (s);
}
