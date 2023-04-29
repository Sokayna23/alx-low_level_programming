#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a list
 * @head: a pointer of list_t
 * @str: a pointer of string
 * Return: the address of the new element in success, Null otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *p;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (str)
	{
		node->str = strdup(str);
		node->len = strlen(str);
	}
	else
	{
		node->str = NULL;
		node->len = 0;
	}
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = node;
	}
	return (node);
}
