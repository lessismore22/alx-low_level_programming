#include "main.h"

/**
 * get_bit - this function returns the value of a bit at a given index
 * @index: the index of the value to be checked
 * @n:integer value
 * Return: value of the bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return (n >> index & 1);
}
