#include "lists.h"

/**
 * list_len - counts the number of element in a linked list
 * @h: the list we want to count its elements
 * Return: the number if elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int num_elm = 0;

	while (h)
	{
		num_elm++;
		h = h->next;
	}
	return (num_elm);
}
