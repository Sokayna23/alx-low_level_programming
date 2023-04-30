#include "lists.h"

/**
 * get_nodeint_at_index - node at a given index
 * @head: pointer to the first node in the list
 * @index: position of the node
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int pos;

	if (head == NULL)
		return (NULL);
	p = head;
	pos = 0;
	while (pos != index)
	{
		p = p->next;
		pos++;
	}
	return (p);
}
