#include "main.h"

/**
 * flip_bits - this function returns the number of bits to
 * flip to get from one number to another
 * @n: unsigned long int value
 * @m: unsigned long int value
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = exclusive >> i;
		if (num & 1)
			count++;
	}

	return (count);

}
