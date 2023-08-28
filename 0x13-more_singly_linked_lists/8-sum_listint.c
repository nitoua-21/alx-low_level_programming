#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head node
 *
 * Return: returns the sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
