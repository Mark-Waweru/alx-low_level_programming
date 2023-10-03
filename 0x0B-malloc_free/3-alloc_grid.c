#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: The width of the 2d
 * @height: The height of the 2d
 *
 * Return: Null, grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for(; i >= 0; i--)
			{
				free(grid[i]);
				free(grid);
				return (NULL);
			}
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
