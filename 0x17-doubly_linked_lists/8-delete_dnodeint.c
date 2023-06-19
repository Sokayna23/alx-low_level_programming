#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: a pointer to the first node of the linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_node = NULL;
	dlistint_t *next_node = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(next_node);
		return (1);
	}
	while (index > 0 && next_node != NULL)
	{
		prev_node = next_node;
		next_node = next_node->next;
		index--;
	}
	if (next_node == NULL)
		return (-1);
	prev_node->next = next_node->next;
	if (next_node->next != NULL)
		next_node->next->prev = prev_node;
	free(next_node);
	return (1);
}
