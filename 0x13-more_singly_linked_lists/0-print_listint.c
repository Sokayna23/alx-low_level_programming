#include "lists.h"

/**
 * print_listint - prints elements of a listint_t
 * @h: a pointer to a constant listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
