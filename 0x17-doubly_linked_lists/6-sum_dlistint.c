#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to heqd node
 *
 * Return:  the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
