#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Binary string to convert.
 *
 * Return: The converted unsigned int, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1; /* Initialize the base value for the rightmost bit. */

	/* Find the length of the binary string. */
	int len = 0;
	int i; /* Declare i here to comply with C89 standards. */

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0); /* Invalid binary string, return 0. */
		len++;
	}

	/* Convert the binary string to an unsigned int. */
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += base;
		base *= 2; /* Move to the next bit position (left). */
	}

	return (result);
}

