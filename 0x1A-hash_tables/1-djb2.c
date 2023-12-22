#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    /* Initialize the hash value */
    unsigned long int hash = 5381;
    
    /* Iterate through each character in the string */
    int c;
    while ((c = *str++))
    {
        /* Update the hash value using the djb2 algorithm: hash * 33 + c */
        hash = ((hash << 5) + hash) + c;
    }
    
    /* Return the final hash value */
    return (hash);
}

