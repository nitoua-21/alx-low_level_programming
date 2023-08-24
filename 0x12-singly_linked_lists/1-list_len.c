#include "lists.h"

/**
 * print_list - counts the number of elements in a linked list_t.
 * @h: list_t head
 *
 * Return: number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
		len++, h = h->next;
	return (len);
}
