#include <stdio.h>

/**
 * print_to_98 - this will print all natural numbers from input to 98,
 * in order separated and comma followed by a space.
 * @n: The number to start counting is
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);

	}
}
