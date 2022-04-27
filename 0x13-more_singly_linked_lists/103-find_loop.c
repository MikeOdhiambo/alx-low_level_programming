#include "lists.h"

/**
 * *find_listint_loop - Find the loop in a linked list
 * @head: Pointer to head node
 *
 * Return: Pointer to beginning of loop, NULL (FAIL)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *trail = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);
	while (trail && fast && fast->next)
	{
		fast = fast->next->next;
		trail = trail->next;
		if (trail == fast)
		{
			trail = head;
			while (trail != fast)
			{
				trail = trail->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
