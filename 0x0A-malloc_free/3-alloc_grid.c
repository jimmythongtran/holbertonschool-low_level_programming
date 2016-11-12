#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a newly created 2d integers grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: returns a pointer to a newly created 2d integers grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				--i;
			}
			free(grid);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			++j;
		}
		++i;
	}
	return (grid);
}
