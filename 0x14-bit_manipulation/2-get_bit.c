#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get, where index starts from 0.
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/* Check if the index is out of bounds. */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Error: Index out of bounds. */

	/* Shift the number to the right by the index and mask it with 1 to get the bit value. */
	bit_value = (n >> index) & 1;

	return (bit_value);
}

