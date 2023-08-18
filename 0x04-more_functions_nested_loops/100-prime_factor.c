#include <stdio.h>

/**
 * main- This will print largest prime factor of a number
 *
 * Return: returns 0
 */

int main(void)
{
	long num = 612852475143;
	int inx;

	while (inx++ < num / 2)
	{
		if (num % inx == 0)
		{
			num /= 2;
			continue;
		}

		for (inx = 3; inx < num / 2; inx += 2)
		{
			if (num % inx == 0)
				num /= inx;

		}
	}
	printf("%ld\n", num);
	return (0);
}
