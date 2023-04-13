#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size in bytes of the old allocated memory
 * @new_size: the size in bytes of the new memory block
 * Return: a pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *array;
	char *old_memo;

	old_memo = ptr;
	if (new_size == old_size)
		return (old_memo);

	if (old_memo && new_size == 0)
	{
		free(old_memo);
		return (NULL);
	}
	else if (old_memo == NULL)
	{
		array = malloc(new_size);
		if (!array)
			return (NULL);
		return (array);
	}

	array = malloc(new_size);
	if (array == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			array[i] = old_memo[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			array[i] = old_memo[i];
	}

	free(old_memo);
	return (array);
}
