#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head node
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);

	current = *head;
	data = current->n;

	*head = current->next;
	free(current);

	return (data);
}
