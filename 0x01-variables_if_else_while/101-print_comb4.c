#include <stdio.h>

/**
 *main - Main Entry
 *
 *Description: rints all possible combinations of three-digits numbers.
 *Numbers must be separated by ,
 *followed by a space
 *Return: 0 always
 */
int main(void)
{
	int n = 0;
	int i, j;

	while (n < 8)
	{
		i = n + 1;
		while (i < 9)
		{
			j = i + 1;
			while (j < 10)
			{
				putchar(n + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (n + i + j != 24)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
