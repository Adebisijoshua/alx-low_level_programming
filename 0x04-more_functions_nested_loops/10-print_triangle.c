#include "main.h"
/**
 * print_triangle - This will print a triangle
 * @size:size is the parameter of the triangle
 * Return: This will return nothing
 */
void print_triangle(int size)
{
	int inx1, inx2;

	if (size > 0)
	{
		for (inx1 = 1; inx1 <= size; inx1++)
		{
			for ((inx2 = size - inx1); inx2 > 0; inx2--)
				_putchar(' ');

			for (inx2 = 0; inx2 < inx1; inx2++)
				_putchar('#');

			if (inx1 == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
