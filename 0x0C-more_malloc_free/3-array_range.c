#include "main.h"
#include <stdlib.h>
/**
* array_range - a function that creates an arrayvof integers
* @min: minimum
* @max: maximum
* Return: Pointer to the new array
*/
int *array_range(int min, int max)
{
	int *pp;
	int c;

	if (min > max)
		return (NULL);
	pp = malloc(sizeof(int) * (max - min + 1));

	if (!pp)
		return (NULL);

	for (c = 0; c <= (max - min); c++)
		pp[c] = min + c;

	return (pp);
}
