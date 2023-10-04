#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Entry point
 *
 * @grid: function parameter
 *
 * @height: funtion parameter
 *
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int q;

	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}
	free(grid);
}
