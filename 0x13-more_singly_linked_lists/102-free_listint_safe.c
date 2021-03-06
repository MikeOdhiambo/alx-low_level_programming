#include "lists.h"

/**
 * free_listint_safe - Free memory from a list
 * @h: Pointer to pointer of head node
 *
 * Return: Number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int sub;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		sub = *h - (*h)->next;

		if (sub > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
