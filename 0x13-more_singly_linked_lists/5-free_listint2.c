#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
