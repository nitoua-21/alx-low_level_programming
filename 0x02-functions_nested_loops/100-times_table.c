#include "main.h"
/**
 *print_times_table - prints n times table,
 *staring with 0.
 *@n: number of times
 *
 */


void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;

				/*print product*/
				if (prod < 10)
				{
					_putchar(prod + '0');
				}
				else if (prod < 100)
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar((prod % 10) + '0');

				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');

		}
	}
}
