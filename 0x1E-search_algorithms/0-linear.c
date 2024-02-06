#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *		of integers using the Linear search algo
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array.
 * @value: the value to search for
 * Return: the first index where the value is located,
 *		or -1 if the array is NULL , or the value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

