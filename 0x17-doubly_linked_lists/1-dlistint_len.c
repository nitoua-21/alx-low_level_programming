#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list.
 * @h: pointer to head node
 *
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
