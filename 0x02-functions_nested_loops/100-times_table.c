#include "main.h"

/**
 *print_times_table - prints n times table,
 *staring with 0.
 *@n: number of times
 *
 */

void print_times_table(int n)
{
	int i, j, product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (product <= n)
				_putchar(product + '0');
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (j < n && (product + i <= n))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
