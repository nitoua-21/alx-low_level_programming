#include <stdio.h>

/**
 *main - Main Entry
 *
 *Description: rints all possible combinations of two-digits numbers.
 *Numbers must be separated by ,
 *followed by a space
 *Return: 0 always
 */
int main(void)
{
	int n = 0;
	int i;

	while (n < 9)
	{
		i = n + 1;
		while (i < 10)
		{
			putchar(n + '0');
			putchar(i + '0');
			if (n + i != 17)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
