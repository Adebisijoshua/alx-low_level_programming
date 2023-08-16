#include "main.h"
/**
 * print_alphabet - this will print alphabet in lowercase with a newline
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
