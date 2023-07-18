#include "main.h"

/**
 *print_int - prints the number to the stdout.
 *@n: integer parameter
 */

void print_int(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');

	}
}


/**
 *print_times_table - prints n times table,
 *staring with 0.
 *@n: number of times
 */

void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (j == 0)
				{
					_putchar(prod + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (prod < 100)
					{
						_putchar(' ');
					}
					print_int(prod);
				}
			}
			_putchar('\n');

		}
	}
}
