#include <stdio.h>
/**
 * main- this function prints the alphabets excluding
 * the letters 'c' and 'e'
 *
 * Return:0 Always success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}


		putchar('\n');
		return (0);

	}
}
