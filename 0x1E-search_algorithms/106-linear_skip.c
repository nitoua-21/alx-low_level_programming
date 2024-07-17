#include "search_algos.h"

/**
* print_checked_value - Helper function to print the checked value
* @index: Index of the checked node
* @value: Value of the checked node
*/
void print_checked_value(size_t index, int value)
{
	printf("Value checked at index [%lu] = [%d]\n", index, value);
}

/**
* print_found_range - Helper function to print the found range
* @start_index: Start index of the range
* @end_index: End index of the range
*/
void print_found_range(size_t start_index, size_t end_index)
{
	printf("Value found between indexes [%lu] and [%lu]\n",
		start_index, end_index);
}

/**
* linear_skip - Searches for a value in a sorted skip list of integers
* @list: Pointer to the head of the skip list to search in
* @value: Value to search for
* Return: Pointer to the first node
* where value is located, or NULL if not found
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *prev;

	if (!list)
		return (NULL);

	node = list;
	while (node->express)
	{
		print_checked_value(node->express->index, node->express->n);
		if (node->express->n >= value)
		{
			print_found_range(node->index, node->express->index);
			break;
		}
		node = node->express;
	}

	if (!node->express)
	{
		prev = node;
		while (node->next)
			node = node->next;
		print_found_range(prev->index, node->index);
	}

	while (prev && prev->index <= node->index)
	{
		print_checked_value(prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
