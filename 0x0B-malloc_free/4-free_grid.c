#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid
 * @grid: a pointer to a grid of integers
 * @height: an integer
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
