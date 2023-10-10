#include <stdio.h>
/**
 * main- this function prints a combination of all
 * single digit numbers with commas
 *
 * Return:0 always success;
 */

int main(void)
#include <stdio.h>
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
