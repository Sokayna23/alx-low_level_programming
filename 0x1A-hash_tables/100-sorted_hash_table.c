#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 * Return: a pointer to the new sorted hash table, or NULL otherwise.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(shash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	hash_table->shead = NULL;
	hash_table->stail = NULL;

	return (hash_table);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: on failure 0, Otherwise  1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *temp;
	char *val_copy;
	unsigned long int idx;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	val_copy = strdup(value);
	if (!val_copy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val_copy;
			return (1);
		}
		temp = temp->snext;
	}

	node = malloc(sizeof(shash_node_t));
	if (!node)
	{
		free(val_copy);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(val_copy);
		free(node);
		return (0);
	}
	node->value = val_copy;
	node->next = ht->array[idx];
	ht->array[idx] = node;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		node->sprev = temp;
		node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with
 * a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;
	if (!node)
		return (NULL);
	return (node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
