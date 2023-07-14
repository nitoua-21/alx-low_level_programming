#include <stdio.h>

/**
 *main - Entry point
 *
 *Description:  prints all possible combinations of two-digit numbers.
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; n < 99; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			/*Print first digit of n*/
			putchar(n / 10 + '0');
			/*Print last digit of n*/
			putchar(n % 10 + '0');
			putchar(' ');
			/*Print first digit of m*/
			putchar(m / 10 + '0');
			/*Print last digit of m*/
			putchar(m % 10 + '0');

			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
