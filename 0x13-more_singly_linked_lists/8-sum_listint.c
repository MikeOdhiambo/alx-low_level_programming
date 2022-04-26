#include "lists.h"

/**
 * sum_listint - Returns the sum of all data
 * @head: Head node
 *
 * Return: Sum, 0 if empyt list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (!head)
	{
		return (0);
	}
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
