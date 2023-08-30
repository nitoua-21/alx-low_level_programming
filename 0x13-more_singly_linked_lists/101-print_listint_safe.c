
#include "lists.h"

/**
 * print_listint_safe - that prints a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int has_loop = 0;
	const listint_t *slow = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++, slow = slow->next, fast = fast->next->next;
		/* Check for the loop*/
		if (slow == fast)
		{
			has_loop = 1, slow = slow->next, fast = fast->next->next;
			break;
		}

	}

	/* If loop does not exist*/
	if (fast == NULL)
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
		}
	}
	/* If loop exits*/
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (has_loop)
		printf("->[%p] %d\n", (void *)slow, slow->n);

	return (count);
}
