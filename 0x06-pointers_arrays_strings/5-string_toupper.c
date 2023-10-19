#include "main.h"

/**
 * string_toupper - this function changes all lowercase of a string
 * to uppercase.
 * @str:string to change
 *
 * Return: 0 if succesful
 */

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a]; a++)

	if (str[a] >= 97 && str[a] <= 122)
	{

		str[a] -= 32;
	}

	return (str);

}
