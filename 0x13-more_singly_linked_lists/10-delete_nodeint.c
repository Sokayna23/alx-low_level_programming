#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the pointer to the first node
 * @index: the position of the node to delete
 * Return: 1 (success), -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *p, *node;

	if (*head == NULL || !index)
		return (-1);
	node = *head;
	p = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		node = NULL;
		return (1);
	}
	else
	{
		while (p && pos != index - 1)
		{
			p = p->next;
			pos++;
		}
		p->next = node->next;
		free(node);
		node = NULL;
		return (1);
	}
}
