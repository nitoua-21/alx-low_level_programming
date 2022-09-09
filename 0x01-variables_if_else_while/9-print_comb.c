#include <stdio.h>

/**
 *main - Main Entry
 *
 *Description: rints all possible combinations of single-digit numbers.
 *Numbers must be separated by ,
 *followed by a space
 *Return: 0 always
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
