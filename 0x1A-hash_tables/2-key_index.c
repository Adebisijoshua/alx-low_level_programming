#include "hash_tables.h"

/**
 * key_index - funct that gives user the index of a key
 *
 * Description: function that gives user the index of a key
 *
 * @key: Key of the function
 * @size: the aaray size of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_results;

	hash_results = hash_djb2(key);
	if (size != 0)
		return (hash_results % size);
	return (0);
}
