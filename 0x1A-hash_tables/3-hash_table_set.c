# include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table.
*
* @ht: the hash table you want to add or update the key/value to
* @key: the key. key can not be an empty string
* @value: the value associated with the key. value must be duplicated.
* value can be an empty string
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *new_node = NULL;

	if (!*key)
		return (0);

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);

	/*Create the new node*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	/*Check if there a value at index*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		hash_node_t *tmp = ht->array[index];

		ht->array[index] = new_node;
		new_node->next = tmp;
	}

	return (1);
}
