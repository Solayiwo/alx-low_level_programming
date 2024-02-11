#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Description: function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: The 2-dimensional array of integers to be freed
 * @height: The height of grid
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
