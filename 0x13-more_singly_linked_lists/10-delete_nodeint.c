#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at given index
 * @head: Pointer to pointer of head node
 * @index: Index of deletion
 *
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *node = NULL;
	unsigned int i;

	if (!(*head))
	{
		return (-1);
	}
	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (i = 0; ptr && i < index - 1; i++)
	{
		ptr = ptr->next;
	}
	if (!ptr || !ptr->next)
	{
		return (-1);
	}
	node = ptr->next;
	ptr->next = node->next;
	free(node);

	return (1);
}
