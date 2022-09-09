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

	while (n < 9)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar(9 + '0');

	return (0);
}
