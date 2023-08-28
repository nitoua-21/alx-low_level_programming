#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list.
 * @head: head node
 * @index:  is the index of the node, starting at 0
 *
 * Return: returns the nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	return (head);
}
