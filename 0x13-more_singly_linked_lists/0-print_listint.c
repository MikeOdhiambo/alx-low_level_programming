#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to head of list
 *
 * Return: Number of nodes, 0 (if none)
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes;

	if (!h)
	{
		return (0);
	}
	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
