#include <stdlib.h>
/**
 *free_grid -  frees a 2 dimensional grid previously
 *created by your alloc_grid function.
 *@grid: 2D array
 *@height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
