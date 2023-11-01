#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array
 * @grid: multideimensional array of char
 * @height: height of the array.
 *
 * Return: void
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - this function splits a string into two
 * words
 * @str: the string word to be splitted
 * Return: pointer to an array of strings
 */


char **strtow(char *str)
{
	char **stout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	stout = malloc((height + 1) * sizeof(char *));
	if (stout == NULL || height == 0)
	{
		free(stout);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				stout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (stout[i] == NULL)
				{
					ch_free_grid(stout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			stout[i][j] = str[a1];
		stout[i][j] = '\0';
	}
	stout[i] = NULL;
	return (stout);
}
