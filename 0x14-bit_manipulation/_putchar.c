#include <unistd.h>

/**
 * _putchar - put the character c to stdout
 * @c: The char will be printed
 *
 * Return: On pass give 1,
 * On error, -1 on return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
