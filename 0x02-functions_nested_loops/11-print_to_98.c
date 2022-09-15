#include "main.h"


/**
 *digit_count - Counts the number of digits of an integer
 *@n: the number to count digits
 *
 *Return: count of digits
 */
int digit_count(int n)
{
	int count = 0;

	do {
		n /= 10;
		count++;
	} while (n != 0);

	return (count);
}

/**
 *print_int - prints an integer on the stdout
 *@n: integer to be printed
 */
void print_int(int n)
{
	int i, j, count, divider;

	count = digit_count(n);
	divider = 1;
	/*Evaluate 10 to the power count - 1*/
	for (i = 1; i < count; i++)
		divider *= 10;
	if (n < 0)
		_putchar('-');
	for (j = divider; j > 0; j /= 10)
		_putchar(n >= 0 ? (n / j) % 10 + '0' : (-1 * n / j) % 10 + '0');
}

/**
 *print_to_98 - prints all natural numbers from n to 98.
 *@n: the first number to be printed
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_int(i);

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
			print_int(i);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
