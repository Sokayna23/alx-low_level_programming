#include "lists.h"

/**
 * sum_listint - sum
 * @head: a pointer to the first node of the list
 * Return: the sum of all the data of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	if (head == NULL)
		return (0);
	p = head;
	while (p != NULL)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
