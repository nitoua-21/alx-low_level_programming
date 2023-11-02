#include "hash_tables.h"

/**
 * hash_table_print - Print the contents of a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long i;
	char comma = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			printf("%s'%s': '%s'", comma, current->key, current->value);
			comma = ",";
			current = current->next;
		}
	}
	printf("}\n");
}
