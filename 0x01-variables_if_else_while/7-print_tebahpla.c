#include <stdio.h>
/**
 * main- This function prints the lower case alphabet
 * in reverse
 *
 * Return:0 if succesful
 *
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	 putchar('\n');

	return (0);
}

