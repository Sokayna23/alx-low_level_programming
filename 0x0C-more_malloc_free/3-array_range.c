#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: the minimum number
 * @max: the maximum number
 * Return: a pointer to an ordred array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[i] = i;
	}
	return (array);
}
