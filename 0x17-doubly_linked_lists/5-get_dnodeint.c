#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: index of the node
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		if (i > index)
			return (NULL);
		head = head->next;
		i++;
	}
	return (NULL);
}
