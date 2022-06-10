#include "lists.h"

/**
 * print_dlistint - print the linked list
 * @h: pointer to the nodes of the list
 *
 * Return: amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
