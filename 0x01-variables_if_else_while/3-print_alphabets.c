/* File: 3-print_alphabets.c */
#include <stdio.h>
/**
 * main- This Function prints alphabets in lower and
 * uppercase followed by a new line.
 *
 * Return:0 Always succesful
*/
int main(void)
{
	char letter1;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
