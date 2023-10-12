#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list.
 * @head: pointer to head node pointer
 * @index:  index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		free(tmp);
		*head = NULL;
		return (1);
	}
	while (tmp != NULL && i < index)
	{
		if (i == index - 1)
		{
			tmp2 = tmp->next;
			if (tmp2->next != NULL)
			{
				tmp->next = tmp2->next;
				tmp2->next->prev = tmp;
			}
			else
				tmp->next = NULL;
			free(tmp2);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
