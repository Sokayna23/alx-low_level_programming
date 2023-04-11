#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters
 * @size: The size of the array to create
 * @c: A character
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * (sizeof(char)));
	i = 0;
	for (i = 0; i < size; i++)
	{
		if (size == 0)
			return (0);
		array[i] = c;
	}
	return (array);
	free(array);
}
