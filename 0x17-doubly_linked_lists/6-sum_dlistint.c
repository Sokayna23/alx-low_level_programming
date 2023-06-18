#include "lists.h"

/**
 * sum_slistint - computes the sum of all the data of a linked list
 * @head: a pointer to the first node of the list
 * Return: the sum of all data of the list
 */
int sum_dlistint(dlistint_t *head)
{
        int sum = 0;

        while (head)
	{
		sum = sum + head->n;
		head = head->next;
        }
        return (sum);
}

