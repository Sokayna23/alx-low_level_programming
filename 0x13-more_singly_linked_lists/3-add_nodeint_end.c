#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: head pointer
 * @n: constant number
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *p;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		p = *head;
		while (p && p->next)
		{
			p = p->next;
		}
		p->next = node;
	}
	return (node);
}
