#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to head node
 * @idx: index of the list where the new node should be added.
 * @n: integer
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *current, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	while (i < idx)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	tmp = current->next;
	current->next = new_node;
	new_node->next = tmp;

	return (new_node);
}
