#include "main.h"
#include <stdlib.h>
/**
  * free_grid - a function that frees a memory
  * @grid: the grid to free its memory
  * @height: the grid height
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
