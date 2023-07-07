#include "hash_tables.h"

/**
 * hash_table_set - Adds or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be empty.
 * @value: The value associated with key.
 *
 * Return: 0 on failure, Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i, idx;
	char *val_copy;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_copy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(val_copy);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = val_copy;
	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}

