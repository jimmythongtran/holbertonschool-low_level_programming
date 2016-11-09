#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a newly
 * created 2 dimensional integers grid
 * @width:
 * @height:
 * Return:
 */

char **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = (int **)malloc(height * sizeof(int *));

	i = 0;
	while (i < height)
	{
		grid[i] = (int **)malloc(width * sizeof(int));

		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
		j++;
		}
	i++;
	}
	return (grid);
	free (grid);
}
