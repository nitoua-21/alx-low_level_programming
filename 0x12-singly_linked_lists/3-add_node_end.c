#include "lists.h"

/**
 * _strlen - finds the length of the string.
 * @str: string
 *
 * Return: length of str
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: head node
 * @str: data
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new_node = malloc(sizeof(list_t));

	if (str == NULL || strdup(str) == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
