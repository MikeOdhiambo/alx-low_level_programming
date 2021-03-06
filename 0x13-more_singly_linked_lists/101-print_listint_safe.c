#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to head node
 *
 * Return: Number of nodes, exit (Fail)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int sub;

	if (!head)
		exit(98);

	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);

		sub = head - head->next;

		if (sub > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
