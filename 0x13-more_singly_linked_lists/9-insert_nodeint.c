#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a node at a given position
 * @head: Pointer to pointer of head node
 * @idx: Insertion point
 * @n: Data value of node
 *
 * Return: Pointer to new node, NULL (Fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_int *node, *ptr;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	ptr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
	}
	node->next = ptr->next;
	ptr->next = node;

	return (node);
}
