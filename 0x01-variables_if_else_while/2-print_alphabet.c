/* This is a new file, file 2 */
#include <stdio.h>
/**
 * main - This Function prints the letters of the alphabet from A-Z
 * in lower case
 *
 * Return:0 Always succesful
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
