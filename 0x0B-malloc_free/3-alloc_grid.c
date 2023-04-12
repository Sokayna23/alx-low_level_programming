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
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int*) * height);
		if (array == NULL)
			return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);

}
