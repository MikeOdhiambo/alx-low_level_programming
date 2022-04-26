#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: head node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
