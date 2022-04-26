#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Pointer to head of list
 *
 * Return: Number of elements, 0 if fail
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len;

	if (!h)
	{
		return (0);
	}
	for (len = 0; h; len++)
	{
	}
	return (len);
}
