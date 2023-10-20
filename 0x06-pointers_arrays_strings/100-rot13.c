#include "main.h"

/**
 * rot13 - this function encodes a string using rot 13
 * @str:string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i;
	int j;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == e[j])
			{
				str[i] = e[j];
				break;
			}
		}
	}

	return (str);
}

