#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this function retruns a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: this is the string to be copied
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *m;
	unsigned int i;
	unsigned int slen = 0;

	if(str == NULL)
		return (NULL);

	while (str[slen])
		slen++;

	m = malloc(sizeof(char) * (slen + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i < slen; i++)
		m[i] = str[i];
	m[slen] = '\0';

	return (m);
}
