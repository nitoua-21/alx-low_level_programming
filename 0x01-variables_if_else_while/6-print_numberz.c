#include <stdio.h>

/**
 *main - Main Entry
 *
 *Description: prints all single digit numbers of base 10
 *starting from 0, followed by a new line.
 *Return: 0 always
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
