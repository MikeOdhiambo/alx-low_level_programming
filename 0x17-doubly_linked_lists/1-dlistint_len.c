#include "lists.h"

/**
 * dlistint_len - Gets the length of a doubly linked list
 * @h: pointer to the head node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	int i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i += 1;
	}
	return (i);
}
