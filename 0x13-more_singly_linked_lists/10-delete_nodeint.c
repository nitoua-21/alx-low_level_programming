
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes the node at index
 * of a listint_t linked list.
 * @head: pointer to pointer of head node
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *node_to_delete;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *tmp = *head;

		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
	}
	node_to_delete = current->next;
	if (node_to_delete == NULL)
		return (-1);

	current->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
