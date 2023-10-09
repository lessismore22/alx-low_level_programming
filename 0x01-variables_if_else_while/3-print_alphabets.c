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
	char letter2;

	for (letter1 = 'a'; letter1 <= 'z'; i++)
	{
		putchar(letter1);
	}
	for (letter2 = 'A'; letter2 <= 'Z'; j++)
	{
		putchar(letter2);
	}
	putchar('\n');

	return (0);
}
