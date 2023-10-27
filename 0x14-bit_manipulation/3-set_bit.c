#include "main.h"
/**
 * set_bit - It  will give the value of a bit to 1
 * @n: int to be set
 * @index: Index of the bit to be set
 * Return: 1 if it is succcess, or -1 if it does not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int initial;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	initial = 1 << index;
	*n = *n | initial;
	return (1);
}
