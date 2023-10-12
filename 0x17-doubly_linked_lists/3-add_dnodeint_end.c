#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: pointer to head node pointer
 * @n: data
 *
 * Return: ddress of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	/*If first node*/
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = node;
	node->prev = tmp;

	return (node);
}
