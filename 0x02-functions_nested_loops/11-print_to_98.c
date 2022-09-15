#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98.
 *@n: the first number to be printed
 *
 */

void print_to_98(int n)
{
	int i, j, k, ratio;

	ratio = n >= 0 ? n / 10 : (n / 10) * -1;
	j = 1;

	while (ratio)
	{
		ratio /= 10;
		j *= 10;
	}

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
				_putchar('-');
			for (k = j; k > 0; k /= 10)
				_putchar(i >= 0 ? (i / k) % 10 + '0' : (-1 *  i / k) % 10 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			for (k = j; k > 0; k /= 10)
				_putchar((i / k) % 10 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
