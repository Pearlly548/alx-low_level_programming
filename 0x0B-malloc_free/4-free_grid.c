#include "main.h"
#include <stdlib.h>

/**
 * free_grid - input frees the 2 dimensional arrays of int
 * @grid: parameter pointer to pointer for grid
 * @height: parameter for grid height
 *
 * Return: function returns 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

