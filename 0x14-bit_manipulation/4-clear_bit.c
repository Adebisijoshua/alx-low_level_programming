#include "main.h"
/**
 * clear_bit - It will set a value at a giving point
 * @n: parameter for the value
 * @index: The index the parameter will be set
 * Return: 1 if success, -1 if does noes
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
