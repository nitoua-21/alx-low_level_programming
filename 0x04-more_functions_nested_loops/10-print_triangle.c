#include "main.h"

/**
 *print_triangle - prints a triangle of #.
 *@size: size of triangle
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j <= i + 1)
					_putchar('#');
				else
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

