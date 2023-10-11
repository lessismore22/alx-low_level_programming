#include "main.h"
/**
 *_isalpha - this function prints all
 * alphabets in lower or uppercase
 * @c: character type
 * Return:1 if alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
