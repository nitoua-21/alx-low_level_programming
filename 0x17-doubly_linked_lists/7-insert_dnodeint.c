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
	node->next = NULL;
	node->prev = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = node;
		return (node);
	}
	tmp = *h;
	while (tmp != NULL)
	{
		if (step == idx)
		{
			node->prev = tmp->prev;
			node->next = tmp;
			tmp->prev->next = node;
			tmp->prev = node;

			return (node);
		}
		step++;
		tmp = tmp->next;
	}

	return (NULL);

}
