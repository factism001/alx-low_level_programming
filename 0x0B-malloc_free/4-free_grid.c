#include "main.h"
#include <stdlib.h>
/**
  * free_grid - a function that frees a memory
  * @grid: the grid to free its memory
  * @height: the grid height
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
