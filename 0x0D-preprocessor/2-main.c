#include <stdio.h>

/**
 * main - this program prints the file it was compiled from
 * Return: 0 if succesful
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
