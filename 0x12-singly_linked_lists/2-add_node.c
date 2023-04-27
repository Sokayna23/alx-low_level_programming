#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: a pointer that points to the first node in the list
 * @str: a pointer of string
 * Return: The address of the new element in success,
 * NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (str != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
	}
	else
	{
		node->str = NULL;
		node->len = 0;
	}
	node->next = *head;
	*head = node;
	return (*head);
}
