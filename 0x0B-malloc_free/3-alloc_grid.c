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
	grid = malloc(width * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		;
	grid = malloc(height * sizeof(**grid));

	if (grid == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
		;
	grid[i][j] = 0;

	return (grid);
}
