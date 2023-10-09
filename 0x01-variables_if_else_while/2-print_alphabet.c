/* This is a new file, file 2 */
#include <stdio.h>
/**
 * main - this prints the letters of the alphabet from A-Z
 * in lower case
 *
 * Return :0 if succesful
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return (0);
}
