#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array iterating
 * @array: a pointer to an array of integers
 * @size: the size of the array
 * @action: a pointer to a function
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size == 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
