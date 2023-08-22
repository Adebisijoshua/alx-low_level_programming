#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This code will generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int z, sum, m;

	sum = 0;

	srand(time(NULL));

	for (z = 0; z < 100; z++)
	{
		pass[z] = rand() % 78;
		sum += (pass[z] + '0');
		putchar(pass[z] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
}

	return (0);
}
