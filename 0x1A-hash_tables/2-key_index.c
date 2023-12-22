#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * Description: function that gives you the index of a key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Calculate the hash value using the DJB2 algorithm */
    unsigned long int hash_results;
    hash_results = hash_djb2(key);

    /* If the size of the hash table is not zero, calculate the index */
    if (size != 0)
        return (hash_results % size);

    /* If the size is zero, return 0 as the index */
    return (0);
}

