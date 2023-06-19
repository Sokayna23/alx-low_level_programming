#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a pointer to the first element of the list
 * @idx: the index where the node should be added
 * @n: a number
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *prev_node = *h;
	dlistint_t *next_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1 && prev_node != NULL)
	{
		prev_node = prev_node->next;
		idx--;
	}
	if (prev_node == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}
	else if (prev_node->next == NULL)
		return (add_dnodeint_end(h, n));
	next_node = prev_node->next;
	prev_node->next = new_node;
	if (next_node != NULL)
		next_node->prev = new_node;
	new_node->next = next_node;
	new_node->prev = prev_node;
	return (new_node);
}
