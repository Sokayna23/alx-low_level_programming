#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserts n new node at a given position
 * @head: a pointer to the pointer to the first node
 * @idx: the position
 * @n: data
 * Return: the address of the nwe node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous, *node;
	unsigned int pos = 0;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	previous = *head;
	while (previous)
	{
		if (pos == idx)
		{
			node->next = previous->next;
			previous->next = node;
			return (node);
		}
		previous = previous->next;
		pos++;
	}
	free(node);
	return (NULL);
}

