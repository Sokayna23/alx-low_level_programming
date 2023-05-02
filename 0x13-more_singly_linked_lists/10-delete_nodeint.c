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

	if (head == NULL || *head == NULL)
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
	while (node && pos != index)
	{
		p = node;
		node = node->next;
		pos++;
	}
	if (node == NULL)
		return (-1);
	p->next = node->next;
	free(node);
	node = NULL;
	return (1);
}
