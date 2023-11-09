#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - this function searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used
 * to compare values
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
