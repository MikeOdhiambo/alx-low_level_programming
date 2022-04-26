#include "lists.h"

/**
 * *get_nodeint_at_index - Returns the node at an index
 * @head: head of the list
 * @index: Index of the node
 *
 * Return: Pointer to node, NULL(fail)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	if (!head || !index)
	{
		return (NULL);
	}
	ptr = head;
	for (i = 0; ptr && i < index; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
