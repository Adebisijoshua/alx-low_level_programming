#include <stdio.h>

/**
 * check_endianness - Checks the endianness of the system.
 *
 * Return: 1 if the system is little-endian, 0 if it's big-endian.
 */
int check_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
		return (1); /* Little-endian */

	return (0); /* Big-endian */
}

/**
 * main - Entry point of the program.
 *
 * Description: This function checks the endianness of the system and prints
 * whether it's little-endian or big-endian.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	if (check_endianness())
	{
		printf("This system is little-endian.\n");
	}
	else
	{
		printf("This system is big-endian.\n");
	}

	return (0);
}

