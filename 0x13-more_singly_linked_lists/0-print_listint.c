#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to head of list
 *
 * Return: Number of nodes, 0 (if none)
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	if (!h)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
