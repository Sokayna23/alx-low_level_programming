#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: a pointer to pointer to head node
 * Return: an integer
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (*head == NULL)
		return (0);
	p = *head;
	(*head) = (*head)->next;
	n = p->n;
	free(p);
	return (n);
}
