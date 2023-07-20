#include "main.h"

/**
 *print_number - prints an integer on the stdout
 *@n: integer to be printed
 */
void print_number(int n)
{
	int count;
	double num;

	count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}


	do {
		num /= 10;
		count++;
	} while (num > 1);

	do {
		num -= (unsigned int) num;
		num = num * 10;
		_putchar('0' + (unsigned int) num);
		count--;
	} while (count > 0);

}


