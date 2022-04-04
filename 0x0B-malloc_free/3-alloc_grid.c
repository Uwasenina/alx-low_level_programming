#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns to a 2 dimensional array of integer
 * @width: width of the array
 * @height: height of the array
 * Return: value
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
	}
	return (grid);
}
