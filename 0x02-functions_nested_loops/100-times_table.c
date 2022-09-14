#include "main.h"

/**
 *print_times_table - prints n times table,
 *staring with 0.
 *@n: number of times
 *
 */

void print_times_table(int n)
{
	int i, j, k, l, product, ratio, num_digits;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			ratio = product / 10;
			l = 1;

			/* Counts number of digits of n */
			while (ratio)
			{
				ratio /= 10;
				l *= 10;
			}

			for (k = l; k > 0; k /= 10)
				_putchar((product / k) % 10 + '0');

			num_digits = 1;
			ratio = (product + i) / 10;

			/*Get number of digits*/
			while (ratio)
			{
				num_digits++;
				ratio /= 10;
			}

			if (j < n)
			{
				_putchar(',');
				for (k = 0; k < 4 - num_digits; k++)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
