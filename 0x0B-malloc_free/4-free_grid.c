#include "main.h"
/**
 * free_grid - free allocated memory for 2D array
 * @grid: Pointer to the array
 * @height: height of array
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
