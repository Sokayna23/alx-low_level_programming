#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	node = head;
	while (node != NULL)
	{
		node = node->next;
		free(head);
		head = node;
	}
}
