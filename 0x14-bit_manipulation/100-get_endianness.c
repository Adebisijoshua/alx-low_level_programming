#include "main.h"

/**
 * take_endianness - it will checks the endianness
 *
 * Return: 0 if large endianess, 1 if small endianess
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}

