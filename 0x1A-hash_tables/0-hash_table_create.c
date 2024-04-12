#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table
*
* @size: size of the arry
*
* Return:  pointer to the newly created hash table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_node_t));
	unsigned long i = 0;


	if (table == NULL || size == 0)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
