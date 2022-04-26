#include "lists.h"

/**
 * *insert_nodeint_at_index - Insert node at given index
 * @head: Pointer to pointer of head node
 * @idx: Index of insertion
 * @n: Data value of node
 *
 * Return: Pointer to new node, NULL (Fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (!(*head))
	{
		return (NULL);
	}
	ptr = *head;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; i < idx && ptr; i++)
	{
		if (i == (idx - 1))
		{
			node->next = ptr->next;
			ptr->next = node;
			return (node);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
