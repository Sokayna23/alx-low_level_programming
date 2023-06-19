#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: a pointer to the first node of the linked list
 * @index: the index of the node that should be deleted
 * Rerurn: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_node = NULL;
	dlistint_t *next_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free (next_node);
		return (1);
	 }
	while (index > 1)
	{
		next_node = next_node->next;
		index--;
	}
	if (next_node->next == NULL)
	{
		while (next_node->next != NULL)
       			next_node = next_node->next;
		prev_node = next_node->prev;
		prev_node->next = NULL; 
		free(next_node);
		return (1);
	}
	else
	{
		prev_node = next_node->prev;
		prev_node->next = next_node->next;
		next_node->next->prev = prev_node;
		free(next_node);
		next_node = NULL;
	}
	return (1);
}
