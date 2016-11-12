#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 *\by your alloc_grid function
 * @grid: pointer to the start of the grid
 * @height: size of the height
 *
 * Return: returns nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		++i;
	}

	free(grid);
}
