#include "main.h"

/**
 *  set_bit - this function sets the value of a bit to 1 at
 *  a given index
 *  @n:unsigned long integer value
 *  @index:index of the bit to be set
 *  Return: 1 if succesful or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n |= (1 << index);

	return (1);

}

