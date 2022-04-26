#include "lists.h"

/**
 * *add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer to pointer of the head
 * @n: data of new node
 *
 * Return: Address of new node, NULL (fail)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
