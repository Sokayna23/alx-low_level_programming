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

	array = malloc(size * (sizeof(char)));
	array[0] = c;

	if (size == 0)
		return (0);
	return (array);
}
