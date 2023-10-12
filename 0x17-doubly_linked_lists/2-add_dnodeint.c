#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head node pointer
 * @n: data
 *
 * Return: ddress of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	/*If head node*/
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	(*head)->prev = node;
	node->next = *head;
	*head = node;

	return (node);
}
