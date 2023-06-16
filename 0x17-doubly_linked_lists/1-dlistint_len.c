#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: a pointer to the first node in the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_nodes = 0;
	const dlistint_t *new;

	if (h == NULL)
		return (0);
	new = h;
	while (new)
	{
		new = new->next;
		count_nodes++;
	}
	return (count_nodes);
}
