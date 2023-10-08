/*
 * File 3
 * Author: me
*/
#include <stdio.h>
/*
 * Main: This functions prints alphabets in lower and
 * uppercase followed by a new line.
 *
 * Returns (0) if succesful
*/
int main(void)
{
	char letter1;
	char letter2;
for (letter1 = 'a'; letter1 <= 'z'; letter1++)
	{
		putchar(letter1);
	}
	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
	{
		putchar(letter2);
	}
	putchar('\n');

	return (0);
}
