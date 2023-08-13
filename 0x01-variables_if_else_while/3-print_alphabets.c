#include <stdio.h>
/**
 * main - To print in both lower and uppercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}

	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
