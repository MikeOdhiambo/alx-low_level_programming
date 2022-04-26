#include "lists.h"

/**
 * pop_listint - remove node from list
 * @head: pointer to pointer of head node
 *
 * Return: Data at head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dat;

	if (!head || !*head)
	{
		return (0);
	}
	temp = *head;
	dat = (*head)->n;

	if (temp->next)
	{
		*head = temp->next;
	}
	else
	{
		*head = NULL;
	}
	free(temp);
	return (dat);
}
