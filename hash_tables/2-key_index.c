#include "hash_tables.h"
#include <stddef.h>

/**
 * key_index - maps a key to an index in the array of a hash table
 * @key: the key to hash
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 *         (0 if key is NULL or size is 0)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	if (key == NULL || size == 0)
		return (0);

	result = hash_djb2(key);

	return (result % size);
}
