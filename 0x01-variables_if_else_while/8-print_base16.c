#include <stdio.h>
/**
  * main - this function prints numbers of base 16 in lower case
  *
  *
  * Return: 0 Always succesful
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58 ; n++)

	{
		putchar(n);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
