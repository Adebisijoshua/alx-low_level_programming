#include "main.h"
/**
 * flip_bits - This function will count
 * the number of bits to be change
 * to get from one number to another
 * @n: This is the first number
 * @m: This is the second number
 *
 * Return: number of bits to change is going to be returned.
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
