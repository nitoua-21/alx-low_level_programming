#include "hash_tables.h"

/**
 * key_index - Get the index for a key in the hash table.
 * @key: The key for which to calculate the index.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key should be stored in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
