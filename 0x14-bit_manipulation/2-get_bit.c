#include"main.h"
/**
 * get_bit - will  return the value of a bit
 * @n: This is the value  to check bit
 * @index: Index of the value
 *
 * Return:  -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int separator, verify;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	separator = 1 << index;
	verify = n & separator;
	if (verify == separator)
		return (1);
	return (0);
}
