#include "main.h"
/**
 * flip_bits - it  will count the number of bit 
 * @n: It is the premier number
 * @m: It is the number that folllows
 *
 * Return: return number of it to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, adder = 0;
	unsigned long int updated;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		updated = exclusive >> k;
		if (updated & 1)
			adder++;
	}

	return (adder);
}
