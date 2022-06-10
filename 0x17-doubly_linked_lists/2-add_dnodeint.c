#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of a list
 * @head: pointer to pointer of head node
 * @n: data item for new node
 *
 * Return: pointer to new node (Success), NULL (Failure)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
