#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("Error: linked list has a loop\n");
            exit(98);
        }
    }

    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        count++;
    }

    return (count);
}
