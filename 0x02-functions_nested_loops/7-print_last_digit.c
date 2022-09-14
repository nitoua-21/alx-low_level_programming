#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: the number of interest.
 *
 *Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);

	return (last_digit);
}
