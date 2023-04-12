#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to 2D array 
 * @width: An integer 
 * @height: An integer
 * Return: A pointer to an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int**) * (width * height) + 1);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

}
