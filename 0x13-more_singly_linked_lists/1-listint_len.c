#include "lists.h"

/**
 * listint_len - list length
 * @h: a pointer to a constant listint_n
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
