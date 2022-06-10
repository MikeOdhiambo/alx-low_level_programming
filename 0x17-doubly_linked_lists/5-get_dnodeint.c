#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node at given index
 * @head: pointer to head node
 * @index: position of node to return
 *
 * Return: pointer to node (Success), NULL (Failure)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index && head)
	{
		if (!head->next)
			break;
		head = head->next;
		i += 1;
	}
	return (head);
}
