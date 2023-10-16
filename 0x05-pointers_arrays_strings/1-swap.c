#include "main.h"

/**
 * swap_int - this function swaps the values of two integers
 *
 * @a:integer pointer to a variable to be updated
 * @b: integer pointer to a variable to be updated
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int temp;


	temp = *b;
	*b = *a;
	*a = temp;
}

