#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: a pointer to an array of integers
 * @size: the size of the array
 * @cmp: a pointer to a function
 * Return: the index, 0 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size && size > 0; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
