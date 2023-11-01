#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this function concatenates all the arguments
 * of this program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *argstr;
	int i;
	int j;
	int k = 0;
	int len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;
	argstr = malloc(sizeof(char) * len);
	if (argstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		argstr[k] = av[i][j];
		k++;
	}
	argstr[k] = '\n';
	k++;
	}
	argstr[k++] = '\0';
	return (argstr);
}
