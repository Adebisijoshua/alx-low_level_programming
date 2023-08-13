#include <stdio.h>

/**
 *main - Prints a serie of numbers with commas
 *
 * Return: Always (Success);
 */
int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);

if (n != '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
