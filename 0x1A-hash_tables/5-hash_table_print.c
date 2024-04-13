#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
*
* @ht: the hash table
*
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	unsigned long int count = 0;

	hash_node_t *first = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		first = ht->array[i];
		if (first != NULL)
		{
			while (first != NULL)
			{
				if (++count != 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", first->key, first->value);
				first = first->next;
			}
		}
	}
	printf("}\n");
}
