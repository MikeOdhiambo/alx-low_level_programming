#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: pointer to the pointer of the head node
 * @idx: index for insertion
 * @n: data item of node
 *
 * Return: pointer to new node (Success), NULL (ailure)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = NULL;
	unsigned int i = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!h || !node)
		return (NULL);
	node->n = n;
	if (*h == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
		*h = node;
		return (node);
	}
	ptr = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i <= idx && ptr->next != NULL)
	{
		if (!ptr)
			return (NULL);
		if (i == idx - 1)
		{
			node->next = ptr->next;
			node->prev = ptr->prev;
			ptr->prev->next = node;
			ptr->next->prev = node;
			return (node);
		}
		ptr = ptr->next;
		i += 1;
	}
	if (!ptr->next)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
