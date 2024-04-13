#include "hash_tables.h"

/**
* hash_table_delete -  deletes a hash table.
*
* @ht: the hash table
*
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *current = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL)
		{
			while (current != NULL)
			{
				hash_node_t *tmp = current;

				current = current->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
