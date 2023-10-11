#include "main.h"
/**
 * _islower - This function checks for the lower case character
 * @c: character type letter
 * Return: 1 if lowercase return 0 if not lowercase
 */
int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}

}
