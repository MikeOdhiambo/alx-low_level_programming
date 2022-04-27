#include "lists.h"

/**
 * *reverse_listint - Reverses a linked list
 * @head: Pointer to pointer of head node
 *
 * Return: Pointer to new head, NULL (fail)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!(*head))
	{
		return (NULL);
	}
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (!next)
		{
			return (*head);
		}
		*head = next;
	}
	return (NULL);
}
