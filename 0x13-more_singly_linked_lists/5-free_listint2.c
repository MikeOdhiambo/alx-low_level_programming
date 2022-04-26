#include "lists.h"

/**
 * free_listint2 - Frees a list and sets head to NULL
 * @head: Pointer to pointer of head node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
