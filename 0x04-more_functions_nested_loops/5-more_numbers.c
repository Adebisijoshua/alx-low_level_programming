#include "main.h"
/**
 * more_numbers - This will print 0 t0 14 ten times
 *
 * Return: This will return nothing
 */
void more_numbers(void)
{
	int numbers1, numbers2;

	for (numbers1 = 0; numbers1 < 10; numbers1++)
	{
		for (numbers2 = 0; numbers2 <= 14; numbers2++)
		{
			if (numbers2 > 9)
			{
				_putchar((numbers2 / 10) + '0');
			}
			_putchar((numbers2 % 10) + '0');
		}
		_putchar('\n');
	}
}
