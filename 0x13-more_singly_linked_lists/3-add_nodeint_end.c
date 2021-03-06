#include "lists.h"

/**
 * *add_nodeint_end - Add a node at the end of linked list
 * @head: Pointer to pointer of head
 * @n: data on node
 *
 * Return: Pointer to new node, NULL (fail)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *ptr;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	ptr = *head;

	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = node;
	return (node);
}
