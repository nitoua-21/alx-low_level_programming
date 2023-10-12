#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to head node pointer.
 * @idx: index of the list where the new node should be added.
 * @n: data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int step = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx > 0)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL, node->prev = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = node;
		return (node);
	}
	tmp = *h;
	if (idx == 0)
	{
		node->next = tmp;
		tmp->prev = node;
		*h = node;
		return (node);
	}
	while (tmp != NULL && step < idx)
	{
		if (step == idx - 1)
		{
			node->prev = tmp, node->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = node;
			tmp->next = node;
			return (node);
		}
		step++;
		tmp = tmp->next;
	}
	free(node);
	return (NULL);
}
