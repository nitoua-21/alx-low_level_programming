#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t lis and sets head to NULL
 * @head: head node
 *
 */
void free_listint_safe(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		listint_t *tmp = current;

		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
