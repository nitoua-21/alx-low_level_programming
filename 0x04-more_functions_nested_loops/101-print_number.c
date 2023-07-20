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
	int TEN = 10;

	do {
		n /= TEN;
		count++;
	} while (n != 0);

	return (count);
}

/**
 *print_number - prints an integer on the stdout
 *@n: integer to be printed
 */
void print_number(int n)
{
	int i, j, count, divider;
	int TEN = 10;

	count = digit_count(n);
	divider = 1;
	/*Evaluate 10 to the power count - 1*/
	for (i = 1; i < count; i++)
		divider *= TEN;
	if (n < 0)
		_putchar('-');
	for (j = divider; j > 0; j /= TEN)
		_putchar(n >= 0 ? (n / j) % TEN + '0' : (-1 * n / j) % TEN + '0');
}


