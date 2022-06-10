#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}

