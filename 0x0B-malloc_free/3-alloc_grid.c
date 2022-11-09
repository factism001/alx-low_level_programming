#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - a function that returns a pointer to a 2 dimensional array.
  * @width: width of grid
  * @height: height of grid
  * Return: pointer to array
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
		grid[i][j] = 0;

	return (grid);
}
