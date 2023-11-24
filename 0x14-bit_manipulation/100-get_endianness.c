#include "main.h"

/**
 * get_endianness - this function checks for endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *z;

	x = 1;
	z = (char *)&x;
	return (*z);

}

