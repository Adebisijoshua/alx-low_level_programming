#include <stdio.h>

/**
 * is_little_endian - Checks if the system is little-endian.
 *
 * Return: 1 if the system is little-endian, 0 if it's big-endian.
 */
int is_little_endian(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	/* If the first byte (lowest address) of the integer is 1,
	 * it means the system is little-endian.
	 */
	return (*c == 1);
}

int main(void)
{
	if (is_little_endian())
	{
		printf("This system is little-endian.\n");
	}
	else
	{
		printf("This system is big-endian.\n");
	}

	return (0);
}

