#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: head
 * @n: constant number
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
		return (node);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
