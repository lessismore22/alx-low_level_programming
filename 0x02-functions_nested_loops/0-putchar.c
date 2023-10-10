#include "main.h"
/**
 * main- this functions prints _putchar into a
 * new line
 *
 * Return:0 always successful
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
