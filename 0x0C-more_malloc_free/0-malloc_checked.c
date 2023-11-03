#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: this is the integer value to be allocated memory
 *
 * Return: pointer allocated to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)

	exit(98);

	return (p);
}
