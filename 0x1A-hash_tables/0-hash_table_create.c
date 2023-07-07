#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table, 
 * NULL if it failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{

		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);
}
