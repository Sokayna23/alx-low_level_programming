#include "lists.h"

/**
 * free_list - frees a list
 * @head: a pointer to the head
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
