#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at a given position
 * @head: a pointer to the first node of the list
 * @index: the index of the node to find
 * Return: the node(Success), or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx += 1;
	}
	return (NULL);
}
