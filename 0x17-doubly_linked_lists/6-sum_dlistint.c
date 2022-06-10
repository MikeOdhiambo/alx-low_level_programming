#include "lists.h"

/**
 * sum_dlistint - sums all the data in list
 * @head: pointer to head node
 *
 * Return: sum (Success), 0 (Empty list)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

