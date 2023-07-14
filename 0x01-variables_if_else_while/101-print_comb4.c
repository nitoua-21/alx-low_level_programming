#include <stdio.h>

/**
 *main - Entry point
 *
 *Description:  prints all possible combinations of single-digit numbers.
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (p = m + 1; p < 10; p++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(p + '0');

				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
