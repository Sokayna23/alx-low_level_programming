#include "lists.h"

/**
 * print_list - PRints the elements of a list
 * of data structure list_t
 * @h: the list that we want to print its elements
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int num_nodes = 0;

while (h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	num_nodes++;
	h = h->next;
}
return (num_nodes);
}
