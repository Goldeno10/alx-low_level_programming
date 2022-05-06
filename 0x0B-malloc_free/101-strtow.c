#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array.
 * @arr: nD array of char.
 * @height: height of the array.
 *
 * Return: Nothing
 */
void free_arr(char **arr, unsigned int height)
{
	if (arr != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(arr[height]);
		free(arr[height]);
		free(arr);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 * Return: pointer to a string
 */
char **strtow(char *str)
{
	char **str_out;
	unsigned int c, height, i, j, x;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	str_out = malloc((height + 1) * sizeof(char *));
	if (str_out == NULL || height == 0)
	{
		free(str_out);
		return (NULL);
	}
	for (i = x = 0; i < height; i++)
	{
		for (c = x; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				x++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				str_out[i] = malloc((c - x + 2) * sizeof(char));
				if (str_out[i] == NULL)
				{
					free_arr(str_out, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; x <= c; x++, j++)
			str_out[i][j] = str[a1];
		str_out[i][j] = '\0';
	}
	str_out[i] = NULL;
	return (str_out);
}
