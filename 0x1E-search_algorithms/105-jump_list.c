#include "search_algos.h"

/**
* jump_list - searches for a value in a sorted list of integers
*             using the Jump search algorithm
* @list: pointer to the head of the list to search in
* @size: number of nodes in the list
* @value: value to search for
*
* Return: pointer to the first node where value is located,
*         or NULL if value is not present in the list or if list is NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	listint_t *node = list;
	listint_t *prev_node = list;
	size_t i;

	if (!list)
		return (NULL);

	while (node && node->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

		if (node->n >= value || node->index + step >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);
			while (prev_node && prev_node->index <= node->index)
			{
				printf("Value checked at index [%lu] = [%d]\n",
				    prev_node->index, prev_node->n);
				if (prev_node->n == value)
					return (prev_node);
				prev_node = prev_node->next;
			}
			return (NULL);
		}

		prev = node->index;
		prev_node = node;
		for (i = 0; i < step && node->next; i++)
			node = node->next;
	}
	return (NULL);
}
