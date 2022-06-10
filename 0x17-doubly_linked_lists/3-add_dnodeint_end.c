#include "lists.h"

/**
 * add_dnodeint_end - add node to end of linked list
 * @head: pointer to pointer of head node
 * @n: data item for new node
 *
 * Return: pointer to new node (Success), NULL (Failure)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!head || !node)
		return (NULL);
	ptr = *head;

	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;
	node->prev = ptr;
	return (node);
}
