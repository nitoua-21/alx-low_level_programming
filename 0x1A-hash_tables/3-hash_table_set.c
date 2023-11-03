#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table.
 * @ht: The hash table to which the element should be added or updated.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (can be an empty string).
 *
 * Return: 1 if the operation succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *val;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	val = strdup(value);
	if (!val)
		return (0);

	current = ht->array[index];
	while (current && (strcmp(key, current->key) != 0))
		current = current->next;
	if (current != NULL)
	{
		if (current->value)
			free(current->value);
		current->value = val;
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = val;
	ht->array[index] = new_node;
	new_node->next = current;

	return (1);
}
