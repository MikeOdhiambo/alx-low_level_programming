#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer to pointer of head node
 * @index: position for deletion
 *
 * Return: 1 (Success), -1 (Failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = NULL;
	dlistint_t *ptr = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		(*head)->prev = NULL;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (i < index - 1)
	{
		ptr = ptr->next;
		i += 1;
	}
	curr = ptr->next;
	ptr->next = curr->next;
	curr->next->prev = ptr;
	free(curr);

	return (1);
}

