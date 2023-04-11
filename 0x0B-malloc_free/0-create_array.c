#include <stdlib.h>
#include "main.h"
#include <stdio.h>

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

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * (sizeof(char)));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
