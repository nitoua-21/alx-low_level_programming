#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list_t head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t node = *h;
	list_t *nodePtr;
	size_t count = 0;

	nodePtr = malloc(sizeof(list_t *));
	if (nodePtr == NULL)
		return (0);
	nodePtr = &node;

	while (nodePtr != NULL)
	{
		if (nodePtr->str == NULL)
		{
			nodePtr->str = "(nil)";
			nodePtr->len = 0;
		}
		printf("[%d] %s\n", nodePtr->len, nodePtr->str);
		nodePtr = nodePtr->next;
		count++;
	}
	free(nodePtr);
	return (count);
}
